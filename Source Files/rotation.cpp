/*
 *  rotation.cpp
 *
 *Contiene le funzioni relative al moto rotativo del satellite attorno ad un asse
 */

void findRotationVirtualPoint() {     //crea un vettore (virtualPoint) in cui assegna i parametri per ruotare di 180° grazie a setAttitudeTarget
    getMyAtt();

    copyArray(myAtt, virtualPoint, 0, 3);

    if(myAtt[0] > 0)
      virtualPoint[0]-=100;
    else
      virtualPoint[0]+=100;
}
