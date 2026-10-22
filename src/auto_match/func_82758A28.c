extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void *fn_82765CA0(void *mem, int n);
extern void fn_82762930(void *p);
extern void fn_827597E0(void *p);
extern void fn_82759550(void *p);
extern unsigned int lbl_8201449C;
extern void *lbl_831E7E64;

typedef struct Obj {
  void *vtbl;
  int refcount;
  void *f8;
  int fc[14];
  int f44[10];
  int f6c[6];
  unsigned char f84;
  unsigned char f85;
} Obj;

Obj *fn_82758A28(Obj *p)
{
  void *mem;

  p->refcount = 1;
  p->vtbl = &lbl_8201449C;
  mem = fn_8267B890(lbl_831E7E64, 0x7c, 0);
  p->f8 = mem ? fn_82765CA0(mem, 0x1ff8) : 0;
  fn_82762930(&p->fc);
  fn_827597E0(&p->f44);
  fn_82759550(&p->f6c);
  p->f84 = 0;
  p->f85 = 0;
  return p;
}
