/*
 *  status.cpp
 *
 *Contiene funzioni riguardanti lo stato del satellite
 *Le variabili contenenti informazioni riguardo allo stato sono allocate nel main,
 *per evitare di fare passaggi di parametri improponibili e onerosi per la memoria
 *
 */

void getMyPos() {    //copia la posizione attuale del satellite nel vettore globale myPos

    api.getMyZRState(myState);  //chiamo getMyZRState per copiare in myState lo stato del satellite
    copyArray(myState, x, 0, 3);    //copio in x gli elementi 0, 1 e 2 del vettore myState, che contengono le coordinate del satellite nello spazio
  }

void getMyAtt() {    //copia l'orientamento attuale del satellite nel vettore globale myAtt

  api.getMyZRState(myState);  //chiamo getMyZRState per copiare in myState lo stato del satellite
  copyArray(myState, x, 6, 3);    //copio in x gli elementi 6, 7 e 8 del vettore myState, che contengono l'orientamento del satellite
 }
