//
// Created by Vital on 20.11.2023.
//

#ifndef ONEDATE_H
#define ONEDATE_H

#include <list>
#include "Food.h"

using namespace std;

class OneDate {
private:
    list <Food> foods{};
    Food result;

public:
    OneDate();
    Food getResult();
    float getProteins() const;
    float getFats() const;
    float getCarbohydrates() const;
    float getCalorieContent() const;
};


#endif //ONEDATE_H
