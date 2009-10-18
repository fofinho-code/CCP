#ifndef INSTANCE_H
#define INSTANCE_H
#include <string>
#include "Distance.h"
/**
 * Namespace
 */
namespace CCP {
class Point;
class Solution;
/**
 * Class Instance
 */
class Instance {
    /**
     * Public stuff
     */
public:
    /**
     * Empty Constructor
     */
    Instance ( ) { }
    /**
     * Accessor Methods
     */
    /**
     *
     */
    unsigned short numCenters ( ) {
        return _numCenters;
    }
    /**
     *
     */
    void setNumCenters (unsigned short value ) {
        _numCenters = value;
    }
    /**
     *
     */
    Point * points ( ) {
        return _points;
    }
    /**
     *
     */
    void setPoints (Point * value ) {
        _points = value;
    }
    /**
     *
     */
    CCP::Distance distances ( ) {
        return _distances;
    }
    /**
     *
     */
    void setDistances (CCP::Distance value ) {
        _distances = value;
    }
    /**
     *
     */
    Solution * solutions ( unsigned short index) {
      if (index < _numSolutions)
        return _solutions[index];
    }
    /**
     * 
     */
    void setSolutions (Solution ** value, unsigned short numSol ) {
        _solutions = value;
	_numSolutions = numSol;
    }
    /** Return the capacity of centers
    */
    double capacity(){
      return _capacity; 
    }
    /** Set the capacity os centers.
    */
    void setCapacity(double value){
	_capacity = value;
    }

    /**
     * Private stuff
     */
private:
    /**
     * Fields
     */
    unsigned short _numCenters;
    Point * _points;
    CCP::Distance _distances;
    unsigned short _numSolutions;
    Solution ** _solutions;
    
    double _capacity;
    /**
     *
     */
    /**
     * Constructors
     */
    /**
     * Accessor Methods
     */
};
}
#endif //INSTANCE_H
