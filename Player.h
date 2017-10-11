/**
 * Block.cpp
 * Purpose: define Block class
 *
 * @author Wall.Of.Death, gitdev42
 * @version 1.0
 */

#ifndef BLOCK_H
#define BLOCK_H

using namespace std;


class Block {
    public:
        /* --- constructors / destructors --- */
        Block() {};

        /* --- constructors / destructors --- */

        /* --- miscellaneous --- */

        /* --- getter / setter --- */
        int getExample() const         {return example;} ;
        void setExample (int example_) {example = example_;} ;

    private:
        int example;

};


#endif // BLOCK_H
