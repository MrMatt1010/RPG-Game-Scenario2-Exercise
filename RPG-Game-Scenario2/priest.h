#pragma once
#include "Player.h"

class Priest : public Player {
public:
    Priest(std::string name, Race race);
    ~Priest();
    std::string attack() const override;
};