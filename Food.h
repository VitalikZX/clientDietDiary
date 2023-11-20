//
// Created by Vital on 18.11.2023.
//

#ifndef Food_H
#define Food_H

#include <string>
using namespace std;

class Food {

private:
    string name;
    float proteins       = 0;
    float fats           = 0;
    float carbohydrates  = 0;
    float calorieContent = 0;

public:
    // Food();
    Food(const string&, float, float, float, float);

    void setName(const string &name);
    void setProteins(float);
    void setFats(float);
    void setCarbohydrates(float);
    void setCalorieContent(float);
    void setPFCCC(const string&, float, float, float, float);

    [[nodiscard]] float getProteins() const;
    [[nodiscard]] float getFats() const;
    [[nodiscard]] float getCarbohydrates() const;
    [[nodiscard]] float getCalorieContent() const;
    [[nodiscard]] Food getPFCCC() const;
};

#endif //Food_H
