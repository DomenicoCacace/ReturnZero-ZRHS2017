/*
 *  misc.cpp
 *
 *Contiene funzioni varie
 */

 void copyArray(float *src, float *dest, int inPos, int dim) {    //copia i valori di un array in un altro
   //src: vettore di partenza
   //dest: vettore di arrivo
   //inPos: posizione iniziale da cui iniziare la copia
   //dim: dimensione del vettore
   //ATTENZIONE AGLI OVERFLOW

    for(int i = inPos;i < dim;i++)
        dest[i]=src[i];
}

bool compareVector(float a[], float b[], float approx) {    //compara due vettori con un certo grado di approssimaizione
  //a[], b[]: vettori da comparare
  //approx: approssimazione

    if  (((a[0] < (b[0]+approx))&&(a[0] > (b[0]-approx))) &&
        ((a[1] < (b[1]+approx))&&(a[1] > (b[1]-approx))) &&
        ((a[2] < (b[2]+approx))&&(a[2] > (b[2]-approx))))
        return true;
    else
        return false;
}

void assign(float vec[], float x, float y, float z) {   //assegna tre valori ad un vettore
  //vec[]: vettore da riempire
  //x, y, z: parametri da assegnare
  //SOLO PER VETTORI DI FLOAT DI DIMENSIONE 3

    vec[0]=x;
    vec[1]=y;
    vec[2]=z;
}

float dist(float targetPos[]) {   //ritorna la distanza tra il nostro satellite e un punto
  //targetPos[]: punto da misurare
  
    float tempVec[3];

    getMyPos(myPos);

	  mathVecSubtract(tempVec,targetPos,myPos,3);

	  return (mathVecMagnitude(tempVec,3));
}
