#include <list>
#include <string.h>

struct Element_828291A0 {
  char name[256];
  unsigned id;
};
typedef std::list<Element_828291A0> List_828291A0;
extern template void List_828291A0::_Insert(List_828291A0::const_iterator, const Element_828291A0 &);

struct Pool_82828720;
struct Handle_82829398 { int pad[4]; };
struct Item_82834458 { int pad[3]; List_828291A0::_Nodeptr *f0c; };
extern "C" int fn_82828380(void *);
extern "C" Item_82834458 *fn_82834458(Pool_82828720 *);
extern "C" int fn_82829398(Handle_82829398 *, Pool_82828720 *, Item_82834458 *, int);

struct Obj_82828720 {
  char pad[0x24]; unsigned f24; char pad2[0x2c4]; List_828291A0 *lst; Pool_82828720 *pool;
};

extern "C" unsigned fn_82828720(Obj_82828720 *p, const char *name)
{
  unsigned r;
  Element_828291A0 e;
  Handle_82829398 h;
  Item_82834458 *it;
  Pool_82828720 *pool;
  List_828291A0::_Nodeptr last;

  r = fn_82828380(p);
  if (r == 0) {
    p->f24 = p->f24 + 1;
    strncpy(e.name, name, 0xff);
    e.id = p->f24;
    p->lst->push_back(e);
    pool = p->pool;
    r = p->f24;
    last = p->lst->_Myhead->_Prev;
    it = fn_82834458(pool);
    if (&it->f0c != 0) it->f0c = (List_828291A0::_Nodeptr *)((char *)last + 8);
    fn_82829398(&h, pool, it, 0);
  }
  return r;
}
