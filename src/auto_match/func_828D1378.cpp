// Copy constructor of a class that holds two words and the vector of
// game/Element_828D0F58.h. The class is unknown: Obj_828D1378 is a placeholder
// named after this function, and its vtable keeps its lbl_ name.
#include "game/Element_828D0F58.h"

extern "C" {
extern char lbl_820267A4[]; // the class's vtable
}

template <> Vector_828D0F58::vector(const Vector_828D0F58 &);

struct Obj_828D1378 {
    void *vtbl;
    int unk4;
    int unk8;
    Vector_828D0F58 items;
    Obj_828D1378(const Obj_828D1378 &other);
};

Obj_828D1378::Obj_828D1378(const Obj_828D1378 &other)
    : vtbl(lbl_820267A4), unk4(other.unk4), unk8(other.unk8), items(other.items)
{
}
