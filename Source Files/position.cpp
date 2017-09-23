bool weGotThis(float *target) {     //verifica se il satellite arriva nel punto designato ad una velocità accettabile
    getMyPos();
    getMyVel();
    /*float velocity[3];
    velocity[0] = 0.003f;
    velocity[1] = 0.003f;
    velocity[2] = 0.003f;*/

    myVel[0] = fabsf(myVel[0]);   //prendo il valore assoluto
    myVel[1] = fabsf(myVel[1]);
    myVel[2] = fabsf(myVel[2]);

    if((myVel[0] > 0.006f) || (myVel[1] > 0.006f) || (myVel[2] > 0.006f))
      return(false);

    return(compareVector(myPos, point, approximation));
}
