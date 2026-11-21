// Releases one reference to the buffer registered in a std::map<std::string, Buf_8284A0B8 *>
// (lbl_832112EC) under the object's name; the last reference erases the entry and deletes the
// buffer. Library code at /O1 /Og-; func_82849E60 creates and counts these entries.
//
// The map's mapped type is a pointer (see fn_8284C288, its operator[]); game/Value_8284B810.h
// still declares it as a four-byte struct.
//
// std::string::compare, std::string::assign(const char *, size_type) and the tree's lower_bound
// are declared without a body: with the headers' bodies visible the compiler tries to expand
// them here, gives up, and leaves unused stack slots behind that the original does not have.
#include <xstring>

template <> int std::string::compare(const std::string &) const;
template <> std::string &std::string::assign(const char *, unsigned int);

#include <map>
#include <string>

struct Buf_8284A0B8 {
    char *data;         /* 0x0 */
    unsigned int count; /* 0x4 */

    ~Buf_8284A0B8()
    {
        delete[] data;
    }
};

struct Owner_82849D18 {
    char pad0[0x20];
    const char *name; /* 0x20 */
};

typedef std::map<std::string, Buf_8284A0B8 *> Map_8284C288;
typedef Map_8284C288::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" void fn_82BA02A8(const void *it, const void *cont);

template <>
inline Unchecked::_Tree_unchecked_const_iterator(Tree::_Nodeptr node, const Tree::_Mybase *cont) : _Ptr(node)
{
    fn_82BA02A8(static_cast<std::_Iterator_base0 *>(this), cont);
}

template <> Tree::iterator Tree::lower_bound(const std::string &);

extern "C" Map_8284C288 *lbl_832112EC;

extern "C" void fn_82849D18(Owner_82849D18 *self)
{
    Map_8284C288::iterator it = lbl_832112EC->find(self->name);
    if (it == lbl_832112EC->end()) {
        return;
    }
    Buf_8284A0B8 *buffer = it->second;
    buffer->count--;
    if (buffer->count == 0) {
        lbl_832112EC->erase(it);
        delete buffer;
    }
}
