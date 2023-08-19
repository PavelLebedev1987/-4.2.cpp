#include "accountant.h"


double Accountant::CalcPaintNeeded(const Wall& wall)  {
    double height = wall.GetHeight();
    double width = wall.GetWidth();
    return CalcSquare(width, height) * 0.4;
}

double Accountant::CalcBricksNeeded(const Wall& wall)  {
    double height = wall.GetHeight();
    double width = wall.GetWidth();
    return CalcSquare(width, height) * 5;
}