#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>

//using namespace std;

int KMPMatch(std::string T, std::string P, int& numCpm, time_t& time);
int HorspoolMatch(std::string T, std::string P, int& numCpm, time_t& time);
void textGeneration(/*std::string fin_filename,*/ std::string fout_filename, int size, int sought_coef, std::string sought, bool boolSought, bool type, std::string  sChar);