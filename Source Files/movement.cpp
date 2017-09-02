/*
 *  movement.cpp
 *
 *Contiene le funzioni relative al movimento lineare del satellite
 *TODO: regolare i moltiplicatori per i thruster
 */

float goToPos(float *target) {    //per spostare il nostro satellite dal punto attuale al punto designato dal parametro
   //target: punto di arrivo della traiettoria
   
   getMyPos(myPos);   //vedi pagina misc.cpp

   float distanza = dist(target);   //calcoliamo la distanza tra noi e il target per gestire i propulsori
   float vel = distanza * 0.14f;    //moltiplicatore per la velocità

   if(distanza < brakeDist)   //valutiamo se accelerare o frenare. brakeDist va allocata nel main per questioni di comodità
       brake();   //vedi sotto

    else {
        float velVec[3];    //contiene i valori da applicare ai thruster

        mathVecSubtract(velVec, target, myPos, 3);    //regola del parallelogramma per differenza dei vettori
        mathVecNormalize(velVec, 3);

        for (int i = 0; i < 3; i++)   //applichiamo il moltiplicatore ai parametri dei thruster
           velVec[i]*=vel;

        api.setVelocityTarget(velVec);    //mandiamo i valori calcolati ai thruster
    }
}

void brake(){   //per rallentare il nostro satellite fino a fermarlo. Forse.
    float myVel[3];
    float myState[12];

    api.getMyZRState(myState);    //prendiamo i valori dell'accelerazione lineare

    myVel[0] = (myState[3]*3.2)*-1.15;    //la moltiplichiamo per valori negativi
    myVel[1] = (myState[4]*3.2)*-1.15;
    myVel[2] = (myState[5]*3.2)*-1.15;

    api.setForces(myVel);   //e la applichiamo ai thruster
}
