// std::map<std::string, Buf_8284A0B8 *>::operator[](const key_type &) from Visual C++ 2010's
// <map>: finds the key's lower bound and, when the key is not there, inserts the key with a null
// mapped value. The only caller (fn_82849E60) stores a new 8-byte buffer (fn_8284A0B8) through
// the returned reference.
//
// This is the map that game/Value_8284B810.h declares with a four-byte struct as its mapped type;
// the mapped type is really a pointer: `mapped_type()` here is a plain zero store, which a struct
// would value-initialise through its address.
//
// As in the map's find: this library calls the iterator's empty _Adopt out of line
// (fn_82BA02A8), so the unchecked iterator's constructor is specialised to make that call.
// std::string::compare is declared without a body so that no failed inline attempt leaves an
// unused stack slot.
#include <xstring>

template <> int std::string::compare(const std::string &) const;

#include <map>
#include <string>

struct Buf_8284A0B8;

typedef std::map<std::string, Buf_8284A0B8 *> Map_8284C288;
typedef Map_8284C288::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" void fn_82BA02A8(const void *it, const void *cont);

template <>
inline Unchecked::_Tree_unchecked_const_iterator(Tree::_Nodeptr node, const Tree::_Mybase *cont) : _Ptr(node)
{
    fn_82BA02A8(static_cast<std::_Iterator_base0 *>(this), cont);
}

template Buf_8284A0B8 *&Map_8284C288::operator[](const std::string &);
