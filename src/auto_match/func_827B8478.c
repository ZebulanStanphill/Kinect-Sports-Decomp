typedef struct A_827B8478 { char pad[0x11dc]; struct A_827B8478 *next; } A_827B8478;
typedef struct B_827B8478 { char pad[0x13d8]; struct B_827B8478 *next; } B_827B8478;
typedef struct {
  char pad0[0x1c]; B_827B8478 *bl; char pad1[0x44]; A_827B8478 *al; char pad2[0x10]; void *f78;
  char pad3[8]; char sub[1];
} Obj_827B8478;
extern void fn_827B6118(void *);
extern void fn_8267BE38(void *);

void fn_827B8478(Obj_827B8478 *o)
{
  A_827B8478 *a, *an;
  B_827B8478 *b, *bn;
  fn_827B6118(o->sub);
  fn_8267BE38(o->f78);
  for (a = o->al; a != 0; a = an) {
    an = a->next;
    fn_8267BE38(a);
  }
  for (b = o->bl; b != 0; b = bn) {
    bn = b->next;
    fn_8267BE38(b);
  }
}
