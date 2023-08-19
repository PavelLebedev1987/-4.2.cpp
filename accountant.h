#pragma once
#include "square_calculation.h"
#include "wall.h"

class Accountant {
public:
    double CalcPaintNeeded(const Wall& wall);

    double CalcBricksNeeded(const Wall& wall);
};