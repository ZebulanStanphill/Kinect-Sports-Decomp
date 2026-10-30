extern "C" {
int fn_8267C498(void *);
int fn_826C66D0(void *);
int fn_82703C40(void *);
int fn_82703E98(void *);
extern float lbl_8200DE20;
}

struct Item_827043C0 {
  void **vt;
  int f4;
};
struct Ent_827043C0 {
  int key;
  int item;
};
struct Vec_82702A88 {
  Ent_827043C0 *data;
  unsigned int size;
  void Erase(unsigned int i);
};

struct Obj_827043C0 {
  char pad0[0x5c];
  Vec_82702A88 v;
  int f64;
  int f68;
  char pad6c[0x13c - 0x6c];
  float f13c;
  char pad140[0xa08 - 0x140];
  int fa08;
  char pada0c[0xb00 - 0xa0c];
  unsigned fb00;
};

extern "C" extern "C" int fn_827043C0(Obj_827043C0 *o, int key)
{
  Item_827043C0 *p;
  int q;
  Ent_827043C0 *d;
  Ent_827043C0 *e;
  unsigned i;
  if (key == 0) {
    o->fa08 = 0;
    fn_82703E98(o);
    while (o->v.size != 0) {
      p = (Item_827043C0 *)o->v.data[o->v.size - 1].item;
      ((void (*)(void *))p->vt[0x74 / 4])(p);
      fn_82703C40(o);
      fn_826C66D0(p);
      o->v.Erase(o->v.size - 1);
    }
    o->f68 = 0;
    o->f13c = lbl_8200DE20;
    { unsigned *pf = &o->fb00; *pf |= 0x100; }
    return 1;
  }
  for (i = 0; i < o->v.size; i++) {
    d = o->v.data;
    if (d[i].key == key) {
      e = &d[i];
      q = e->item;
      if (q != 0) {
        ((Item_827043C0 *)q)->f4 = ((Item_827043C0 *)q)->f4 + 1;
      }
      p = (Item_827043C0 *)e->item;
      ((void (*)(void *))p->vt[0x74 / 4])(p);
      fn_82703C40(o);
      fn_826C66D0(p);
      o->v.Erase(i);
      o->fb00 |= 0x100;
      fn_8267C498(p);
      return 1;
    }
  }
  return 0;
}
