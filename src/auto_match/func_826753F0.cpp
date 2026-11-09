// Returns a reference to the int that the std::set<Element_82550E48> (in
// effect a map from a string to an int) holds for the string key, inserting
// the key with a zero int when it is missing: the shape of
// std::map::operator[] from Visual C++ 2010's <map>. The lower bound stays a
// call to fn_82674828, which takes the tree and the key, and the string
// comparison a call to fn_8260D428. The new element is built in a plain
// struct by the string copy constructor fn_8223B688, destroyed by
// fn_82230300, and handed to the real _Tree::insert(const_iterator,
// _Valty&&) member, func_826752B0.cpp. Converted from the Matching C version
// so that fn_826752B0 can take its member name; it keeps its fn_ name, as the
// NonMatching C unit func_82675590 calls it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#include <string>
#undef _Xlength_error

struct Element_82550E48 {
    std::string unk0;
    int unk1C;
};

inline bool operator<(const Element_82550E48 &a, const Element_82550E48 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_82550E48> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> template <> Tree::iterator Tree::insert<Element_82550E48>(const_iterator, Element_82550E48 &&);

typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_826753F0;
typedef struct { Str_826753F0 s; int z; } Tmp_826753F0;

extern "C" {
Node *fn_82674828(Tree *self, Str_826753F0 *key);
int fn_8223B688(Str_826753F0 *, Str_826753F0 *);
int fn_82230300(Str_826753F0 *, int, int);
int fn_8260D428(Str_826753F0 *, int, unsigned, const char *, unsigned);
}

static __forceinline const char *cstr(Str_826753F0 *b)
{
  if (b->cap >= 0x10) return b->u.p;
  return b->u.buf;
}
static __forceinline int cmp(Str_826753F0 *a, Str_826753F0 *b)
{
  unsigned len = b->size;
  const char *p = cstr(b);
  return fn_8260D428(a, 0, a->size, p, len);
}

extern "C" int *fn_826753F0(Tree *t, Str_826753F0 *key)
{
  Tree::iterator where(fn_82674828(t, key), t);
  if (where == t->end() || cmp(key, (Str_826753F0 *)&where->unk0) < 0) {
    Tmp_826753F0 tmp;
    fn_8223B688(&tmp.s, key);
    tmp.z = 0;
    where = t->insert(where, (Element_82550E48 &&)tmp);
    fn_82230300(&tmp.s, 1, 0);
  }
  return &where._Mynode()->_Myval.unk1C;
}
