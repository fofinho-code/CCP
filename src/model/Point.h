/*
    CCP - Capacited Clustering Problem.
    Copyright (C) 2009  Wagner Reck (wagner.reck@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef POINT_H
#define POINT_H

#include <string>
#include "Position.h"

/**
 * Namespace
 */
namespace CCP { 
/**
 * Class Point
 * 
 */
class Point {
/**
 * Public stuff
 */
public:
    /**
     * Constructors
     */
    /**
     * Empty Constructor
     */
    Point ( );
    Point (double x, double y, double demand);
    Point (Position pos, double demand): _pos(pos), _demand(demand){ }
    /**
     * Accessor Methods
     */
    CCP::Position position ( ) {
        return _pos;
    }
    /**
     * 
     */
    void setPosition (CCP::Position value ) {
        _pos = value;
    }
    /**
    *
    */
    void setDemand(double value) {
	_demand = value;
    }
    
    double demand(){
	return _demand;
    }
/**
 * Private stuff
 */
private:
    /**
     * Fields
     */
     CCP::Position _pos;
     double _demand;
};
} 
#endif //POINT_H

