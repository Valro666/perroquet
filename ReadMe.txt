﻿Pour récupérer proprement le projet :
   - crée un nouveau "Projet Win32" nommé "Perroquet" avec Visual Studio 2010 Express Edition
   - dans l'assistant cliqué sur suivant
   - dans les options suplémentaires coché l'option "Projet vide"
   - cliquer sur Terminer
   - fermer Visual Studio 2010
   - ouvrir un client git
   - ce placer dans le dossier .../Visual Studio 2010/Projects/Perroquet/Perroquet  (... corespond a /Documents)
   - un ls vous donnera ce resultat "Perroquet.vcxproj Perroquet.vcxproj.filters Perroquet.vcxproj.user"
   - ces 3 fichiers sont à supprimer (il sont versionner est seront donc récuperé)
   - rm *
   - git clone https://github.com/Valro666/perroquet .
   - double cliquer sur le projet .../Visual Studio 2010/Projects/Perroquet/Perroquet/Perroquet.vcxproj (une icone de fenêtre)



Pour crée une vue :
	Quasiment tous ce passe dans Perroquet.cpp. Il y a 4 fonction a crée dans Perroquet.cpp (prendre en exemple celle sur connexion) :
		- HWND getFenetre<NomFenetre>();
		crée la classe de la fenetre ainsi que la fenetre (c'est ici qu'on lie le menu a la fenetre (voir Perroquet.rc pour le menu), ainsi que la procedure de cette fenetre)
		
		- LRESULT CALLBACK procedureFenetre<NomFenetre>(HWND, UINT, WPARAM, LPARAM);
		la procedure de la fenetre, c'est elle qui regarde le message et qui fait l'action corespondante (le minimum etant CREATE et DESTROY)
		
		- VOID buildFenetre<NomFenetre>(HWND fenetrePrincipale);
		cette procedure construit la fenetre et elle est a placer dans le case CREATE dans la procedure principal, essentiellement constituer de CreateWindow()
		
		- VOID commandFenetre<NomFenetre>(HWND fenetrePrincipale, WPARAM wParam);
		cette procedure est celle qui va gérer les actions de l'utilisateur en faisant un switch sur le message (a placer dans le case COMMAND de la procedure principal)

		le reste est a definire dans les fichiers Constante.h (notament les ID a envoyer lors de clic sur le bouton)
		ces Id auront cette forme : 
		ID_<NomFenetre>_<NomComposant>_<Action>


Pour modifier le charset (obligatoire pour les conversion entre string et LPTSTR)
   - Projet -> Proprietes de Perroquet -> Proprietes de configuration -> General -> Jeu de caractères : choisir multi-octet










Read me générer par Visual Studio

========================================================================
    APPLICATION WIN32 : Vue d'ensemble du projet Perroquet
========================================================================

AppWizard a créé cette application Perroquet pour vous.

Ce fichier contient un résumé des éléments contenus dans chaque fichier qui
constitue votre application Perroquet.


Perroquet.vcxproj
    Il s'agit du fichier projet principal pour les projets VC++ générés à 
    l'aide d'un Assistant Application.
    Il contient des informations relatives à la version de Visual C++ qui a 
    généré le fichier, ainsi que des informations sur les plateformes, 
    configurations et fonctionnalités du projet que vous avez sélectionnées dans
    l'Assistant Application.

Perroquet.vcxproj.filters
    Il s'agit du fichier de filtres pour les projets VC++ générés à l'aide d'un 
    Assistant Application. 
    Il contient des informations sur l'association entre les fichiers de votre 
    projet et les filtres. Cette association est utilisée dans l'IDE pour 
    afficher le regroupement des fichiers qui ont des extensions similares sous 
    un nœud spécifique (par exemple, les fichiers ".cpp" sont associés au 
    filtre "Fichiers sources").

Perroquet.cpp
    Il s'agit du fichier source principal de l'application.

/////////////////////////////////////////////////////////////////////////////
AppWizard a créé les ressources suivantes :

Perroquet.rc
    Il s'agit de la liste de toutes les ressources Microsoft Windows utilisées 
    par le programme. Il inclut les icônes, les bitmaps et les curseurs qui 
    sont stockés dans le sous-répertoire RES. Ce fichier peut être directement 
    modifié dans Microsoft Visual C++.

Resource.h
    Il s'agit du ficher d'en-tête standard, qui définit les nouveaux ID de 
    ressources.
    Microsoft Visual C++ lit et met à jour ce fichier.

Perroquet.ico
    Il s'agit d'un fichier icône, qui est utilisé comme icône de l'application 
    (32x32).
    Cette icône est incluse par le fichier de ressources principal 
    Perroquet.rc.

small.ico
    Il s'agit d'un fichier icône qui contient une version plus petite (16x16)
    de l'icône de l'application. Cette icône est incluse par le fichier de 
    ressources principal Perroquet.rc.

/////////////////////////////////////////////////////////////////////////////
Autres fichiers standard :

StdAfx.h, StdAfx.cpp
    Ces fichiers sont utilisés pour générer un fichier d'en-tête précompilé 
    (PCH) nommé Perroquet.pch et un fichier de types précompilés 
    nommé StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Autres remarques :

AppWizard utilise des commentaires "TODO:" pour indiquer les parties du code 
source où vous devrez ajouter ou modifier du code.

/////////////////////////////////////////////////////////////////////////////
