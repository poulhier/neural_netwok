#ifndef NEURON_H
#define NEURON_H



class Neuron
{
    float* weights = new float[NombreInfo];
    float* inputs=new float[NombreInfo];
    float threshold;



    public:
        Neuron(int taille);
        static int NombreInfo;
        //input(float tab_inputs(nb_inputs);

        void setImputs(float *tab);
        float guess();

        friend class Layer;




};

#endif // NEURON_H
