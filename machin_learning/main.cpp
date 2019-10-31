#include <iostream>
#include <Neuron.h>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{
    cout << "test neuron" << endl<< endl;

    //set random
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);

    int nb_neuro1=4;
    int nb_neuro2=5;
    int nb_neuro3=3;

        //layer 0
    float inputs[nb_neuro1] = {-1 , 0.5, 1,0.5};

        //first layer
    Neuron n[nb_neuro2](nb_neuro1);
    float input2[nb_neuro2];
        //setup first layer
    for(int i=0;i<nb_neuro2;i++){
       n[i].setImputs(inputs);
       input2[i]=n[i].guess();
    }


        //2ns and last layer
    Neuron out[nb_neuro3](nb_neuro2);
    for(int i=0;i<nb_neuro3;i++){
        out[i].setImputs(input2);
    }


    float guess[10];
    for(int i=0;i<nb_neuro3;i++){
        guess[i]= out[i].guess();
    cout << "guess = " << guess[i]<< endl;
    }



/*
for(int i=0;i<taille;i++){
     delete[] n[i].weights;
    delete[] n[i].inputs;
    delete n[i].threshold;
}
    delete[] out.weights;
    delete[] out.inputs;
    delete out.threshold;
*/
    return 0;
}
