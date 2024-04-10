#ifndef Container
#define Container std::vector
#endif

#ifndef PAZYMIAI_H
#define PAZYMIAI_H

#include <string>
#include <vector>
// #include <list>
// #include <deque>
#include "timer.h"

using namespace std;

class Studentas {
    private:
        string vardas;
        string pavarde;
        int egz;
        double vidurkis;
        double mediana;
        vector<int> nd;
    public:
        Studentas(string vardas = "", string pavarde = "", int egz = 0, double vidurkis = -1, double mediana = -1, vector<int> nd = {}) : 
            vardas(vardas), pavarde(pavarde), egz(egz), vidurkis(vidurkis), mediana(mediana), nd(nd) {}
        string getVardas() {return vardas;}
        string getPavarde() {return pavarde;}
        double getVidurkis();
        double getMediana();
        void appendNd(int balas) {nd.push_back(balas);} //prideda viena namu darba.
        int ndSk() {return nd.size();}
};

void pasirinktiEiga(string msg, int* option, int max);
bool taipArNe(string uzklausa);

void rikiuotiPagalParametra(vector<Studentas> &studentai, int option);
void addLineToFile(ofstream &konteineris, Studentas &stud);
void sortAndAddToFile(vector<Studentas> &kietekai, vector<Studentas> &vargsiukai, int option);

#endif