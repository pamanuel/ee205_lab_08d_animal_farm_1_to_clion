///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"
extern bool addCat( const char name[],
                    enum Gender gender,
                    enum Breed breed,
                    bool isfixed,
                    Weight weight,
                    enum Color collarcolor1,
                    enum Color collarcolor2,
                    unsigned long long license);
