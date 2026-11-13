// Placeholder for a vector of pointers in the library at 0x82F8E8D0, and for
// its iterator. The code is an older standard library than Visual C++ 2010's
// (checked iterators that hold their container, a size() that tests for a
// null buffer), built without optimization, so every member is a function of
// its own. The member names are the ones that library's push_back uses; the
// classes are named after the address of push_back until the element type and
// the library version are known.

#ifndef GAME_VEC_82F8EEE0_H
#define GAME_VEC_82F8EEE0_H

struct Vec_82F8EEE0;

struct Iter_82F8EEE0 {
    const Vec_82F8EEE0 *cont;
    void **ptr;

    Iter_82F8EEE0();
};

struct Vec_82F8EEE0 {
    int alval;
    void **first;
    void **last;
    void **limit;

    unsigned int size() const;
    unsigned int capacity() const;
    Iter_82F8EEE0 end();
    Iter_82F8EEE0 insert(Iter_82F8EEE0 where, void *const &val);
    void push_back(void *const &val);
    void **_Ufill(void **ptr, unsigned int count, void *const &val);
};

#endif
