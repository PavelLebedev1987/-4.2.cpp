#pragma once

#include "wall.h"

class Accountant {
public:
    double CalcPaintNeeded(const Wall& wall);

    double CalcBricksNeeded(const Wall& wall);
};