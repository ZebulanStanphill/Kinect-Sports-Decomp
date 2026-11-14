// resize(newsize, val) of a std::vector of 4-byte elements in the XLip
// library (Visual C++ 2010's standard library built without inlining):
// appends copies of val, or erases the tail.
//
// begin(), end(), the iterator's operator+ and erase(first, last) return an
// iterator through a hidden pointer, which the original loads before `this`:
// only a member call does that. The linker folded begin() and end() for every
// vector of the library, so they keep the names fn_82668D40 and fn_82668D80;
// operator+ (fn_82669838) is still a C unit, and erase(first, last)
// (fn_8266AB18) is not Matching yet and is part of a set that is itself held
// (km/conv9cs/held/func_8266A420), so they keep their names here too.
// objects.json renames this unit's four references ("pool_aliases").
// size() (fn_8265CF70) and the fill insert (fn_8265CF90, the standard
// library's _Insert_n) have no hidden result and are called as functions.
// The class and its iterators are placeholders named after this function.
struct ConstIter_8265CE58 {
    int *ptr;
};

struct Iter_8265CE58 : ConstIter_8265CE58 {
    Iter_8265CE58 operator+(int offset) const;
};

struct Vector_8265CE58 {
    Iter_8265CE58 begin();
    Iter_8265CE58 end();
    Iter_8265CE58 erase(ConstIter_8265CE58 first, ConstIter_8265CE58 last);
};

extern "C" {
unsigned int fn_8265CF70(const Vector_8265CE58 *self);
void fn_8265CF90(Vector_8265CE58 *self, ConstIter_8265CE58 where, unsigned int count, const int *val);
}

extern "C" void fn_8265CE58(Vector_8265CE58 *self, unsigned int newsize, int val)
{
    if (fn_8265CF70(self) < newsize)
        fn_8265CF90(self, self->end(), newsize - fn_8265CF70(self), &val);
    else if (newsize < fn_8265CF70(self))
        self->erase(self->begin() + newsize, self->end());
}
