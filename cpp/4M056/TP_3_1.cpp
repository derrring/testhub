//
// Created by Sébastien Wong on 27/02/18.
//


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>


class NeuralNetwork {
protected:
    std::vector<unsigned> sizes;
    std::vector<std::vector<double> > neuronestates;
    std::vector<std::vector<double> > B;
    std::vector<std::vector<double> > Omega;

public:
    NeuralNetwork();
    NeuralNetwork(std::vector<unsigned> sizes_init); // =std::vector<int>(1));
    void read(std::istream &);
    void write(std::ostream &) const;
    std::vector<double> compute(const std::vector<double> &);
    double validation(const std::vector<Example> & Bv); // Q 3.8
    double learning(const std::vector<Example> & Ba, double lambda, double alpha); // Q 3.9
};
