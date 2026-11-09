// Adds the object p2 to two std::set<Element_8288E618> of its owner p1: the
// set at offset 0x24, and the set found by the 16-bit field at offset 2 of a
// copy of p2's 8-byte key at offset 0x14 (fn_828B55F8) in the map at offset
// 0x34 (fn_8288DFB8), or the set at 0x24 again when that field is 0x8000.
// Each element is a copy of the key (copied by fn_828B5580, destroyed by
// fn_828B55B0) and the object pointer. The insertions are the inlined
// node-building part of the set's insert (fn_8224EFC8 allocates the node)
// followed by a call of the real _Tree::_Linsert(_Nodeptr, false) member,
// func_828901B8.cpp, from Visual C++ 2010's <xtree>; the pair it returns lands
// in the stack slots of the map lookup's result and of the key field.
// Converted from the Matching C version so that fn_828901B8 can take its
// member name.
#include <set>

extern "C" {
void fn_828B55B0(void *self);
bool fn_828B5650(const void *a, const void *b);
}

struct Element_8288E618 {
    struct Unk0 {
        ~Unk0() { fn_828B55B0(this); }
        int data[3];
    } unk0;

    bool operator<(const Element_8288E618 &other) const
    {
        return fn_828B5650(this, &other);
    }
};

typedef std::set<Element_8288E618> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

extern "C" {
int fn_8224EFC8(void *);
unsigned int *fn_8288DFB8(void *, void *, void *);
void fn_828B5580(void *, void *);
int fn_828B55F8(void *);
}

typedef struct { int a; int b; } S8;
typedef struct { S8 s; int id; } Val;
typedef struct { S8 h; S8 out; S8 a; S8 c; S8 d; Val b; int pad; Val e; } Frame;

extern "C" void fn_828920B0(char *p1, char *p2)
{
  Frame f;
  char *src = p2 + 0x14;
  char *cont;
  char *node;
  Val *v;
  unsigned int *it;

  fn_828B5580(&f.a, src);
  fn_828B5580(&f.b.s, &f.a);
  f.b.id = (int)p2;
  node = (char *)fn_8224EFC8(p1 + 0x24);
  v = (Val *)(node + 0xc);
  if (v != 0) {
    fn_828B5580(&v->s, &f.b.s);
    v->id = f.b.id;
  }
  new (&f.out) Tree::_Pairib(((Tree *)(p1 + 0x24))->_Linsert((Node *)node, false));
  fn_828B55B0(&f.b.s);
  fn_828B55B0(&f.a);
  fn_828B5580(&f.d, src);
  fn_828B5580(&f.e.s, &f.d);
  f.e.id = (int)p2;
  fn_828B5580(&f.c, src);
  f.h.a = fn_828B55F8(&f.c);
  cont = p1 + 0x24;
  if (f.h.a != 0x8000) {
    it = fn_8288DFB8(&f.out, p1 + 0x34, &f.h);
    cont = (char *)*it + 0x10;
  }
  node = (char *)fn_8224EFC8(cont);
  v = (Val *)(node + 0xc);
  if (v != 0) {
    fn_828B5580(&v->s, &f.e.s);
    v->id = f.e.id;
  }
  new (&f.h) Tree::_Pairib(((Tree *)cont)->_Linsert((Node *)node, false));
  fn_828B55B0(&f.c);
  fn_828B55B0(&f.e.s);
  fn_828B55B0(&f.d);
}
