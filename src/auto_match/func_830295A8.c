typedef struct { unsigned key; struct Tgt_830295A8 *value; } Ent_830295A8;
typedef struct Tgt_830295A8 { char pad[0x2c]; float f2c; } Tgt_830295A8;
typedef struct Link_830295A8 {
  char pad[0x6c];
  Tgt_830295A8 *f6c;
} Link_830295A8;
typedef struct Rec_830295A8 { char pad[0x14]; struct Rec_830295A8 *next; } Rec_830295A8;
typedef struct {
  char pad[0x7c];
  Rec_830295A8 *list;
  char pad80[8];
  Ent_830295A8 *begin;
  Ent_830295A8 *end;
} Obj_830295A8;
typedef struct { int a; int b; unsigned char c; int d; float e; } Msg_830295A8;

extern int fn_82FF0F00(void *, void *);

static __forceinline Tgt_830295A8 **Find(Obj_830295A8 *o, unsigned key)
{
  Ent_830295A8 *end = o->end;
  int found;
  unsigned char bfound;
  unsigned ufound;
  Ent_830295A8 *e = o->begin;
  while (e != end && e->key != key)
    e++;
  found = e != end;
  return found ? &e->value : 0;
}

void fn_830295A8(Obj_830295A8 *o, unsigned key, float v)
{
  Tgt_830295A8 **pp = Find(o, key);
  Rec_830295A8 *r;
  Msg_830295A8 m;
  if (pp != 0) {
    r = o->list;
    m.a = 0;
    m.c = 0;
    m.b = 0;
    m.e = v - (*pp)->f2c;
    m.d = 0;
    for (; r != 0; r = r->next) {
      if (((Link_830295A8 *)r)->f6c == *pp)
        fn_82FF0F00(r, &m);
    }
    (*pp)->f2c = v;
  }
}
