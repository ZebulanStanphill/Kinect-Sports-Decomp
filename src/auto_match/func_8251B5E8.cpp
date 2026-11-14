// std::map<std::string, Mapped_8251C118>::operator[] for the key held in the
// global string lbl_8329EA40 ("ScriptID"): link-time code generation built
// this copy of operator[] for the one key it is called with. It finds the
// lower bound, inserts a default value when the key is missing (through
// _Tree::insert(const_iterator, _Valty&&), func_8251BC68.cpp) and returns the
// mapped value.
//
// The tree is the std::set of game/Element_8251C118.h, which orders whole
// elements, so the search by key is written out here as map::lower_bound does
// it. std::string's copy constructor, comparison and _Tidy and the shared
// pointer's _Decref keep the names that C units use.
#include "game/Element_8251C118.h"

typedef Set_8251C118::_Mybase Tree;

extern "C" {
void fn_8223B688(std::string *self, const std::string *right);
void fn_82230300(std::string *self, bool built, unsigned int newsize);
int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                unsigned int count);
void fn_822315A0(std::tr1::_Ref_count_base *rep);
extern std::string lbl_8329EA40;
}

template <> __forceinline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(
    const std::basic_string<char, std::char_traits<char>, std::allocator<char> > &right)
{
    fn_8223B688(this, &right);
}

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type newsize)
{
    fn_82230300(this, built, newsize);
}

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

template <> __forceinline void std::tr1::_Ptr_base<Mapped_8251C118::Object>::_Decref()
{
    if (_Rep != 0)
        fn_822315A0(_Rep);
}

template <> template <>
Tree::iterator Tree::insert<Element_8251C118>(Tree::const_iterator, Element_8251C118 &&);

struct Map_8251B5E8 : Tree {
    __forceinline _Nodeptr LowerBound(const std::string &key)
    {
        _Nodeptr node = _Root();
        _Nodeptr where = _Myhead;
        while (!_Isnil(node)) {
            if (_Myval(node).first < key)
                node = _Right(node);
            else {
                where = node;
                node = _Left(node);
            }
        }
        return where;
    }

    __forceinline Mapped_8251C118 *Get(const std::string &key)
    {
        _Nodeptr where = LowerBound(key);
        if (where == _Myhead || key < _Myval(where).first)
            where = insert(const_iterator(where, this), Element_8251C118(key))._Mynode();
        return &_Myval(where).second;
    }
};

extern "C" Mapped_8251C118 *fn_8251B5E8(Map_8251B5E8 *self)
{
    return self->Get(lbl_8329EA40);
}
