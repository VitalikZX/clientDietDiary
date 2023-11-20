//
// Created by Vital on 18.11.2023.
//

#include "Food.h"


// Food::Food() = default;

Food::Food(const string &name, const float proteins, const float fats, const float carbohydrates, const float calorieContent) {
    this->name           = name;
    this->proteins       = proteins;
    this->fats           = fats;
    this->carbohydrates  = carbohydrates;
    this->calorieContent = calorieContent;
}

void Food::setName(const string &name) {
    this->name = name;
}

void Food::setProteins(const float proteins) {
    this->proteins = proteins;
}

void Food::setFats(const float fats) {
    this->fats = fats;
}

void Food::setCarbohydrates(const float carbohydrates) {
    this->carbohydrates = carbohydrates;
}

void Food::setCalorieContent(const float calorieContent) {
    this->calorieContent = calorieContent;
}

void Food::setPFCCC(const string &name, const float proteins, const float fats, const float carbohydrates, const float calorieContent) {
    this->name           = name;
    this->proteins       = proteins;
    this->fats           = fats;
    this->carbohydrates  = carbohydrates;
    this->calorieContent = calorieContent;
}

float Food::getProteins() const {
    return this->proteins;
}

float Food::getFats() const {
    return this->fats;
}

float Food::getCarbohydrates() const {
    return this->carbohydrates;
}

float Food::getCalorieContent() const {
    return this->calorieContent;
}

Food Food::getPFCCC() const {
    return *this;
}






