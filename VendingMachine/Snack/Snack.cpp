//
//  Snack.cpp
//  C++Lesson5
//
//  Created by Ivan Konishchev on 21.01.2023.
//

#include "Snack.h"
#include <string>
#include <iostream>


Snack::Snack(char const *snackName)
{
    this->snackName = snackName;
}

Snack::~Snack()
{
    std::cout << "Delite snack on to destructor Snack:  " << this->snackName << std::endl;
}

std::string Snack::getSnackName() const
{
    return this->snackName;
}

// Overloading the output operator to the console
std::ostream &operator<<(std::ostream &output, const Snack &m ) 
{
       output << "Snack name: " << m.snackName << std::endl;       
       return output;
}