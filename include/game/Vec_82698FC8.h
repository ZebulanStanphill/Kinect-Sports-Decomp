// Placeholder for the array of reference-counted pointers at +0xa8 of the class that
// func_826CC960, func_826C6C90 and func_826D5930 operate on: { data, count }, whose
// members are the objects of func_8269A110 (clears their 0x40 flag, removing some through
// fn_82699B40) and Method_82698FC8 (below). Named after the address of the method until
// the container type is known. Not a std::vector (no end pointer, the count is stored).

#ifndef GAME_VEC_82698FC8_H
#define GAME_VEC_82698FC8_H

struct Obj_82698FC8;

struct Vec_82698FC8 {
    Obj_82698FC8 **data;
    unsigned int n;
    // Takes a reference on every entry, flags the entries with 0 <= a14 < 0x4000 and
    // b18 > p2 (flags |= 0x40), then drops the reference again (fn_8267C498).
    void Method_82698FC8(unsigned int p2);
};

#endif
