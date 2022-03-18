///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#define MAX_CAT       (1024)
#define MAX_CAT_NAMES (50)

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum Gender { UNKNOWN_GENDER, MALE, FEMALE };
enum Breed { UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX };
enum Color { BLACK, WHITE, RED, BLUE, GREEN, PINK };

struct cat {

    char         	name[MAX_CAT_NAMES];
    enum Gender  	gender             ;
    enum Breed   	breed              ;
    bool         	isfixed            ;
    float        	weight             ;
    enum Color   	collarcolor1	    ;
    enum Color   	collarcolor2       ;
    unsigned long long license      	   ;
};

extern struct cat catdata[MAX_CAT];
extern int currentcatnum;

bool checkCatNum( const int currentcatnum );
extern bool checkIndex( const int index );
extern bool checkWeight( const float weight );
extern bool checkName( const char name[] );