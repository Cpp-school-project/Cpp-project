//
// Created by strih on 27.11.2026.
//

#ifndef CPP_PROJECT_UNIT_H
#define CPP_PROJECT_UNIT_H

enum class Kasty {
    Worker,
    Soldier,
    Shooter,
    WingedAnt,
    Beetle
};

class Unit {
private:
    int m_x;
    int m_y;
    int m_owner;
    Kasty m_kasta;

public:
    Unit(int x, int y, int owner, Kasty kasta);
    virtual ~Unit() = default;

    int getX() const;
    int getY() const;
    int getOwner() const;
    Kasty getKasta() const;

    void setPosition(int x, int y);
};
#endif //CPP_PROJECT_UNIT_H