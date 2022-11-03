#include <iostream>
#include "funcs.h"
#include <bits/stdc++.h>
#include <string>
#include <cmath>

void countFrequency(double frequency[], std::string s, int size){
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for(int x = 0; x < size; x++){
        frequency[x] = (std::count(s.begin(), s.end(), alphabet[x]))/(1.0 * s.length());
    }
}

double distanceFormula(double frequency[], int size){
    double letters[26] = {0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015, 0.06094, 0.06966, 0.00153, 0.00772, 0.04025, 0.02406, 0.06749, 0.07507, 0.01929, 0.00095, 0.05987, 0.06327, 0.09056, 0.02758, 0.00978, 0.02360, 0.00150, 0.01974, 0.00074};
    double sum = 0;
    for(int x = 0; x < size; x++){
        sum += pow(frequency[x] - letters[x], 2);
    }
    return sqrt(sum);
}

std::string solve(std::string encrypted_string){
    std::string fstring = encrypted_string;
    std::string decrypt;
    double frequency[26];
    double distance;
    double smallest = 1000000;
    std::string smallest_decrypt;
    for(int x = 0; x < 27; x++){
        decrypt = decryptCaesar(fstring, x);
        countFrequency(frequency, decrypt, 27);
        distance = distanceFormula(frequency, 27);
        if(distance < smallest){
            smallest = distance;
            smallest_decrypt = decrypt;
        }
    }
    return smallest_decrypt;
}
