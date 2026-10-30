typedef struct Obj_82C0BB48 { struct ObjVt_82C0BB48 *vt; } Obj_82C0BB48;
typedef struct ObjVt_82C0BB48 { void (*dtor)(Obj_82C0BB48 *, int); } ObjVt_82C0BB48;
typedef struct Owner_82C0BB48 {
  char pad[0x2c];
  unsigned f2c;
  unsigned f30;
  unsigned f34;
  unsigned f38;
  unsigned f3c;
  unsigned f40;
  unsigned f44;
} Owner_82C0BB48;
extern void fn_8265C990(unsigned, int);
extern void fn_8265CA20(void *);

int fn_82C0BB48(Owner_82C0BB48 *o)
{
  Obj_82C0BB48 *p;
  if (o->f2c != 0)
    fn_8265C990(o->f2c, 0x208c800e);
  p = (Obj_82C0BB48 *)o->f30;
  if (p != 0) {
    if (((int *)p)[-1] != 0)
      p->vt->dtor(p, 3);
    else
      fn_8265CA20((int *)p - 1);
  }
  o->f38 = 0;
  o->f3c = 0;
  o->f40 = 0;
  o->f2c = 0;
  o->f30 = 0;
  o->f34 = 0;
  o->f44 = 0;
  return 0;
}
