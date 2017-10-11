/**
 * Block.cpp
 * Purpose: define Block class
 *
 * @author Wall.Of.Death, gitdev42
 * @version 1.0
 */

#ifndef BLOCK_H
#define BLOCK_H

#include "types.h"

using namespace std;


class Block {
    public:
        /* --- constructors / destructors --- */
        Block() {};

        /* --- miscellaneous --- */

        /* --- getter / setter --- */
        int getExample() const                  {return example;} ;
        void setExample (int example_)          {example = example_;} ;
        int getDistance() const                 {return distance;} ;
        void setDistance (int distance_)        {distance = distance_;} ;
        Point getSize() const                   {return size;} ;
        void setSize (Point size_)              {size = size_;} ;
        Point getLocation() const               {return location;} ;
        void setLocation (Point location_)      {location = location_;} ;
        Point getDirection() const              {return direction;} ;
        void setDirection (Point direction_)    {direction = direction_;} ;
        Blocktype getBlocktype() const          {return blocktype;} ;
        void setBlocktype (Blocktype blocktype) {blocktype = blocktype;_};


    private:
        int example;
        int distance;
        Blocktype blocktype;
        Point size;
        Point location;
        Point direction;
};


#endif // BLOCK_H
