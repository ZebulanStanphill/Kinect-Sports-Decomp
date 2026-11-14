// clear() of a std::vector of 12-byte elements in the XLip library (Visual
// C++ 2010's standard library built without inlining): erase(begin(), end()).
//
// begin(), end() and erase(first, last) return an iterator through a hidden
// pointer, which the original loads before `this`: only a member call does
// that. The linker folded begin() and end() for every vector of the library
// (the 4-byte vector's clear, func_8266AA68, calls the same two addresses), so
// they keep the names fn_82668D40 and fn_82668D80. erase(first, last) is
// fn_82666C38, which is not Matching yet and is part of a set that is itself
// held (km/conv9cs/held/func_8266A420), so it keeps its name here too.
// objects.json renames this unit's three references ("pool_aliases").
// The class and its iterators are placeholders named after this function.
struct Element_82666500;

struct ConstIter_82666500 {
    Element_82666500 *ptr;
};

struct Iter_82666500 : ConstIter_82666500 {
};

struct Vector_82666500 {
    Iter_82666500 begin();
    Iter_82666500 end();
    Iter_82666500 erase(ConstIter_82666500 first, ConstIter_82666500 last);
};

extern "C" void fn_82666500(Vector_82666500 *self)
{
    self->erase(self->begin(), self->end());
}
