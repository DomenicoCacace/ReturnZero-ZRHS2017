/*
* main.cpp
*
*/

//VARIABILI GLOBALI
//dovrebbe essere superfluo scriverlo, ma non si sa mai

//Variabili di stato: contengono le informazioni riguardanti lo stato del satellite
float   myState[12];    //utilizzato per lavorare su getMyZRState, contiene tutte le informazioni riguardanti il satellite
float   myPos[3];       //contiene le coordinate del satellite al tempo dell'ultima chiamata alla funzione getMyPos
float   myAtt[3];       //contiene l'orientamento del satellite al tempo dell'ultima chiamata alla funzione getMyAtt
float   myVel[3];       //contiene la velocità lineare del satellite al tempo ell'ultima chiamata alla funzione getMyVel

//variabili utili alle funzioni di rotazione
float   virtualPoint;   //utilizzata per creare un punto virtuale per la rotazione sull'asse Z di 180°

//Variabili varie: non compongono una classe specifica di variabili, ma servono. Molto.
float   approximation;  //contiene il margine di approssimazione generico (vedi misc.cpp -> compareVector(args))
float   brakeDist;      //contiene la distanza dalla quale il satellite inizia a frenare (vedi movement.cpp -> goToPos())
char    index;          //utilizzato per scorrere tra i case dello switch che  ̶p̶r̶o̶b̶a̶b̶i̶l̶m̶e̶n̶t̶e̶ sicuramente sarà necessario

//variabili di gioco

analyzerPos[3];     //coordinate dell'analizzatore


//INIZIALIZZAZIONE

void init() {
  index = '0';    //imposto l'indice al primo case dello switch
  approximation = 0.02f;    //imposto l'approssimazione. Modificare con cautela
  brakeDist = 0.03;   //imposto la distanza di frenata. TODO: definire una funzione che calcoli brakeDist con criterio, non a caso

  //Varie ed eventuali
}

void loop() {
  //Istruzioni da ripetere indipendentemente dal case vanno qui

  switch(index){
    case '0':
      //non penso di dover spiegare come funzioni, dai
      if(true)
        case = 'n';   //non volete loopare nello stesso case per sempre, fidatevi
      break;

    case 'n':
      //aggiungetene quanti necessari, ma usando la testa
      break;
  }

}
