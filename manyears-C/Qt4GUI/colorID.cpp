#include <QColor>

#include "colorID.h"

/***********************************************************
* Constructor                                              *
***********************************************************/

ColorID::ColorID()
{

    // Set the ID
    this->setID(0);

    // Set the color
    this->setColor(0,0,0);

}

ColorID::ColorID(int _id, int _red, int _green, int _blue)
{

    // Set the ID
    this->setID(_id);

    // Set the color
    this->setColor(_red,_green,_blue);

}

/***********************************************************
* Accessors                                                *
***********************************************************/

// +-------------------------------------------------------+
// | Acccessor: Color ID                                   |
// +-------------------------------------------------------+

int ColorID::getID()
{
    return (this->id);
}

// +-------------------------------------------------------+
// | Acccessor: Color RBG                                  |
// +-------------------------------------------------------+

QColor ColorID::getColor()
{
    return (this->rbg);
}

/***********************************************************
* Mutators                                                 *
***********************************************************/

// +-------------------------------------------------------+
// | Mutator: Color ID                                     |
// +-------------------------------------------------------+

void ColorID::setID(int _id)
{
    this->id = _id;
}

// +-------------------------------------------------------+
// | Mutator: Color RBG                                    |
// +-------------------------------------------------------+

void ColorID::setColor(int _red, int _green, int _blue)
{
    this->rbg.setRed(_red);
    this->rbg.setBlue(_blue);
    this->rbg.setGreen(_green);

}

/***********************************************************
* Other functions                                          *
***********************************************************/

// +-------------------------------------------------------+
// | Use this color                                        |
// +-------------------------------------------------------+

void ColorID::use()
{
    this->isUsed = true;
}

// +-------------------------------------------------------+
// | Free this color                                       |
// +-------------------------------------------------------+

void ColorID::free()
{
    this->isUsed = false;
}

// +-------------------------------------------------------+
// | Check if color is free                                |
// +-------------------------------------------------------+
bool ColorID::isFree()
{
    return !(this->isUsed);
}

