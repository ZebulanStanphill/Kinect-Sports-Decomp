// HELD (see km/conv9cs/plan.txt): this header names a folded function.
//
// The XLip library's std::vector code was built without inlining, and the
// linker folded the members that do not depend on the element type. One of
// them, fn at 0x8266A4A8, makes an iterator from a position (the standard
// library's vector::_Make_iter) for the 12-byte and the 4-byte vectors alike.
// VectorBase_8266A4A8 stands for "whichever vector": an empty base whose one
// member is that shared function, so that each vector's erase can call it as
// the member function the original calls.

#ifndef GAME_VECTORBASE_8266A4A8_H
#define GAME_VECTORBASE_8266A4A8_H

struct Iter_8266A4A8 {
    void *ptr;

    Iter_8266A4A8() {}
};

struct VectorBase_8266A4A8 {
    Iter_8266A4A8 MakeIter(void *where) const;
};

template <class T> struct Vector_8266A4A8 : VectorBase_8266A4A8 {
    T *first;
    T *last;
    T *limit;
    int alval;
};

#endif
