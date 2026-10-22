typedef struct Obj Obj;
typedef struct Sub Sub;
typedef struct SubVtbl {
  void *fn0;
  void (*fn4)(Sub *);
} SubVtbl;
struct Sub { SubVtbl *vtbl; };
typedef struct ObjVtbl {
  void *fn0;
  unsigned char (*fn4)(Obj *);
} ObjVtbl;
struct Obj {
  ObjVtbl *vtbl;
  int f4[28];
  unsigned int pad:4; unsigned int flag:1;
  Sub f78;
};

extern void fn_8304FC90(Obj *);

int fn_83050498(Obj *p)
{
  if ((unsigned char)p->flag == 0) {
    p->f78.vtbl->fn4(&p->f78);
  }
  if (p->vtbl->fn4(p)) {
    fn_8304FC90(p);
    return 1;
  }
  return 0;
}
