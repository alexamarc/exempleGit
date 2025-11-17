
Voici les commandes pour commande suivante pour compiler dans le dossier racine :
 
g++ -I. ihm/*.cpp -c
g++ -I. main.cpp -c
g++ *.o -o exe
 
 *Pour travailler sur le projet :
 
 **git git@github.com:alexamarc/exempleGit.git
 
 
 
 **Créer une nouvelle branch qui N'EXISTE PAS sur le dépot gitHub: 
 
 git switch -c "nom"
 
  **Pousser (push) ET créer une nouvelle branche sur gitHub :
 
 git push -u origin "nom"
 
 /!\ Attention le gitHUB doit être le plus propre possible !!!!
 
 
 **Si la branch EXISTE sur gitHub alors 
 
 git fetch      // Pour metre à jour notre dépot local
 git branch -r  // Pour voir les branches distantes disponibles
 
 git switch -c "nom" origin/"nom"
 
 **AVANT TOUT TRAVAIL S'ASSURER QUE L'ON A LA DERNIERE VERSION : 
 
 git fetch origin
 git checkout "LaBranche"
 git pull
 
 -> faire les modifications que l'on veut, il faut penser à faire des commits régulièrement
 
 **Une fois que l'on veut merge avec dev :
 
 1) S'assurer que la branch dev est à jour (voir le point au dessus)
 2) Ici deux solutions :
 	2.1) Soit on merge le dev dans ça branche et on push
 	
 	
 	git checkout "BranchsDestination"
 	git merge "brancheSource"
 	git push origin "BranchsDestination"
 	
 	=> On garde l"historique réel des merges, cela peut complexifier le grah

	2.2) On "rebase" nos commits (gitHub garde l'historique linaire des commits)
	
	git checkout BranchsDestination"
	git rebase dev
	git push origin <nom_branche> --force-with-lease  // pour protéger les modifications des autres s'il y a
	
	/!\ Dans TOUS LES CAS IL FAUT S'ASSURER DE LA BONNE VERSION DES DEPOTS /!\
