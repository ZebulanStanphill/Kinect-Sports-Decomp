// std::deque<T>::erase(const_iterator) from Visual C++ 2010's <deque>: erases
// one element as erase(_Where, _Where + 1). The range erase is out of line:
// fn_828B43C0, renamed to deque::erase(const_iterator, const_iterator) with
// this unit. Element_828B4D60 is the placeholder entry type of
// func_828B4D60.cpp, which calls this function.
#include <deque>
#include "game/Allocator_825089A0.h"

struct Element_828B4D60 {
    int pad0[4];
    unsigned __int64 time;
};

typedef std::deque<Element_828B4D60, Allocator_825089A0<Element_828B4D60, 0> > Deque;

template <> Deque::iterator Deque::erase(const_iterator, const_iterator);

template Deque::iterator Deque::erase(const_iterator);
