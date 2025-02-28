#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
typedef struct {
    char nom[50];
    char payssaf[30];
    char climat[100];
    char meilleurperiode[100];
    char commentSyrendre[200];
}parc;
typedef struct {
char nom[20],prnom[20],username[20],password[20],adress[60],date[14];
int sexe,age,duree,adul,enfant;
}user;
typedef struct {
char nom[20];
int cvv;
int mm;
int aa;
char num[17];
}paiment;
void choix_indisponible();
int menu_safari();
int isZeroChar(const char *str);
void a_propo_de_nous();
void voyagesup();
void envoloppe();
void information_saf ();
void delay(int milliseconds);
void affichagedepage1();
void lireMotDePasse(char *password, int maxLen);
int tableau_activ(int n,int t[]);
int prixres(int res);
int prixheb(int h1[], int duree);
void recu(char *date,int total,float prix);
int verifierDate(char *date);
void reservation();
void cree();
void existe ();
void nom_utilisateur1();
void premiere();
void compte();
void destination();
void date();
void duree();
void compagnant();
void activite_seren();
void activite_falls();
void activite_Kruger ();
void activite_Chobe ();
void activite_Virunga ();
void activite_masai();
void activite_sabi();
void activite_Etosha();
void heberge();
void payment();
void prenom();
void nom();
void age();
void nom_utilisateur();
void adress();
void mot_pass();
void sexe();
void restau_mus();
void restau_parc();
void restau();
void surp_cd();
void reservdej();
void surp_affsrp();
void surp_vlsrp();
void reservation();
void cree();
void dec_masai();
void dec_seren();
void dec_sabi();
void dec_etosha();
void dec_falls();
void dec_virunga();
void dec_chobe();
void dec_kruger();
void a_propo_de_nous();


int main() {
    int choix1;
    int choix_parc;
    affichage_page1();
start :
    do {
            premiere();
            scanf("%d", &choix1);
            system("cls");

            switch (choix1) {
                case 1:
                    while (1) {
                        choix_parc = menu_safari();
                        if (choix_parc > 0 && choix_parc <= 8 ) {
                                switch(choix_parc){
                                case 1:
                                  dec_masai();
                                  getch();
                                  system("cls");
                                  break;
                                case 2:
                                   dec_seren();
                                   getch();
                                   system("cls");
                                   break;
                                case 3:
                                    dec_falls();
                                    getch();
                                    system("cls");
                                    break;
                                case 4:
                                    dec_chobe();
                                    getch();
                                    system("cls");
                                break;
                                case 5:
                                    dec_virunga();
                                    getch();
                                    system("cls");
                                break;
                                case 6:
                                    dec_kruger();
                                    getch();
                                    system("cls");
                                break;
                                case 7:
                                    dec_etosha();
                                    getch();
                                    system("cls");
                                break;
                                case 8:
                                    dec_sabi();
                                    getch();
                                    system("cls");
                                break;
                                }

            }
            else if(choix_parc==0){
             goto start;
            }

            else {
                    choix_indisponible();
            }
        }



                case 2:
                    reservation();
                    getch();
                system("cls");
                    goto start;
                    break;
                case 3:
                a_propo_de_nous();
                getch();
                system("cls");
                goto start;
                case 4:
                    printf("\n\t\t*-*-*-*-*-*Merci d'avoir utilis%c notre programme*-*-*-*-*-*",130);
                    printf("\n\t\t*-*-*-*-*-*Votre prochaine r%cs%cervation vous attend*-*-*-*-*-*",130,130);
                    break;
            }
} while (choix1 <= 0 || choix1 > 4);





    return 0;
}
void choix_indisponible(){
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t+--------------------------------------------------------------+\n");
    printf("\t\t\t\t|\tVotre choix n'est pas disponible pour le moment.       |\n");
    printf("\t\t\t\t|\tVeuillez choisir un choix valide!                      |\n");
    printf("\t\t\t\t+--------------------------------------------------------------+\n");
    printf("\t\t\t tapez une boutton pour aller a la page suivant ");
    getch();
    system("cls");
}
void decouvrire(){


}
void dec_masai(){
    printf("\n\n\n");
    printf("\t\t************************************** { SAFARI AVENTURE } ******************************************\n\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*\t                                                                                            *\n");
    printf("\t\t*                                  *****{ < MASAI MARA > }*****                                     *\n");
    printf("\t\t*\t+------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 1 510 km2                              *\n",130);
    printf("\t\t*    -----------                                                                                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* -> FAUNE:Vari%ct%c d'animaux sauvages:des lions, des l%copards, des gu%cpards, des %cl%cphants, des     *\n",130,130,130,130,130,130);
    printf("\t\t*    -----                                                                                          *\n");
    printf("\t\t*          des girafes, des buffles, des hippopotames, des crocodiles, et bien d'autres encore.     *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->CULTURE MASAI:Les habitants traditionnels de la r%cgion sont les Masai, une tribu semi-nomade    *\n",130);
    printf("\t\t*   -------------                                                                                   *\n");
    printf("\t\t*                  connue pour leur culture riche et leur style de vie pastoral.                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'avoir des vaccinations %c jour et rester loin des animaux                   *\n",133);
    printf("\t\t*   -----                                                                                           *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*    **En somme, la r%cserve nationale du Masai Mara offre une exp%crience de safari inoubliable, avec*\n ",130,130);
    printf("\t\t* une abondance de faune sauvage,des paysages spectaculaires et une immersion dans la culture       *\n ");
    printf("\t\t* fascinante des Masai.**                                                                           *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*****************************************************************************************************\n");
};
void dec_chobe(){
    printf("\n\n\n");
    printf("\t\t************************************** { SAFARI AVENTURE } ******************************************\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*\t                                                                                            *\n");
    printf("\t\t*                                    *****{ < CHOBE > }*****                                        *\n");
    printf("\t\t*\t+------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 11 700 kilom%ctres carr%cs.              *\n",130,138,130);
    printf("\t\t*    -----------                                                                                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* -> FAUNE:les lions, les l%copards, les %cl%cphants, les girafes, des buffles,                        *\n",130,130,130);
    printf("\t\t*    -----                                                                                          *\n");
    printf("\t\t*          des hippopotames, des crocodiles,des antilopes et des ecp%cces des oiseaux.               *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->CULTURE CHOBE:est impr%cgn%ce de l'h%critage des peuples autochtones San/Basarwa,refl%ctant leur    *\n",130,130,130,130);
    printf("\t\t*   -------------                                                                                   *\n");
    printf("\t\t*                traditions de chasse, leur art rupestre et leur connexion profonde avec la nature. *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'avoir des vaccinations %c jour et rester loin des animaux,                  *\n",133);
    printf("\t\t*   -----                                                                                           *\n");
    printf("\t\t*         protection contre les piq�res d'insectes,protection solaire.                              *\n");
    printf("\t\t*                                                                                                   *\n ");
    printf("\t\t*    ** Chobe est une destination de safari mondiale offrant une exp�rience incroyable d'observation*\n ");
    printf("\t\t* dans un cadre naturel spectaculaire!**                                                            *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*****************************************************************************************************\n");
};
void dec_seren(){
    printf("\n\n\n");
    printf("\t\t******************************************* { SAFARI AVENTURE } ***********************************************\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t*\t                                                                                                      *\n");
    printf("\t\t*                                       *****{ < SERENGETI > }*****                                           *\n");
    printf("\t\t*\t+---------------------------------------------------------------------------------------------+       *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 14 750 kilom%ctres carr%cs.                        *\n",130,138,130);
    printf("\t\t*    -----------                                                                                              *\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* -> FAUNE:rhinoc%cros ,les lions,les l%copards,les %cl%cphants, les girafes, des buffles,des hy%cnes              *\n",130,130,130,130,138);
    printf("\t\t*    -----                                                                                                    *\n");
    printf("\t\t*          des hippopotames, des crocodiles,des antilopes et des ecp%cces des oiseaux.                         *\n",138);
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* ->CULTURE SERENGETI:est marqu%ce par les traditions des tribus Maasai et d'autres groupes ethniques          *\n",130);
    printf("\t\t*   -------------                                                                                             *\n");
    printf("\t\t*               locaux, avec des %cl%cments tels que la musique,l'artisanat et les c%cr%cmonies traditionnelles   *\n",130,130,130,130);
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'avoir des vaccinations %c jour et rester loin des animaux,                            *\n",133);
    printf("\t\t*   -----                                                                                                     *\n");
    printf("\t\t*         protection contre les piqures d'insectes,protection solaire.                                        *\n");
    printf("\t\t*                                                                                                             *\n ");
    printf("\t\t*    ** Chobe est une destination de safari mondiale offrant une exp�rience incroyable d'observation          *\n ");
    printf("\t\t* dans un cadre naturel spectaculaire!**                                                                      *\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t***************************************************************************************************************\n");
};
void dec_sabi(){
printf("\n\n\n");
    printf("\t\t******************************************* { SAFARI AVENTURE } ***********************************************\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t*\t                                                                                                      *\n");
    printf("\t\t*                                       *****{ < SABI SAND > }*****                                           *\n");
    printf("\t\t*\t+---------------------------------------------------------------------------------------------+       *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ  65 000 hectares                                 *\n",130);
    printf("\t\t*    -----------                                                                                              *\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* -> FAUNE: rhinoc%cros ,les lions ,les l%copards ,les %cl%cphants, les girafes, des buffles,                     *\n",130,130,130,130,138);
    printf("\t\t*    -----                                                                                                    *\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* ->CULTURE SABI SAND:est centr%ce sur la pr%cservation de la nature sauvage, avec des guides locaux partageant *\n",130,130);
    printf("\t\t*   -----------------                                                                                         *\n");
    printf("\t\t*                    des r%ccits sur la r%cgion lors des safaris, et des possibilit%cs d'interaction avec les    *\n",130,130,130);
    printf("\t\t*                    communaut%cs locales ajoutant une dimension culturelle � l'exp%crience de safari.          *\n",130,130);
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'avoir des vaccinations %c jour et rester loin des animaux,                            *\n",133);
    printf("\t\t*   -----                                                                                                     *\n");
    printf("\t\t*         protection contre les piqures d'insectes,protection solaire.                                        *\n");
    printf("\t\t*                                                                                                             *\n ");
    printf("\t\t*    ** SABI SAND offre une exp%crience de safari de luxe et immersive, ou les voyageurs peuvent d%ccouvrir la  *\n ",130,130);
    printf("\t\t* dans un cadre naturel spectaculaire!**                                                                      *\n");
    printf("\t\t*                                                                                                             *\n");
    printf("\t\t***************************************************************************************************************\n");
};
void dec_etosha(){
    printf("\n\n\n");
    printf("\t\t********************************************** { SAFARI AVENTURE } ************************************************\n");
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t*\t                                        *****{ < ETOSHA > }*****                                        *\n");
    printf("\t\t*\t+--------------------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 22 270 kilom%ctres carr%cs.                            *\n",130,138,130);
    printf("\t\t*    -----------                                                                                                  *\n");
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t* -> FAUNE:les lions, les l%copards, les %cl%cphants, les girafes, des buffles, des z%cbres                           *\n",130,130,130,138);
    printf("\t\t*    -----                                                                                                        *\n");
    printf("\t\t*          des hippopotames, des crocodiles,des antilopes et des ecp%cces des oiseaux.                             *\n");
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t* ->CULTURE ETOSHA:est teint%ce des traditions des peuples autochtones locaux, exprim%ces %c travers l'artisanat,    *\n",130,130,133);
    printf("\t\t*   -------------                                                                                                 *\n");
    printf("\t\t*                 la musique, la cuisine et les pratiques spirituelles.                                           *\n");
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'avoir des m%cdicaments et rester hydrat%c, se prot%cger contre les piqures.                 *\n",130,130,130);
    printf("\t\t*   -----                                                                                                         *\n");
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t*                                                                                                                 *\n ");
    printf("\t\t*    **En explorant la r%cgion d'Etosha es visiteurs peuvent d%ccouvrir et appr%ccier la richesse de la culture      *\n",130,130,130);
    printf("\t\t*         de l'hr%citage traditionnel qui impr%cgne cette magnifique r%cgion de Namibie**                            *\n",130,138,130);
    printf("\t\t*                                                                                                                 *\n");
    printf("\t\t********************************************************************************************************************\n");
};
void dec_falls(){
    printf("\n\n\n");
    printf("\t\t************************************** { SAFARI AVENTURE } ******************************************\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*\t                                                                                            *\n");
    printf("\t\t*                               *****{ < MURCHISON FALLS > }*****                                   *\n");
    printf("\t\t*\t+------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 3 893 kilom%ctres carr%cs.               *\n",130,138,130);
    printf("\t\t*    -----------                                                                                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* -> FAUNE:les lions, les %cl%cphants, les girafes, des hippopotames, des crocodiles                  *\n",130,130,130);
    printf("\t\t*    -----                                                                                          *\n");
    printf("\t\t* ->CULTURE MURCHISON:La r%cgion autour du parc national des chutes Murchison en Ouganda offre une   *\n",130);
    printf("\t\t*   -----------------                                                                               *\n");
    printf("\t\t*                    culturelle avec divers groupes ethniques, chacun avec ses propres traditions   *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->SANTE:se prot%cger du soleil avec un chapeau ou une %cran solaire, %cviter les contacts direct     *\n",130,130,130);
    printf("\t\t*   -----                                                                                           *\n");
    printf("\t\t*         Prendre des mesures pr%cventives contre les piqures de moustiques                          *\n",133);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n ");
    printf("\t\t*      ** Le parc national des chutes Murchison en Ouganda offre une exp�rience de safari unique,   *\n ");
    printf("\t\t* combinant la d�couverte de la faune africaine avec une immersion dans la culture locale**         *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*****************************************************************************************************\n");
};
void dec_kruger(){
    printf("\n\n\n");
    printf("\t\t************************************** { SAFARI AVENTURE } ******************************************\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*\t                                                                                            *\n");
    printf("\t\t*                               *****{ <Parc National Kruger> }*****                                *\n");
    printf("\t\t*\t+------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 19485 kilom%ctres carr%cs.               *\n",130,138,130);
    printf("\t\t*    -----------                                                                                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* -> FAUNE:les lions, %cl%cphants, l%copards, buffles et rhinoc%cros.                                   *\n",130,130,130,130);
    printf("\t\t*    -----                                                                                          *\n");
    printf("\t\t* ->CULTURE KRUGER :Les traditions musicales , les mythes, la cuisine et l'art qui r%cflete sur la   *\n",138);
    printf("\t\t*   -----------------                                                                               *\n");
    printf("\t\t*                     nature du parc font partie int%cgrante de la culture de la r%cgion.             *\n",130,130);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->SANTE:se prot%cger du soleil avec un chapeau ou une %cran solaire, rester bien hydrat%c            *\n",130,130,130);
    printf("\t\t*   -----                                                                                           *\n");
    printf("\t\t*         Prendre des mesures pr%cventives contre les piqures de moustiques                          *\n",133);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n ");
    printf("\t\t* ** La vari%ct%c et l'abondance de la faune du parc Kruger en font l'une des destinations de safari*\n ");
    printf("\t\t*          les plus pris�es au monde offrant aux visiteurs une exp�rience inoubliable. **           *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*****************************************************************************************************\n");
};

void dec_virunga(){
    printf("\n\n\n");
    printf("\t\t************************************** { SAFARI AVENTURE } ******************************************\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*\t                                                                                            *\n");
    printf("\t\t*                               *****{ <Parc National des Virunga> }*****                           *\n");
    printf("\t\t*\t+------------------------------------------------------------------------------------+      *\n");
    printf("\t\t* -> SUPERFICIE:  La r%cserve couvre une superficie d'environ 7 800 kilom%ctres carr%cs.               *\n",130,138,130);
    printf("\t\t*    -----------                                                                                    *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* -> FAUNE: Les lions, les gorilles des montagnes, les %cl%cphants, les chimpanz%cs et les okapis      *\n",130,130,130);
    printf("\t\t*    -----                                                                                          *\n");
    printf("\t\t* ->CULTURE Virunga:le plus ancien d'Afrique st reconnu pour ses paysages vari%cs allant des for%cts  *\n",130,136);
    printf("\t\t*   -----------------                                                                               *\n");
    printf("\t\t*         luxuriantes aux volcans actifs, et sa conservation de la biodiversit%c                     *\n",130);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t* ->SANTE:Assurez-vous d'%ctre a jour avec vos vaccinations recommand%ces pour la r%cgion,             *\n",136,130,130);
    printf("\t\t*   -----                                                                                           *\n");
    printf("\t\t*         %cvitez de boire de l'eau du robinet et assurez-vous de consommer des aliments cuits       *\n",130);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n ");
    printf("\t\t*      ** La culture du Parc National des Virunga, situ%c en R%cpublique D%cmocratique du Congo,       *\n ",130,130,130);
    printf("\t\t*                       est consid%cr%c parmi les meilleurs safari en Afrique**                       *\n",130,130);
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*                                                                                                   *\n");
    printf("\t\t*****************************************************************************************************\n");
};
void delay(int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds);
}

void affichage_page1(){
    int i;
     for(i=5;i>0;i--){
   printf("\n\n\n\n");
    printf("                                    **********          \n");
    printf("                                  **    \3   *******    *****   \n");
    printf("                                 *     \3           ****  \3*        \n");
    printf("                               *                            ********  \n");
    printf("                            ***  < BIENVENUE A NOTRE AGENCE>           ***\n");
    printf("                          ****                                  \3      **\n");
    printf("                       ***  \3  MOROCCO   \3    LOVES       \3              *\n");
    printf("                       **          \3___           ___            ___        *\n");
    printf("                      ***           |       /\\   |        /\\   |   |   |      *\n");
    printf("                         ***        |___   /__\\  |___    /__\\  |___|   |       *****\n");
    printf("                           *****       |  /    \\ |      /    \\ |  \\   |         **\n");
    printf("                              ***** ___| /      \\|     /      \\|   \\  |        ** \n");
    printf("                                ******                                           **  \n");
    printf("                                       ***      \3          \3                  **   \n");
    printf("                                          ***********          \3               ***    \n");
    printf("                                                     *****              \3         *      \n");
    printf("                                                           *     \3           \3   * \n");
    printf("                                                            *          \3        * \n");
    printf("                                                           *                \3  * \n");
    printf("                                                            **     \3             * \n");
    printf("                                                              *                   * \n");
    printf("                                                             **  \3              * \n");
    printf("                                                               *          \3      *           \n");
    printf("                                                                *                *          \n");
    printf("                                                                 *   \3        *            \n");
    printf("                                                                  *           *                  \n");
    printf("                                                                    *   \3  *                      \n");
    printf("                                                                     *   *                         \n");
    printf("                                                                       *                         \n");
    printf("\t\t\t\t\t                    -----------------                              \n");
    printf("\t\t\t\t\t                   |chargement.......|                             \n");
    printf("\t\t\t\t\t                    -----------------                             \n");
    printf("\t\t\t\t\t               vueillez patienter svp %d s........                             \n",i);
    printf("\t\t\t\t\t                                                               \n");
    delay(1000);
    system("cls");
}
    printf("\n\n");
    printf("   \t\t\t\t   Votre safari africain de r%cve commence ici\n\n\n",136);
    printf("   \t\t****************************** { Safari Aventure } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t Vous r%cvez toujours de visiter et d'explorer un safari ?               *\n",136);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t     Vous ne savez pas ou et quand aller ?                              *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t Decouvrez notre site et prenez des d%ccisions comme un pro,             *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t     et profitez de notre merveilleux voyages.\2                         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                       Vivez votre age                                         *\n");
    printf("\t\t*                                                                               *\n");
    printf("\t\t\t\t\t\t       TAPEZ UNE TOUCHE POUR CONTINUER --> \n");
    getch();
     system("cls");
}
void a_propo_de_nous(){
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t   SSSSS   AAAAA  FFFFF  AAAAA  RRRRR  IIIII      AAAAA  V     V  EEEEE  N   N  TTTTT  U   U  RRRRR  EEEEE     \n");
    printf("\t\t\t\t  S        A   A  F      A   A  R   R    I        A   A  V     V  E      NN  N    T    U   U  R   R  E         \n");
    printf("\t\t\t\t   SSSSS   AAAAA  FFFFF  AAAAA  RRRRR    I        AAAAA  V     V  EEEEE  N N N    T    U   U  RRRRR  EEEEE     \n");
    printf("\t\t\t\t        S  A   A  F      A   A  R R      I        A   A   V   V   E      N  NN    T    U   U  R R    E         \n");
    printf("\t\t\t\t   SSSSS   A   A  F      A   A  R   R  IIIII      A   A     V     EEEEE  N   N    T     UUU   R   R  EEEEE     \n");
    printf("\n\n\n\n\n");
    printf("\t\tPermettez-moi de vous pr%csenter bri%cvement notre agence de safaris en Afrique.\n",130,138);
    printf("\tChez nous, vous pouvez vivre votre reve africain avec des safaris passionnants et des guides exp%criment%cs.\n",130,130);
    printf("\tNotre slogan est 'VIVEZ VOTRE REVE AFRICAIN' et nous nous engageons %c vous offrir des moments inoubliables au coeur de la nature sauvage de l'Afrique.\n",133);
    printf("\tN'h%csitez pas %c nous contacter pour plus d'informations et pour r%cserver votre safari.\n",130,133,130);
    printf("\n\tNos contacts:        \n");
    printf("\t\tAdresse-email : safariaventure.gmail.com\n");
    printf("\t\t T%cl%cphone: +212 638 70 65 87 \n",130,130);
    printf("\n\tNOUS SOMMES LA POUR VOUS AIDEZ A REALISER VOTRE REVE AFRICAIN!\3 \n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR FAIRE VOTRE RESERVATION          \n");
    };

void information_saf (){
    printf("\n\n\n\n\n\n");
    printf("   \t\t********************************* { SAFARI AVENTURE } *********************************\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t+--------------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t| Souhaitez-vous connaitre le climat, la meilleure p%criode pour      |        *\n",130);
    printf("   \t\t*\t| visiter ce Safari , et comment s'y rendre ?                        |        *\n" );
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t+--------------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t|          [1] - Oui                                                 |        *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t|          [2] - Non                                                 |        *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t+--------------------------------------------------------------------+        *\n");
    printf("   \t\t***************************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t");

}

void premiere(){
    printf("\n\n\n\n\n");
    printf("   \t\t\t\t   Votre safari africain de r%cve commence ici\n\n\n",136);
    printf("   \t\t***************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t|                   Bienvenue au Menu                         |        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t|            [1] - D%ccouvrire nos Safaris;                     |        *\n",130);
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t|            [2] - Faire une R%cservation;                     |        *\n",130);
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t|            [3] - A propos de nous;                          |        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t|            [4] - Quitter le programme;                      |        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                              *\n");
    printf("   \t\t********************************************************************************\n\n");
    printf("   \t\t\t VOTRE COMMANDE -> \t\t");
}

void compte(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|   Avez-vous d%cj%c un compte ou souhaitez-vous cr%cer un ?     |         *\n",130,133,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [1] - J'ai d%cj%c un compte                          |         *\n",130,133);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [2] - Je veux cr%cer un nouveau compte              |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t");
}

void nom_utilisateur1(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|         Veuillez entrer votre nom d'utilisateur :           |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE NOM D'UTILISATEUR ->\t\t ");
}
void mot_pass(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|           Veuillez entrer votre mot de pass :               |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("\t\t*         NOTE : Appuyez sur F1 pour afficher/masquer le mot de passe.          *\n");
    printf("\t\t*                                                                               *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE MOT DE PASS ->\t\t ");
}
void nom(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|               Veuillez entrer votre nom :                   |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE NOM ->\t\t ");
}
void prenom(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|             Veuillez entrer votre pr%cnom :                  |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE PRENOM ->\t\t ");
}
void age(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|               Veuillez entrer votre age :                   |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE AGE ->\t\t ");
}
void nom_utilisateur(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|         Veuillez entrer votre nom d'utilisateur :           |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE NOM D'UTILISATEUR ->\t\t ");
}
void adress(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|            Veuillez entrer votre adress email :             |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE ADRESS EMAIL ->\t\t ");
}
void sexe(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                      Votre sexe  ?                          |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                [1] - Homme                                  |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                [2] - Femme                                  |         *\n",138);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                          [0] RETOUR           *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE SEXE ->\t\t ");
}
void destination() {
    printf("\n\n\n\n\n");
    printf("\t\t******************************** { SAFARI AVENTURE } ********************************\n");
    printf("\t\t*                                                                                   *\n");
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*                                                                                   *\n");
    printf("\t\t*\t |     Quelle destination africaine souhaiteriez-vous visiter ?    |        *\n");
    printf("\t\t*                                                                                   *\n");
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*\t |  N%c |         Nom du safari                 |    pays           |        *\n",248);
    printf("\t\t*\t |-----|---------------------------------------|-------------------|        *\n");
    printf("\t\t*\t | [1] | R%cserve nationale du Masai Mara       |   Kenya           |        *\n",130);
    printf("\t\t*\t | [2] | Parc national du Serengeti            |   Tanzanie        |        *\n");
    printf("\t\t*\t | [3] | Parc national Kruger                  |   Afrique du Sud  |        *\n");
    printf("\t\t*\t | [4] | Parc national Chobe                   |   Botswana        |        *\n");
    printf("\t\t*\t | [5] | Parc national d'Etosha                |   Namibie         |        *\n");
    printf("\t\t*\t | [6] | R%cserve de Sabi Sand                  |   Afrique du Sud  |        *\n",130);
    printf("\t\t*\t | [7] | Parc national de Virunga              |   Congo           |        *\n");
    printf("\t\t*\t | [8] | Parc national de Murchison Falls      |   Ouganda         |        *\n");
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*************************************************************************************\n\n");
    printf("\t\t\t VOTRE CHOIX ->\t\t ");
}

void date() {
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|         Entrez la date de votre visite (JJ/MM/AAAA) :       |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE DATE ->\t\t ");

}
void duree() {
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|        Quelle est la dur%ce souhait%ce pour ce sejour ?       |         *\n",130,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|            - 1 Jours                                        |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|            - 2 Jours                                        |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|            - 3 Jours                                        |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|            - 4 Jours                                        |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t NOMBRE DE JOURS ->\t\t ");
}
void heberge (){
    printf("\n\n");
    printf("   \t\t********************************* { SAFARI AVENTURE } ********************************\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   +-------------------------------------------------------------+           *\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   |           Quel type d'h%cbergement pr%cf%crez-vous ?           |           *\n",130,130,130);
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   +-------------------------------------------------------------+           *\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   |          [1] - Campements de Tentes de Luxe           300 $ |           *\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   |          [2] - Lodges                                 500 $ |           *\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   |          [3] - Mobile Camps                           200 $ |           *\n");
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   |          [4] - H%cbergement %c l'ext%crieur du Parc      150 $ |           *\n",130,133,130);
    printf("\t\t*                                                                                    *\n");
    printf("   \t\t*\t   +-------------------------------------------------------------+           *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les h%cbergements *\n",130,130,133,130);
    printf("   \t\t**************************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t");
}


void activite_seren(){
        printf("\n\n");
    printf("   \t\t*********************************** { SAFARI AVENTURE } ********************************\n",130);
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+            *\n");
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    | Quelle activit%c souhaitez-vous r%cserver dans le Serengeti ? |            *\n",130,130);
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+            *\n");
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    |          [1] - Safari en v%chicule                      75 $ |            *\n",130);
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    |          [2] - Marche guid%ce dans la nature            50 $ |            *\n",130);
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    |          [3] - Vol en montgolfi%cre                     120 $|            *\n",130);
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    |          [4] - Visite culturelle des villages locaux   40 $ |            *\n");
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    |          [5] - Observation de la grande migration      90 $ |            *\n");
    printf("\t\t*                                                                                      *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+            *\n");
    printf("\t\t*   Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs.    *\n",130,130,133,130);
    printf("   \t\t****************************************************************************************\n\n");
}
void activite_falls(){
    printf("\n\n");
    printf("   \t\t*********************************** { SAFARI AVENTURE } *******************************\n",130);
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+           *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    | Quelle activit%c souhaitez-vous r%cserver dans le Serengeti ? |           *\n",130,130);
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+           *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    |          [1] - Safari en v%chicule                      75 $ |           *\n",130);
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    |          [2] - Marche guid%ce dans la nature            50 $ |           *\n",130);
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    |          [3] - Vol en montgolfi%cre                     120 $|           *\n",130);
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    |          [4] - Visite culturelle des villages locaux   40 $ |           *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    |          [5] - Observation de la grande migration      90 $ |           *\n");
    printf("\t\t*                                                                                     *\n");
    printf("   \t\t*\t    +-------------------------------------------------------------+           *\n");
    printf("\t\t*   Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs    *\n",130,130,133,130);
    printf("   \t\t***************************************************************************************\n\n");
}
void activite_Kruger (){
    printf("\n\n");
    printf("   \t\t******************************** { Safari Aventure } *******************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |   Quelle activit%c souhaitez-vous r%cserver dans  Kruger  ?   |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |        [1] - Safaris en v%chicule tout-terrain n        75 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |        [2] - Safaris guid%cs %c pied                     50 $ |          *\n",130,133);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |        [3] - Visites d'observatoires animaliers        40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |        [4] - Safari nocturne                           70 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |        [5] - Visite culturelle des communaut%cs locales 40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
     printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}
void activite_Chobe (){
    printf("\n\n");
    printf("   \t\t******************************* { SAFARI AVENTURE  } *******************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |   Quelle activit%c souhaitez-vous r%cserver dans Chobe ?      |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |      [1] - Safari en v%chicule                          75 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |      [2] - Marche guid%ce dans la nature                50 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |      [3] - les visites culturelles des villages locaux 40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |      [4] - safaris en bateau sur la rivi%cre Chobe      70 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |      [5] - Observation des oiseaux                     40 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}
void activite_Virunga (){
    printf("\n\n");
    printf("   \t\t******************************* { SAFARI AVENTURE} *********************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |   Quelle activit%c souhaitez-vous r%cserver dans Virunga  ?   |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [1] - Trekking pour observer les gorilles des montagne 60 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [2] - Randonn%ces dans les volcans                      100 $|          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [3] - Safari pour observer la faune                    50 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [4] - Visites des sites historiques et culturels       40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [5] - Randonn%ces p%cdestres et observation des oiseaux  40 $ |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}
void activite_masai(){
    printf("\n\n");
    printf("   \t\t******************************* { Safari Aventure  } *******************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |   Quelle activit%c souhaitez-vous r%cserver dans Masai Mara ? |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [1] - Safaris en v%cchicule tout-terrain            75 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [2] - Marche guid%ce dans la nature                 50 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [3] - Safaris en montgolfi%cre                      120 $|          *\n",138);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [4] - Visites des villages masais                  40 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [5] - Observation des oiseaux                      40 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}
void activite_Etosha(){
    printf("\n\n");
    printf("   \t\t******************************* { SAFARI AVENTURE  } *******************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |   Quelle activit%c souhaitez-vous r%cserver dans Etosha ?     |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [1] - Safari en v%chicule                               75 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [2] - Observation des animaux autour des points d'eau  60 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [3] - Safaris nocturnes                                70 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [4] - Observation des oiseaux                          40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  | [5] - Visites des points de vue panoramiques           30 $ |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}
void activite_sabi(){
    printf("\n\n");
    printf("   \t\t******************************* { SAFARI AVENTURE  } *******************************\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |  Quelle activit%c souhaitez-vous r%cserver dans SabiSand  ?   |          *\n",130,130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [1] - Safari en v%chicule                           75 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [2] - Safaris %c pied                               50 $ |          *\n",133);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [3] - Safaris nocturnes                            70 $ |          *\n");
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [4] - Observation des oiseaux                      40 $ |          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  |     [5] - D%ctente au lodge                             100 $|          *\n",130);
    printf("\t\t*                                                                                  *\n");
    printf("   \t\t*\t  +-------------------------------------------------------------+          *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes les activit%cs  *\n",130,130,133,130);
    printf("   \t\t************************************************************************************\n\n");
}

void restau(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTIRE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|         Pr%cf%crez-vous manger avec nous ou ailleurs ?        |         *\n",130,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|             [1] - Oui                                       |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|             [2] - Non                                       |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t ");
}
void compagnant(){
    printf("\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ***************************************\n");
    printf("\t\t*                                                                                        *\n");
    printf("   \t\t*\t+------------------------------------------------------------------------+       *\n");
    printf("\t\t*                                                                                        *\n");
    printf("   \t\t*\t|                         Qui vous accompagne ?                          |       *\n");
    printf("\t\t*                                                                                        *\n");
    printf("   \t\t*\t|  ( Les enfants de plus de 12 ans sont consid%cr%cs comme des adultes )   |       *\n",130,130);
    printf("\t\t*                                                                                        *\n");
    printf("   \t\t*\t+------------------------------------------------------------------------+       *\n");
    printf("   \t\t******************************************************************************************\n\n");
}
void restau_mus(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|               Voulez-vous un menu halal ?                   |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [1] - Oui                                          |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [2] - Non                                          |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t");
}
void restau_parc(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|     Quel type de plan de restauration pr%cf%crez-vous ?       |         *\n",130,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|     [1] - Petit d%cjeuner seulement                    15 $  |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|     [2] - Demi-pension (Petit d%cjeuner et diner)      30 $  |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|     [3] - Pension compl%cte (Trois repas par jour)     40 $  |         *\n",138);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|     [4] - Tout inclus (Tous repas et boissons inclus) 45 $  |         *\n",130,133,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*  Note : Les enfants b%cn%cficient d'un tarif %c demi-prix sur toutes             *\n",130,130,133);
    printf("\t\t*          les options de restauration .                                        *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t");
}
void payment(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                 Choisir le type de paiment ?                |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [1] - Carte bancaire                               |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [2] - Paiement en esp%cces                          |         *\n",138);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t ");
}
void surp_vlsrp(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                   <<F%clicitations >>                        |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t| D%cbloquez des surprises pour votre prochaine r%cservation    |         *\n",130,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t| Utilisez le code <SPECIAL> pour en profiter                 |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE          *\n");
    printf("   \t\t*********************************************************************************\n\n");

}
void surp_affsrp(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                   <<F%clicitations >>                        |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t| Profitez d'une visite guid%ce gratuite de la ville lors      |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|               de votre s%cjour avec nous                     |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE          *\n");
    printf("   \t\t*********************************************************************************\n\n");

}

void surp_cd() {
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|  Merci d'enregistrer le code  pour profiter de surprises    |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t CODE ->\t");

}
void envoloppe() {
     printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t       * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t\t\t     *     * *                                                * *       *\n",136);
    printf("\t\t\t\t   *         * *                                             * *          *\n");
    printf("\t\t\t\t  *            * *  APPUYEZ SUR UNE TOUCHE POUR EXPLORER   * *             *\n");
    printf("\t\t\t\t *               * *                                     * *                *\n");
    printf("\t\t\t\t*                  * *         L'ENVOLOPPE !           * *                   *\n");
    printf("\t\t\t\t*                    * *                             * *                     *\n");
    printf("\t\t\t\t*                      * *                         * *                       *\n");
    printf("\t\t\t\t*                        * *                     * *                         *\n");
    printf("\t\t\t\t*                          * *                 * *                           *\n");
    printf("\t\t\t\t*                            * *             * *                             *\n");
    printf("\t\t\t\t*                              * *         * *                               *\n");
    printf("\t\t\t\t*                                * *     * *                                 *\n");
    printf("\t\t\t\t*                                  * * * *                                   *\n");
    printf("\t\t\t\t*                                                                            *\n");
    printf("\t\t\t\t*                                                                            *\n");
    printf("\t\t\t\t*                                                                            *\n");
    printf("\t\t\t\t *                                                                          *\n");
    printf("\t\t\t\t  *                                                                        *\n");
    printf("\t\t\t\t   *                                                                      *\n");
    printf("\t\t\t\t     *                                                                   *\n");
    printf("\t\t\t\t       * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
 }

void voyagesur(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTURE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t| Un diner gastronomique offert dans un restaurant renomm%c     |         *\n",130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|                        de la r%cgion.                         |         *\n",130);
    printf("\t\t*                                                                               *\n",130);
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
        printf("\t\t*                             TAPER UN BOUTON POUR OBTENIR VOTRE FACTURE        *\n");
    printf("   \t\t*********************************************************************************\n\n");

}
void reservdej(){
    printf("\n\n\n\n\n\n");
    printf("   \t\t****************************** { SAFARI AVENTIRE } ******************************\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|       Est-ce que vous avez d%cj%c un code promo ?             |         *\n",130,133,130,130);
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [1] - Oui                                          |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t|          [2] - Non                                          |         *\n");
    printf("\t\t*                                                                               *\n");
    printf("   \t\t*\t+-------------------------------------------------------------+         *\n");
    printf("   \t\t*********************************************************************************\n\n");
    printf("   \t\t\t VOTRE CHOIX ->\t\t ");
}
void recu(char *date,int total,float prix){
       printf("\n\n");
    printf("\t\t                                      { SAFARI AVENTURE }                        \n\n\n");
    printf("\t\t********************************* Rec%cpisse de r%cservation *********************************\n\n",130,130);
    printf("\t\t\t                   Adresse-email : safariaventure.gmail.com                          \n");
    printf("\t\t\t                   T%cl%cphone: +212 638 70 65 87                                  \n\n",130,130);
    printf("\t\t--------------------------------------------------------------------------------------------\n");
    printf("\t\t Date d'%cmission: 07/05/2024\n",130);
    printf("\t\t--------------------------------------------------------------------------------------------\n");
    printf("\t\t Date du safari : %s \n\n",date);
    printf("\t\t Nombre de participants : %d\n\n",1+total);
    printf("\t\t Prix total : %.2f $\n",prix);
    printf("\t\t--------------------------------------------------------------------------------------------\n");
    printf("\t\t     Informations importantes :\n");
    printf("\t\t - V%crifiez la pr%cvision m%ct%corologique et pr%cparez-vous en cons%cquence.\n",130,130,130,130,130,130);
    printf("\t\t - Veuillez conserver ce recu comme confirmation de votre r%cservation.\n",130);
    printf("\t\t--------------------------------------------------------------------------------------------\n");
    printf("\t\t Merci de choisir Safari Aventure \3.\n");
    printf("\t\t                                                                                [0] QUITER \n");
    printf("\t\t********************************************************************************************\n\n\n\n\n\n");
}void reservation(){
parc parcs[8] = {
        {"Masai Mara", "Kenya", "Climat tropical", "Juillet - octobre", "jusqu'a Nairobi, puis en voiture"},
        {"Serengeti", "Tanzanie", "Climat tropical", "Juin - septembre", "jusqu'a Arusha, puis en voiture"},
        {"Kruger", "Afrique du sud", "Climat subtropical", "Mai - septembre", "jusqu'a Johannesburg, puis en voiture"},
        {"Chobe", "Botswana", "Climat subtropical", "Avril - octobre", " jusqu'a Kasane, puis en voiture"},
        {"Etosha", "Namibie", "Climat semi-aride", "Mai - octobre", " jusqu'a Windhoek, puis en voiture"},
        {"Sabi Sand", "Afrique du sud", "Climat subtropical", "Mai - septembre", "jusqu'a Nelspruit, puis en voiture"},
        {"Virunga", "Congo", "Climat tropical", " Juin - septembre", "jusqu'a Goma, puis en voiture"},
        {"Murchison Falls", "Ouganda", "Climat chaud et humide", "Juin - septembre", " jusqu'a Entebbe, puis en voiture"}
    };
    int tmas[5]={75,50,120,40,40};
    int tser[5]={75,50,200,40,90};
    int tfal[5]={70,50,80,120,30};
    int tkru[5]={75,50,40,70,40};
    int tcho[5]={75,50,40,70,40};
    int tvir[5]={60,100,50,40,40};
    int test[5]={75,60,70,40,30};
    int tsab[5]={75,50,70,40,100};
    int totalpersonadult;
    float totalenfant,totalreservation;
    int prixtotal=0;
    int total,valide;
    user l;
    int h1[30];
    int choix,activ,res,i,imp;
    int inputSuccess;
    paiment a;
    FILE *log = NULL;
    char code[20];
do{
    compte();
    scanf("%d",&choix);
    system("cls");
}while ( choix!=1 && choix!= 2);
switch (choix) {
        case 1:
            existe();
            break;
        default:
            cree();
            break;
}
system("cls");
do{
    destination();
    scanf("%d",&imp);
    system("cls");
}while ( imp <=0 || imp > 8);
system("cls");
information_saf();
do{
    scanf("%d",&choix);
}while(choix<=0 || choix > 2 );
system("cls");
if (choix==1){
        switch(imp){
case 1 :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  M   M  AAAAA  SSSS  AAAAA  I      M   M  AAAAA  RRRR   AAAAA\n");
    printf("\t\t\t\t  MM MM  A   A  S     A   A  I      MM MM  A   A  R   R  A   A\n");
    printf("\t\t\t\t  M M M  AAAAA  SSSS  AAAAA  I      M M M  AAAAA  RRRR   AAAAA\n");
    printf("\t\t\t\t  M   M  A   A     S  A   A  I      M   M  A   A  R R    A   A\n");
    printf("\t\t\t\t  M   M  A   A  SSSS  A   A  I      M   M  A   A  R  R   A   A\n\n");
    printf("\t\t\t\t\t\t\t\t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n",parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des temp%cratures %clev%ces tout au long de l'ann%ce .\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t    Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t    De plus, c'est le moment de la grande migration des gnous, un spectacle naturel extraordinaire %c ne pas manquer.\n\n\n",133);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s .",parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 2 :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  SSS EEEE  RRR   EEEE  N  N  GGG   EEEE  TTT  I\n");
    printf("\t\t\t\t S    E     R  R  E     NN N  G     E      T   I\n");
    printf("\t\t\t\t SSS  EEEE  RRR   EEE   N NN  G GG  EEE    T   I\n");
    printf("\t\t\t\t    S E     R R   E     N NN  G  G  E      T   I\n");
    printf("\t\t\t\t SSS  EEEE  R  R  EEEE  N  N  GGGG  EEEE   T   I\n\n");
    printf("\t\t\t\t\t\t  %s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n",parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des temp%cratures %clev%ces tout au long de l'ann%ce .\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t    Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t    De plus, c'est le moment de la grande migration des gnous, un spectacle naturel extraordinaire %c ne pas manquer.\n\n\n",133);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s .",parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 3 :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  K  K   RRR    U   U   GGGG   EEEE   RRR  \n");
    printf("\t\t\t\t  K K    R  R   U   U   G      E      R  R \n");
    printf("\t\t\t\t  KK     RRR    U   U   G GG   EEE    RRR  \n");
    printf("\t\t\t\t  K K    R R    U   U   G  G   E      R R  \n");
    printf("\t\t\t\t  K  K   R  R    UUU    GGGG   EEEE   R  R \n\n");
    printf("\t\t\t\t\t\t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n", parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des temp%cratures %clev%ces pendant la majeure partie de l'ann%ce.\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t   Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t   De plus, il offre des observations spectaculaires de la faune locale comme les %cl%cphants, lions et l%copards.\n\n\n",130,130,130);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s.\n", parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 4 :
      printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  CCCC   H   H    OOO    B B B   EEEE\n");
    printf("\t\t\t\t C       H   H   O   O   B   B   E\n");
    printf("\t\t\t\t C       HHHHH   O   O   BBBB    EEE\n");
    printf("\t\t\t\t C       H   H   O   O   B   B   E\n");
    printf("\t\t\t\t  CCCC   H   H    OOO    B B B   EEEE\n\n");
    printf("\t\t\t\t\t\t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n", parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des temp%cratures %clev%ces pendant la majeure partie de l'ann%ce.\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t   Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t   De plus, il offre des observations spectaculaires de la faune locale comme les %cl%cphants, lions et l%copards.\n\n\n",130,130,130);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s.\n", parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 5 :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  EEEE   TTTTT    OOO     SSS    H   H   A A A\n");
    printf("\t\t\t\t  E        T     O   O   S       H   H   A   A\n");
    printf("\t\t\t\t  EEE      T     O   O    SSS    HHHHH   AAAAA\n");
    printf("\t\t\t\t  E        T     O   O       S   H   H   A   A\n");
    printf("\t\t\t\t  EEEE     T      OOO    SSSS    H   H   A   A\n\n");
    printf("\t\t\t\t\t  \t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n", parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des pr%ccipitations faibles et irr%cguli%cres .\n\n\n",130,130,130,138,138);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t       Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t       Durant cette p%criode, les animaux sont souvent plus faciles %c voir car ils se rassemblent autour des points d'eau restants.\n\n\n",130,133);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s.\n", parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 6 :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  SSSS   A A A  BBBBB   I      SSSS  A A A  N   N  DDDD   \n");
    printf("\t\t\t\t S       A   A  B    B  I     S      A   A  NN  N  D   D  \n");
    printf("\t\t\t\t  SSS    AAAAA  BBBBB   I      SSS   AAAAA  N N N  D   D  \n");
    printf("\t\t\t\t     S   A   A  B    B  I        S   A   A  N  NN  D   D  \n");
    printf("\t\t\t\t SSSS    A   A  BBBBB   I    SSSS    A   A  N   N  DDDD   \n\n");
    printf("\t\t\t\t\t\t   %s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n", parcs[imp-1].climat);
    printf("\t\t     Ce type de climat est caract%cris%c par des temp%cratures %clev%ces pendant la majeure partie de l'ann%ce.\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t     Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t     La v%cg%ctation moins dense permet %cgalement une meilleure visibilit%c.\n\n\n",130,130,130,130);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s.\n", parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
case 7 :
     printf("\n\n\n\n\n\n");
    printf("\t\t\t\t  V   V   I   RRRR    U   U   N   N   GGGG   A A A\n");
    printf("\t\t\t\t  V   V   I   R   R   U   U   NN  N   G      A   A\n");
    printf("\t\t\t\t  V   V   I   RRRR    U   U   N N N   G GG   AAAAA\n");
    printf("\t\t\t\t   V V    I   R R     U   U   N  NN   G  G   A   A\n");
    printf("\t\t\t\t    V     I   R  R     UUU    N   N    GGG   A   A\n\n");
    printf("\t\t\t\t\t\t\t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\t-->Le climat de ce safari est un %s.\n",parcs[imp-1].climat);
    printf("\t\t    Ce type de climat est caract%cris%c par des temp%cratures %clev%ces tout au long de l'ann%ce .\n\n\n",130,130,130,130,130,130,130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t    Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t    De plus, c'est une p%criode favorable pour l'observation des gorilles, un spectacle naturel extraordinaire %c ne pas manquer.\n\n\n",130,133);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s .",parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
default :
    printf("\n\n\n\n\n\n");
    printf("\t\t\t M   M  U   U  RRRR   CCCC  H   H  I  SSSS    OOO    N   N     FFFFF  A A A  L      L      SSSS \n");
    printf("\t\t\t MM MM  U   U  R   R  C     H   H  I  S      O   O   NN  N     F      A   A  L      L      S    \n");
    printf("\t\t\t M M M  U   U  RRRR   C     HHHHH  I   SSS  O     O  N N N     FFF    AAAAA  L      L       SSS \n");
    printf("\t\t\t M   M  U   U  R  R   C     H   H  I      S  O   O   N  NN     F      A   A  L      L          S\n");
    printf("\t\t\t M   M   UUU   R   R  CCCC  H   H  I  SSSS    OOO    N   N     F      A   A  LLLLL  LLLLL  SSSS \n\n");
    printf("\t\t\t\t\t\t\t\t\t\t%s\n\n\n\n",parcs[imp-1].payssaf);
    printf("\t\tCe type de climat est caract%cris%c par des temp%cra-tures %clev%ces tout au long de l'ann%ce.\n\n\n", 130, 130, 130, 130, 130, 130);
    printf("\t\t-->La meilleure p%criode pour visiter ce safari est g%cn%cralement de %s.\n",130,130,130,parcs[imp-1].meilleurperiode);
    printf("\t\t    Ces mois correspondent %c la saison s%cche, offrant une observation optimale des animaux sauvages.\n",133,138);
    printf("\t\t    De plus, c'est une p%criode favorable pour l'observation des animaux aquatiques et des oiseaux.\n\n\n", 130);
    printf("\t\t-->Pour visiter ce safari, prenez un vol %s .",parcs[imp-1].commentSyrendre);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t TAPER UN BOUTON POUR CONTINUE");
    getch();
    break;
}
}
system("cls");
do {
    date();
    scanf("%s", l.date);
    system("cls");
    valide = verifierDate(l.date);
} while (valide == 0);
do{
duree();
scanf("%d",&l.duree);
system("cls");
}while(l.duree>4 || l.duree <=0);
system("cls");
switch (imp ){
    case 1:
        activite_masai();
        prixtotal+=tableau_activ(l.duree,tmas);
        break;
    case 2 :
        activite_seren();
        prixtotal+=tableau_activ(l.duree,tser);
        break;
    case 3 :
            activite_Kruger ();
            prixtotal+=tableau_activ(l.duree,tkru);
            break;
    case 4 :
            activite_Chobe ();
            prixtotal+=tableau_activ(l.duree,tcho);
            break;
    case 5 :
            activite_Etosha();
            prixtotal+=tableau_activ(l.duree,test);
            break;
    case 6 :
            activite_sabi();
            prixtotal+=tableau_activ(l.duree,tsab);
            break;

    case 7 :
            activite_Virunga() ;
            prixtotal+=tableau_activ(l.duree,tvir);
            break;
    default :
            activite_falls();
             prixtotal+=tableau_activ(l.duree,tfal);
             break;
}
    system("cls");
    if(l.duree>1){
    heberge();
    for (i = 0; i <(l.duree)-1 ; i++) {
               printf("\n\n\n   \t\t\t--> nuit %d : \n",i+1);
               do {
            printf("   \t\t\t\t-type d'hebergement :    ");
            scanf("%d", &h1[i]);
            if (h1[i] <=0 || h1[i] > 4) {
                printf("   \t\t\t\tErreur: Veuillez entrer un nombre entre %d et %d.\n", 1, 4);
            }
        } while (h1[i] <=0 || h1[i] > 4);
        break;}}
        prixtotal+=prixheb(h1,l.duree);

system("cls");

do{
        system("cls");
        restau();
        scanf("%d",&choix);
}while(choix<=0 || choix>2);
system("cls");
switch(choix){
case 1 :
    do{
    system("cls");
    restau_mus();
    scanf("%d",&activ);
    system("cls");
    }while(activ<=0 || activ>2);
    system("cls");
    do{
    system("cls");
    restau_parc();
    scanf("%d",&res);
    }while (res<=0 || res>4);
    prixres(res);
    prixtotal+=prixres(res)*(l.duree);
    system("cls");
    break;
}
system("cls");
compagnant();
do{
printf("   \t\t\t NOMBRE DES ADULTES ->\t\t");
scanf("%d",&l.adul);
}while(l.adul<0);
do{
printf("   \t\t\t NOMBRE D'ENFANTS ->\t\t ");
scanf("%d",&l.enfant);
}while(l.enfant<0);
total=l.adul+l.enfant;
system("cls");
totalpersonadult=prixtotal*(l.adul)+prixtotal;
totalenfant=(float)(prixtotal/2.0)*(l.enfant);
totalreservation=totalpersonadult+totalenfant;

do {
        payment();
        inputSuccess = scanf("%d",&choix);
        system("cls");
    if (inputSuccess != 1) {
        fflush(stdin);}
    } while (inputSuccess != 1 || choix !=1 && choix !=2 );
log=fopen("information.txt","a");
 if(log!=NULL){
switch(choix){
 case 1:

printf("\t\t                                                                                        ");
fflush(stdin);
printf("\n\n\n\n\n\n\n\t\t               -->Nom sur la carte :   \n");
gets(a.nom);

printf("\t                       --> Numero de carte  :  \n ");
do{scanf("%s",a.num);
}while(strlen(a.num) != 16);
printf("\t                       -->Date d'expiration: \n  ");
printf("\t                                 mm     :   \n");
do{scanf("%d",&a.mm);}while(a.mm<1 || a.mm>12);
printf("\t                                 aa     :   \n");
do{scanf("%d",&a.aa);
}while(a.aa<2024);
do{
printf("\t                        --> code de securit%c :  \n ",130);
scanf("%d",&a.cvv);
}while(a.cvv < 0 && a.cvv >= 1000);
system("cls");
fprintf(log,"\npayement :\n nom : %s  numero : %d  date : %d /%d  code : %d",a.nom,a.num,a.mm,a.aa,a.cvv);
break;
    case 2 :
        fprintf(log,"\n\t\t\t\t  payez avec carte bancaire");
        break;
}}
fclose(log);
do{
        reservdej();
        scanf("%d",&choix);
        system("cls");
}while(choix<=0 || choix>2);
switch(choix){
case 1 :
    do{
    surp_cd();
    scanf("%s",&code);
    system("cls");
    }while(strcmp(code,"SPECIAL")!=0);
    surp_affsrp();
    getch();
    system("cls");
    break;
default :
    surp_vlsrp();
    getch();
    system("cls");
    break;
}
envoloppe();
getch();
system("cls");
voyagesur();
getch();
system("cls");

recu (l.date,total,totalreservation);
}
int verifierDate(char *date) {
    int jour, mois, annee;
    int res = sscanf(date, "%d / %d / %d", &jour, &mois, &annee);

    if (res == 3) {
        if (annee > 2024) {
            if (jour >= 1 && jour <= 31 && mois >= 1 && mois <= 12) {
                return 1;
            }
             return 0;
        } else if (annee == 2024) {
            if (jour > 7 && jour <= 31 && mois >= 5 && mois <= 12) {
                return 1;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}

int prixheb(int h1[], int duree) {
    int prixheb = 0;
    for (int i = 0; i < (duree - 1); i++) {
        switch (h1[i]) {
            case 1:
                prixheb += 300;
                break;
            case 2:
                prixheb +=500;
                break;
            case 3:
                prixheb += 200;
                break;
            default:
                prixheb += 150;
                break;
                }
    }
    return prixheb;
}
int prixres(int res) {
    int prixres = 0;
        switch (res) {
            case 1:
                prixres += 15;
                break;
            case 2:
                prixres +=30;
                break;
            case 3:
                prixres += 40;
                break;
            default:
                prixres += 45;
                break;
                }

    return prixres;
}
int tableau_activ(int n,int t[] ){
    int i;
    int prix1 = 0;
     int prix2 = 0;
    int prix=0;
    int t1[50],t2[50];
    for (i = 0; i < n ; i++) {
               printf("\n\n\n   \t\t\t--> jour %d : \n",i+1);
               do {
            printf("   \t\t\t\t-Activit%c 1 :    ",130);
            scanf("%d", &t1[i]);


            if (t1[i] <=0 || t1[i] >= 6) {
                printf("   \t\t\t\tErreur: Veuillez entrer un nombre entre %d et %d.\n", 1, 5);
            }
        } while (t1[i] < 1 || t1[i] > 5);
        switch (t1[i]) {
            case 1:
                prix1 += t[0];
                break;
            case 2:
                prix1 += t[1];
                break;
            case 3:
                prix1 += t[2];
                break;
            case 4:
                prix1 += t[3];
                break;
            default :
                prix1 += t[4];
                break;
            }
        do {
            printf("   \t\t\t\t-Activit%c 2 :    ",130);
            scanf("%d", &t2[i]);
            if (t2[i] <=0 || t2[i] >= 6) {
                printf("   \t\t\t\tErreur: Veuillez entrer un nombre entre %d et %d.\n", 1, 5);
            }
        } while (t2[i] < 1 || t2[i] > 5);
        switch (t2[i]) {
            case 1:
                prix2 += t[0];
                break;
            case 2:
                prix2 += t[1];
                break;
            case 3:
                prix2 +=t[2];
                break;
            case 4:
                prix2 += t[3];
                break;
            default :
                prix2 += t[4];
                break;
            }

}
prix+=prix1+prix2;
    return prix;
}
void cree(){
FILE *log=NULL;
   log=fopen("information.TXT","w");
   user l;
   int inputSuccess;
   if(log!=NULL){
   system("cls");
   nom();
   scanf("%s",l.nom);
   system("cls");
   prenom();
   scanf("%s",l.prnom);
   system("cls");
   while(isZeroChar(l.prnom)){
                nom();
                scanf("%s",l.nom);
                system("cls");
                prenom();
                scanf("%s",l.prnom);
                system("cls");
                }

do {
    age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);
    }
    system("cls");
} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
while(l.age==0){
        prenom();
        scanf("%s",l.prnom);
        system("cls");
        while(isZeroChar(l.prnom)){
                nom();
                scanf("%s",l.nom);
                system("cls");
                prenom();
                scanf("%s",l.prnom);
                system("cls");}
        do {
            age();
            inputSuccess = scanf("%d",&l.age);
            if (inputSuccess != 1) {
            fflush(stdin);}
            system("cls");
} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
}
   adress();
   scanf("%s", l.adress);
    fflush(stdin);
   system("cls");
   while(isZeroChar(l.adress)){
        do {
            age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");
        } while (inputSuccess != 1 ||l.age != 0 && l.age < 12);
    while(l.age==0){
            prenom();
           scanf("%s",l.prnom);
           system("cls");
                  while(isZeroChar(l.prnom)){
                        nom();
                        scanf("%s",l.nom);
                        system("cls");
                        prenom();
                        scanf("%s",l.prnom);
                        system("cls");}
    do {age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 ||l.age != 0 && l.age < 12);
   }
      adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   }
   nom_utilisateur();
   scanf("%s",l.username);
   system("cls");

   while(isZeroChar(l.username)){
         adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   while(isZeroChar(l.adress)){
           do {
                age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");
    } while (inputSuccess != 1 ||l.age != 0 && l.age < 12);
   while(l.age==0){
     prenom();
           scanf("%s",l.prnom);
           system("cls");
                  while(isZeroChar(l.prnom)){
                        nom();
                        scanf("%s",l.nom);
                        system("cls");
                        prenom();
                        scanf("%s",l.prnom);
                        system("cls");}
    do {age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
   }
      adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   }
      nom_utilisateur();
      scanf("%s",l.username);
      system("cls");
      }

      do{mot_pass();
   lireMotDePasse(l.password,20);
   system("cls");}while(l.password[0]=='\0');
while(isZeroChar(l.password)){
          nom_utilisateur();
   scanf("%s",l.username);
   system("cls");

   while(isZeroChar(l.username)){
         adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   while(isZeroChar(l.adress)){
           do {
                age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
   while(l.age==0){
     prenom();
           scanf("%s",l.prnom);
           system("cls");
                  while(isZeroChar(l.prnom)){
                        nom();
                        scanf("%s",l.nom);
                        system("cls");
                        prenom();
                        scanf("%s",l.prnom);
                        system("cls");}
    do {
            age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
   }
      adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   }
      nom_utilisateur();
      scanf("%s",l.username);
      system("cls");}
           do{mot_pass();
   lireMotDePasse(l.password,20);
   system("cls");}while(l.password[0]=='\0');}

do {sexe();
    inputSuccess = scanf("%d",&l.sexe);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");
    } while (inputSuccess != 1 || l.sexe > 2 || l.sexe < 0 );
   while(l.sexe==0){
          do{mot_pass();
   lireMotDePasse(l.password,20);
   system("cls");}while(l.password[0]=='\0');
while(isZeroChar(l.password)){
          nom_utilisateur();
   scanf("%s",l.username);
   system("cls");

   while(isZeroChar(l.username)){
         adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   while(isZeroChar(l.adress)){
           do {age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
   while(l.age==0){
     prenom();
           scanf("%s",l.prnom);
           system("cls");
                  while(isZeroChar(l.prnom)){
                        nom();
                        scanf("%s",l.nom);
                        system("cls");
                        prenom();
                        scanf("%s",l.prnom);
                        system("cls");}
    do {age();
    inputSuccess = scanf("%d",&l.age);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.age != 0 && l.age < 12);
   }
      adress();
   scanf(" %s", l.adress);
    fflush(stdin);
   system("cls");
   }
      nom_utilisateur();
      scanf("%s",l.username);
      system("cls");}
          do{mot_pass();
   lireMotDePasse(l.password,20);
   system("cls");}while(l.password[0]=='\0');}
   do {sexe();
    inputSuccess = scanf("%d",&l.sexe);
    if (inputSuccess != 1) {
        fflush(stdin);}
    system("cls");} while (inputSuccess != 1 || l.sexe > 2 || l.sexe < 0);
   }

   fprintf(log,"nom: %s prenom: %s user name: %s password: %s adress: %s age : %d sexe : %d",l.nom,l.prnom,l.username,l.password,l.adress,l.age,l.sexe);
   fclose(log);
   printf("\n\n\n\n\n\n\t\tVOTRE COMPTE A BIEN CRIER\n\n\t\tTAPER UN BOUTON POUR VOUS CONNECTEZ.....\n");
   getch();
   system("cls");
   existe();
   }
}
void existe (){
        user l;
 char user[20],pass[20];
 FILE *log=NULL;
 system("cls");
 do{
  nom_utilisateur1();
 scanf("%s",user);
system("cls");
 }while (user[0] == '\0');
        do{mot_pass();
   lireMotDePasse(pass,20);
 system("cls");}while(pass[0]=='\0');
 while(isZeroChar(pass)){
           nom_utilisateur1();
           scanf("%s",user);
           system("cls");
            do{mot_pass();
   lireMotDePasse(pass,20);
 system("cls");}while(pass[0]=='\0');
 }
log=fopen("information.txt","r");
 if(log!=NULL){

 fscanf(log,"nom: %s prenom: %s user name: %s password: %s adress: %s age : %d sexe : %d",l.nom,l.prnom,l.username,l.password,l.adress,&l.age,&l.sexe);
    if(strcmp(user,l.username)==0 && strcmp(pass,l.password)==0){
        printf("\n\n\n\n\n\n\t\t vous %ctes bien connect%c\n\n\t\ttaper un bouton pour vous continue....\n",130,130);

        getch();
        system("cls");
        }else{
        printf("\n\n\n\n\n\n\t\tle nom d'utilisateur ou le mot de pass est incorrect\n\t\t\t vueiller ressayer une autre fois\n");
        getch();
        system("cls");
        reservation();
    }}

  fclose(log);

 }
void lireMotDePasse(char *password, int maxLen) {
    int i = 0;
    int ch;
    int showPassword = 0;
    while (1) {
        ch = getch();
        if (ch == 0 || ch == 224) {
            ch = getch();
            if (ch == 59) {
                showPassword = !showPassword;
                system("cls");
                mot_pass();
                for (int j = 0; j < i; j++) {
                    printf("%c", showPassword ? password[j] : '*');
                }
                continue;
            }
        }

        if (ch == 13) {
            break;
        } else if (ch == 8) {
            if (i > 0) {
                i--;
                printf("\b \b");
                if (showPassword) {
                    system("cls");
                    mot_pass();
                        for (int j = 0; j < i; j++) {
                            printf("%c", password[j]);
                    }
                }
            }
        } else if (i < maxLen - 1) {
            password[i++] = ch;
            printf("%c", showPassword ? ch : '*');
        }
    }
    password[i] = '\0';
}
int isZeroChar(const char *str) {
    return str[0] == '0' && str[1] == '\0';
}
int menu_safari() {
    int choix_parc;
    printf("\n\n\n\n\n\n");
    printf("\t\t******************************** { Safari Aventure } ********************************\n");
    printf("\t\t*                                                                                   *\n");
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*        |                                                                 |        *\n");
    printf("\t\t*\t |          Voici nos safaris disponibles dans notre agence        |        *\n");
    printf("\t\t*        |                                                                 |        *\n");
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*\t |  N%c |         Nom du safari                 |    pays           |        *\n",248);
    printf("\t\t*\t |-----|---------------------------------------|-------------------|        *\n");
    printf("\t\t*\t | [1] | R%cserve nationale du Masai Mara       |   Kenya           |        *\n",130);
    printf("\t\t*\t | [2] | Parc national du Serengeti            |   Tanzanie        |        *\n");
    printf("\t\t*\t | [3] | Parc national de Murchison Falls      |   Ouganda         |        *\n");
    printf("\t\t*\t | [4] | Parc national Chobe                   |   Botswana        |        *\n");
    printf("\t\t*\t | [5] | Parc national de Virunga              |   Congo           |        *\n");
    printf("\t\t*\t | [6] | Parc national Kruger                  |   Afrique du Sud  |        *\n");
    printf("\t\t*\t | [7] | Parc national d'Etosha                |   Namibie         |        *\n");
    printf("\t\t*\t | [8] | R%cserve de Sabi Sand                  |  Afrique du Sud   |        *\n",130);
    printf("\t\t*\t +-----------------------------------------------------------------+        *\n");
    printf("\t\t*                                             [0] Retour au menu principale         *\n");
    printf("\t\t*************************************************************************************\n");
    printf("\t\t\t VOTRE CHOIX ->\t\t\t ");
    scanf("%d", &choix_parc);
    printf("\t\t\t tapez une boutton pour aller a la page suivant ");
    getch();
    system("cls");
    return choix_parc;
}


