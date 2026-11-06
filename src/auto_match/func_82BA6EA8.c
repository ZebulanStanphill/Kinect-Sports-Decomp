typedef struct Elem_82BA6EA8 {
  char pad38[0x38];
  int f38;
  char pad3c[0x14];
  int f50;
  char pad54[0x90];
  unsigned fe4;
} Elem_82BA6EA8;
typedef struct Vec_82BA6EA8 { int f0; unsigned size; Elem_82BA6EA8 **data; } Vec_82BA6EA8;
typedef struct Obj_82BA6EA8 {
  char pad[0x814];
  Vec_82BA6EA8 *vec;
  char pad818[0x18];
  int f830;
} Obj_82BA6EA8;
extern void fn_82BA6BC0(Obj_82BA6EA8 *);
extern void fn_82BA6D10(Obj_82BA6EA8 *);
extern void fn_82BA6DB8(Obj_82BA6EA8 *);
extern void fn_82BA4190(Obj_82BA6EA8 *);
extern void fn_82BA6C68(Obj_82BA6EA8 *);

void fn_82BA6EA8(Obj_82BA6EA8 *o)
{
  Vec_82BA6EA8 *v;
  Elem_82BA6EA8 *e;
  unsigned i;
  int off;
  unsigned char ok;

  fn_82BA6BC0(o);
  fn_82BA6D10(o);
  fn_82BA6DB8(o);
  fn_82BA4190(o);
  fn_82BA6C68(o);
  v = o->vec;
  e = 0;
  off = 0;
  i = 1;
  for (;;) {
    if (i > v->size) {
      ok = 0;
    } else {
      e = *(Elem_82BA6EA8 **)((char *)v->data + off);
      ok = 1;
    }
    if (!ok) break;
    if ((e->fe4 & 1) != 0 && e->f50 == 8 && e->f38 > o->f830) {
      o->f830 = e->f38;
    }
    i++;
    off += 4;
  }
}
