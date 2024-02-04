#pragma once

typedef struct {
    int adult;
    int child;
} flightCost;

flightCost flightCostCreate(const int adult, const int child);

typedef struct {
    int hours;
    int minutes;    
} time;

time timeCreate(const int hours, const int minutes);

typedef struct {
    time start;
    time end;
} flightDuration;

flightDuration flightDurationCreate(const time start, const time end);

typedef struct {
    int id;
    const char* destination;
    double distance;
    flightCost cost;
    flightDuration duration;
} flight;

flight flightCreate(
    const int id, const double distance, const char* destination,
    const flightCost cost, const flightDuration duration
);

#define FLIGHT_LIST_AMOUNT 50
int flightListInsert(int idx, flight elem);
flight flightListGet(int idx);
int flightListLen();

typedef enum {
    Descending,
    Ascending,
} sortType;

void flightListSort(const sortType type, const int high);
