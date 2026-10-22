extern void fn_822315A0(void *);
extern void fn_82232CC8(void *);
extern void fn_82233250(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_8223B8C8(void *);
extern void fn_8223B930(void *);
extern void fn_82240688(void *);
extern void *fn_8265C9E0(int);
extern char lbl_821980AC[];
extern char lbl_821AD588[];

typedef struct Obj {
  void *vtbl;
  char pad[0xe0];
  char a[0x20c - 0xe4];
  char b[0x274 - 0x20c];
  char c[0x2dc - 0x274];
  char d[0x334 - 0x2dc];
  char e[0x38c - 0x334];
} Obj;

typedef struct Blk {
  void *vtbl;
  int uses;
  int weaks;
  Obj obj;
} Blk;

typedef struct SP { Obj *ptr; Blk *rep; } SP;

SP *fn_82256430(SP *p)
{
  Blk *blk;
  Obj *obj;
  blk = (Blk *)fn_8265C9E0(0x398);
  if (blk != 0) {
    Obj *o;
    blk->uses = 1;
    blk->vtbl = lbl_821AD588;
    blk->weaks = 1;
    o = &blk->obj;
    if (o != 0) {
      fn_82232CC8(o);
      o->vtbl = lbl_821980AC;
      fn_82233250(o->a);
      fn_8223B8C8(o->b);
      fn_8223B930(o->c);
      fn_82240688(o->d);
      fn_82240688(o->e);
    }
  } else {
    blk = 0;
  }
  obj = &blk->obj;
  p->ptr = 0;
  p->rep = 0;
  if (blk != 0) {
    if (fn_8223AAC0(blk)) {
      if (p->rep != 0) {
        fn_822315A0(p->rep);
      }
      p->rep = blk;
      p->ptr = obj;
    }
    fn_822315A0(blk);
  }
  return p;
}
