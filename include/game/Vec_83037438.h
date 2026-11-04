// Placeholder for a vector of 16-byte elements { begin, end, cap } whose Resize
// (fn_83037438) shrinks by moving end, or grows through fn_83037168 and zero-fills the
// new elements a, b, c (d is left alone). Named after the address of Resize until the
// container type is known.

#ifndef GAME_VEC_83037438_H
#define GAME_VEC_83037438_H

struct Elem_83037438 {
    int a;
    int b;
    int c;
    int d;
};

struct Vec_83037438 {
    Elem_83037438 *begin;
    Elem_83037438 *end;
    unsigned cap;
    int Resize(unsigned n);
};

#endif
