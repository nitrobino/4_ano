#include <iostream>
#include <fstream>
#include <random>
#include <array>
#include <algorithm>
#include <functional>
#include <cmath>
#include <complex>





/*
   Initialize Random Numbers
   */
std::mt19937 rng;
std::uniform_real_distribution <double> dist(0,eps);
std::random_device rr;
std::array<int, 624> seed_data;
std::generate(seed_data.begin(), seed_data.end(), std::ref(rr));
std::seed_seq seq(std::begin(seed_data), std::end(seed_data));
rng.seed(seq);

for(auto & x : seed_data){
    std::cout << x << std::endl;
}
