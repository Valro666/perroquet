// Perroquet.cpp : définit le point d'entrée pour l'application.
//

#include "stdafx.h"
#include "Perroquet.h"

//declaration des variables
int modeDAffichageFenetre;

HWND fenetreConnexion;
HWND fenetreConnexion_EditTextLogin;
HWND fenetreConnexion_EditTextMdp;

HWND fenetreInscription;
HWND fenetreInscription_EditTextLogin;
HWND fenetreInscription_EditTextMdp;
HWND fenetreInscription_EditTextMdpConfirm;

HINSTANCE instance;

//declaration des fonctions de création des fenetres
HWND getFenetreConnexion();
HWND getFenetreInscription();

//declaration des procedures de gestion des fenetres
LRESULT CALLBACK procedureFenetreConnexion(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK procedureFenetreInscription(HWND, UINT, WPARAM, LPARAM);

//declaration des fonctions de construction des vues
VOID buildFenetreConnexion(HWND fenetrePrincipale);
VOID buildFenetreInscription(HWND fenetrePrincipale);

//declaration des fonctionsde commande
VOID commandFenetreConnexion(HWND fenetrePrincipale, WPARAM wParam);
VOID commandFenetreInscription(HWND fenetrePrincipale, WPARAM wParam);

int APIENTRY WinMain(HINSTANCE cetteInstance, HINSTANCE precedenteInstance,
LPSTR lignesDeCommande, int modeDAffichage)
{
	modeDAffichageFenetre = modeDAffichage;
	instance = cetteInstance;
    MSG message;
    fenetreConnexion = getFenetreConnexion();
	fenetreInscription = getFenetreInscription();
	if (!fenetreConnexion) return FALSE;
	//mettre ici dans le showwindows la fenetre que le veut tester sinon mettre fenetreConnexion pour un comportement normal
    ShowWindow(fenetreConnexion, modeDAffichageFenetre);
	ShowWindow(fenetreInscription, SW_HIDE);
    UpdateWindow(fenetreConnexion);


    while (GetMessage(&message, NULL, 0, 0))
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }
    return message.wParam;
}

//fonction de création des fenetres :

HWND getFenetreConnexion(){
	HWND rep;
	WNDCLASS classeFenetre;

    classeFenetre.style = 0;
    classeFenetre.lpfnWndProc = procedureFenetreConnexion;
    classeFenetre.cbClsExtra = 0;
    classeFenetre.cbWndExtra = 0;
    classeFenetre.hInstance = NULL;
    classeFenetre.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    classeFenetre.hCursor = LoadCursor(NULL, IDC_ARROW);
    classeFenetre.hbrBackground = (HBRUSH)(1 + COLOR_BTNFACE);
    classeFenetre.lpszMenuName =  TEXT("ID_MENU_CONNEXION");
    classeFenetre.lpszClassName = TEXT("classeFConnexion");

    // On prévoit quand même le cas où ça échoue
    if(RegisterClass(&classeFenetre)){
    rep = CreateWindow(TEXT("classeFConnexion"), TEXT("Perroquet - Connexion"), WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
                                   CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
                                                   NULL, NULL, instance, NULL);
	}
	return rep;
}
HWND getFenetreInscription(){
	HWND rep;
	WNDCLASS classeFenetre;

    classeFenetre.style = 0;
    classeFenetre.lpfnWndProc = procedureFenetreInscription;
    classeFenetre.cbClsExtra = 0;
    classeFenetre.cbWndExtra = 0;
    classeFenetre.hInstance = NULL;
    classeFenetre.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    classeFenetre.hCursor = LoadCursor(NULL, IDC_ARROW);
    classeFenetre.hbrBackground = (HBRUSH)(1 + COLOR_BTNFACE);
    classeFenetre.lpszMenuName =  TEXT("ID_MENU_INSCRIPTION");
    classeFenetre.lpszClassName = TEXT("classeFInscription");

    // On prévoit quand même le cas où ça échoue
    if(RegisterClass(&classeFenetre)){
    rep = CreateWindow(TEXT("classeFInscription"), TEXT("Perroquet - Inscription"), WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
                                   CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
                                                   NULL, NULL, instance, NULL);
	}
	return rep;
}
//procedure des fenetre :

LRESULT CALLBACK procedureFenetreConnexion(HWND fenetre, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
		case WM_SHOWWINDOW :
			//on rafraichie la vue si besoin
			return 0;
        case WM_CREATE:
			buildFenetreConnexion(fenetre);
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
		case WM_COMMAND:
			commandFenetreConnexion(fenetre,wParam);
        default:
            return DefWindowProc(fenetre, message, wParam, lParam);
    }
}
LRESULT CALLBACK procedureFenetreInscription(HWND fenetre, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
		case WM_SHOWWINDOW :
			//on rafraichie la vue si besoin
			
					MessageBox(fenetre, TEXT("show inscription"), TEXT("Bonjour."), MB_ICONINFORMATION);
			return 0;
        case WM_CREATE:
			buildFenetreInscription(fenetre);
					MessageBox(fenetre, TEXT("create inscription"), TEXT("Bonjour."), MB_ICONINFORMATION);
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
		case WM_COMMAND:
			commandFenetreInscription(fenetre,wParam);
        default:
            return DefWindowProc(fenetre, message, wParam, lParam);
    }
}

//fonction de constructon des vues :

VOID buildFenetreConnexion(HWND fenetrePrincipale){
	HWND label1 = CreateWindow(
		TEXT("STATIC"),
		TEXT("Nom d'utilisateur :"),
		WS_VISIBLE | WS_CHILD | ES_RIGHT,
		40,42,
		120,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	fenetreConnexion_EditTextLogin=CreateWindow(
        TEXT("EDIT"),
        TEXT(""),
        WS_CHILD|WS_VISIBLE|ES_LEFT,
        180,40,
        160,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);

	HWND label2 = CreateWindow(
		TEXT("STATIC"),
		TEXT("Mot de passe :"),
		WS_VISIBLE | WS_CHILD | ES_RIGHT,
		60,72,
		100,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	fenetreConnexion_EditTextMdp=CreateWindow(
        TEXT("EDIT"),
        TEXT(""),
        WS_CHILD|WS_VISIBLE|ES_LEFT|ES_PASSWORD ,
        180,70,
        160,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	HWND boutonConnexion =CreateWindow(
		TEXT("BUTTON"),
        TEXT("Connexion"),
        WS_CHILD|WS_VISIBLE ,
        100,110,
        160,20,
        fenetrePrincipale,
        (HMENU)ID_CONNEXION_BOUTON_CONNEXION,
        instance,
        NULL);
}
VOID buildFenetreInscription(HWND fenetrePrincipale){
	HWND label1 = CreateWindow(
		TEXT("STATIC"),
		TEXT("Nom d'utilisateur :"),
		WS_VISIBLE | WS_CHILD | ES_RIGHT,
		60,42,
		120,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	fenetreInscription_EditTextLogin=CreateWindow(
        TEXT("EDIT"),
        TEXT(""),
        WS_CHILD|WS_VISIBLE|ES_LEFT,
        200,40,
        160,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);

	HWND label2 = CreateWindow(
		TEXT("STATIC"),
		TEXT("Mot de passe :"),
		WS_VISIBLE | WS_CHILD | ES_RIGHT,
		80,72,
		100,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	fenetreInscription_EditTextMdp=CreateWindow(
        TEXT("EDIT"),
        TEXT(""),
        WS_CHILD|WS_VISIBLE|ES_LEFT|ES_PASSWORD ,
        200,70,
        160,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	HWND label3 = CreateWindow(
		TEXT("STATIC"),
		TEXT("Confirmer mot de passe :"),
		WS_VISIBLE | WS_CHILD | ES_RIGHT,
		15,102,
		165,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	fenetreInscription_EditTextMdpConfirm=CreateWindow(
        TEXT("EDIT"),
        TEXT(""),
        WS_CHILD|WS_VISIBLE|ES_LEFT|ES_PASSWORD ,
        200,100,
        160,20,
        fenetrePrincipale,
        NULL,
        instance,
        NULL);
	HWND boutonConnexion =CreateWindow(
		TEXT("BUTTON"),
        TEXT("Inscription"),
        WS_CHILD|WS_VISIBLE ,
        100,140,
        160,20,
        fenetrePrincipale,
        (HMENU)ID_INSCRIPTION_BOUTON_INSCRIPTION,
        instance,
        NULL);
}

//fonctions de commande :
VOID commandFenetreConnexion(HWND fenetrePrincipale, WPARAM wParam){
	switch(LOWORD(wParam))
            {
                case ID_CONNEXION_MENUITEM_INSCRIPTION:
					ShowWindow(fenetreConnexion, SW_HIDE);
					ShowWindow(fenetreInscription, modeDAffichageFenetre);
                    break;

                case ID_CONNEXION_BOUTON_CONNEXION:
					int login_len = SendMessage(fenetreConnexion_EditTextLogin, WM_GETTEXTLENGTH, 0, 0);
					LPTSTR login = new TCHAR[login_len];; 
					Edit_GetText(fenetreConnexion_EditTextLogin, login, login_len+1);
					
					int mdp_len = SendMessage(fenetreConnexion_EditTextMdp, WM_GETTEXTLENGTH, 0, 0);
					LPTSTR mdp = new TCHAR[mdp_len];; 
					Edit_GetText(fenetreConnexion_EditTextMdp, mdp, mdp_len+1);

					using namespace std;

					string text = "login : "+(string)login+"\nmdp : "+(string)mdp;
					//TODO coder la connexion et rajouter le model
					MessageBox(fenetrePrincipale, text.c_str(), TEXT("Bonjour."), MB_ICONINFORMATION);
                    break;
            }
}

VOID commandFenetreInscription(HWND fenetrePrincipale, WPARAM wParam){
	switch(LOWORD(wParam))
            {
                case ID_INSCRIPTION_BOUTON_INSCRIPTION :
					MessageBox(fenetrePrincipale, TEXT("inscription"), TEXT("Bonjour."), MB_ICONINFORMATION);
                    break;
				case ID_INSCRIPTION_MENUITEM_RETOUR :
					ShowWindow(fenetreConnexion, modeDAffichageFenetre);
					ShowWindow(fenetreInscription, SW_HIDE);
                    break;
            }
}