# clienserveprojet

# Realisation du projet 

# programme 1 : github, 
            - creation de projet
            - copier le lien dans le code de github 

# programme 2 : dans la terminal 

       - cretion de fichier pour stocker le projet, commande mkdir  
       - clonnage c'est a dire coller le  lien qu'on a copier dans  github par la commande: git clone (coller le lien)
       
# programme 3 : creation d'un autre dossier et le code( après le clonnage)

      - on tape la commande ls, pour savoir le fichier ou le dossier qui existe et pour connaitre qu'on est dans la bonne direction. Pour savoir il y a le fichier Readmen.md
      - et créer un autre dossier par la commande mkdir ( ici le nom de  dossier c'est tcp)
      - dans le tcp qu'on doit mettre le fichier de notre code (fichier c, code c), la commande pour rentrer  dans le tcp est : cd tcp 
      
###  basculer dans le tcp 
     - on doit créér deux fichier c : Clinet.c et Server.c 
     on utilise la commande suivante:
-nano client.c pour creer et  taper le code. Quitter la commande ctrl x, ensuite o et entrer
-nano Server.c meme chose que client.c 

# programmation 4 : l'execution 

### premierement on ouvre deux fenetre de terminal 
 - pour serveur 
 - pour client 
 
### la commande qu'on doit utiliser:
 - dans le terminal serveur commande : gcc Server.c -o Server (on fait entrer), ensuite on tape la commande de ./Server 
 - dans le terminal Client meme commande: mais Client 
 - ecrire de message pour client et repondre 
 
# programme 5 : Mettre a jour et message commit ( après l'execution ) 
 mettre a jours pour que le travail est enregistrer dans le github 
  - on donne la permission, commande on fait, git status(on voit que c'est encore en rouge) 
  - ensuite git add .
  - on retourne a la git status (la couleur a changer en vert)
  - on donne de message la commande git commit -m "message"(v.0)
  
  ### fin mise a jours le branch master 
  la commande git push origin master 
  
      
 
 


          
  
