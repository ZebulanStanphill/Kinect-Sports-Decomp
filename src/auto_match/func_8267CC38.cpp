// Node_8267D248 constructor: the Base_8267EE90 part, then a new Inner_8267D248
// owned by the node.
#include "game/Node_8267D248.h"

Node_8267D248::Node_8267D248(bool flag, unsigned char create)
    : Base_8267EE90(create)
{
    void *p = Inner_8267D248::operator new(sizeof(Inner_8267D248));
    inner = p ? Inner_8267D248::Construct(p, this, flag) : 0;
}
