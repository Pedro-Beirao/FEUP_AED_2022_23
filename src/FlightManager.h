/**
 * @file FlightManager.h
 * Informaçao de todas as airlines, airports, e voos(grafos)
 */

#ifndef _FLIGHTMANAGER_H_
#define _FLIGHTMANAGER_H_


#include <iostream>
#include <list>
#include "Graph.h"
#include "Flight.h"
#include "Airline.h"
#include "Airport.h"
#include <unordered_map>
#include "Read.h"


using namespace std;

class FlightManager
{
  private:
    Graph air;
    unordered_map<string, Airport> airports;
    unordered_map<string, Airline> airlines;

  public:
    void initialize();
    Graph get_flights() {return air;};
    unordered_map<string, Airport> get_airports() {return airports;};
    unordered_map<string, Airline> get_airlines() {return airlines;};

};

#endif