#include "Neuron.h"
#include <cstdlib>
#include <math.h>

int Neuron::NombreInfo=0;


Neuron::Neuron(int taille)
{
    threshold = 0;
    NombreInfo=taille;
    //threshold = (rand()%201-100)/20;
            for(int i=0;i<NombreInfo;i++){
                weights[i] = (float)(rand()%201-100)/20;
            }
}
/*
Neuron::input(float tab_inputs[NombreInfo])
{
    for(int i=0;i<NombreInfo;i++){
          inputs[i]=tab_inputs[i];
    }
}
*/
float Neuron::guess()
{
        float sum=0;
            for(int i=0;i<NombreInfo;i++){
                sum += inputs[i]*weights[i];
            }
            //return
                return 1/(1+exp(-sum + threshold));

}

void Neuron::setImputs(float* tab){

    for(int i=0 ; i< NombreInfo;i++){
        inputs[i]=tab[i];
    }
}
