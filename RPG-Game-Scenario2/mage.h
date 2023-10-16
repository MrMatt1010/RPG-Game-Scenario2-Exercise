#pragma once
#include "Player.h"

class Mage : public Player {
public:
    Mage(std::string name, Race race);
    ~Mage();
    std::string attack() const override;
};