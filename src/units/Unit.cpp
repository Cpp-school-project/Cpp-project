#include "Unit.h"

Unit::Unit(int x, int y, int owner, Kasty kasta)
    : m_x(x), m_y(y), m_owner(owner), m_kasta(kasta) {}

int Unit::getX() const {
    return m_x;
}

int Unit::getY() const {
    return m_y;
}

int Unit::getOwner() const {
    return m_owner;
}

Kasty Unit::getKasta() const {
    return m_kasta;
}

void Unit::setPosition(int x, int y) {
    m_x = x;
    m_y = y;
}