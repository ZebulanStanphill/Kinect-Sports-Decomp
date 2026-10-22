extern void fn_8268B330(void *p);
extern unsigned int lbl_8200DB84;

typedef struct SP { void *p; } SP;

typedef struct Obj {
  void *vtbl;
  int refcount;
  SP sp[14];
  int f40;
  unsigned char f44;
  int f48, f4c, f50;
} Obj;

Obj *fn_826F5668(Obj *p)
{
  SP *z;

  p->refcount = 1;
  p->vtbl = &lbl_8200DB84;
  z = p->sp;
  z[0].p = 0;
  z[1].p = 0;
  z[2].p = 0;
  z[3].p = 0;
  z[4].p = 0;
  z[5].p = 0;
  z[6].p = 0;
  z[7].p = 0;
  z[8].p = 0;
  z[9].p = 0;
  z[10].p = 0;
  z[11].p = 0;
  z[12].p = 0;
  z[13].p = 0;
  fn_8268B330(&p->f40);
  p->f44 = 0;
  p->f48 = 0;
  p->f4c = 0;
  p->f50 = 0;
  return p;
}
