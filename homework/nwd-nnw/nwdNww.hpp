#pragma once

int NWD(int lhs, int rhs) {
        int r = 0;
    if(lhs > rhs)
    {
    while(rhs != 0)
    {
        r = lhs % rhs;
        lhs = rhs;
        rhs = r;
    }
    }
    else if(rhs > lhs)
    {
    while(lhs != 0)
    {
        r = rhs % lhs;
        rhs = lhs;
        lhs = r;
    }
    return std::abs(rhs);
    }
    else if(lhs == 0 && rhs == 0)
    {
        return 1;
    }
    return std::abs(lhs);
}

int NWW(int lhs, int rhs) {
    if(lhs == 0 || rhs == 0) {
        return 0;
    }
    else return std::abs((lhs * rhs) / NWW(lhs, rhs));
}
