

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#define PORT 4000
main() {
   struct sockaddr_in address;
   int my_socket = 0, valread;
   struct sockaddr_in server_address;
   char str[100];
   int l;
   printf("message: ");
   fgets(str, 100, stdin); 
   char buffer[1024] = { 0 }; /
   if ((my_socket = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
      printf("\nUnable to create Socket \n");
      return -1;
   }
   memset(&server_address, '0', sizeof(server_address));
   server_address.sin_family = AF_INET;
   server_address.sin_port = htons(PORT);
   if (inet_pton(AF_INET, "127.0.0.1", &server_address.sin_addr) <= 0) {
      printf("\nThe address is not supported \n");
      return -1;
   }
   // connect the socket
   if (connect(my_socket, (struct sockaddr*)&server_address, sizeof(server_address)) < 0) {
      printf("\nUnable to connect to the server \n");
      return -1;
   }
   l = strlen(str);
   send(my_socket, str, sizeof(str), 0); 
   valread = read(my_socket, str, l); 
   printf("%s\n", str);
}
