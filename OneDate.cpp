//
// Created by Vital on 20.11.2023.
//

#include "OneDate.h"

OneDate::OneDate() = default;

Food OneDate::getResult() {
    return result;
}

float OneDate::getProteins() const {
    return result.getProteins();
}

float OneDate::getFats() const {
    return result.getFats();
}

float OneDate::getCarbohydrates() const {
    return result.getCarbohydrates();
}

float OneDate::getCalorieContent() const {
    return result.getCalorieContent();
}
