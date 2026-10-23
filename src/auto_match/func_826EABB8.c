typedef struct ErrMgr { void (*error_exit)(); } ErrMgr;
typedef struct Cinfo { ErrMgr *err; } Cinfo;
typedef struct Obj {
  void *vtbl;
  int f4;
  Cinfo cinfo;
  char pad[0x1b8 - 0xc];
  ErrMgr jerr;
  char pad2[0x304 - 0x1bc];
  void *jmpbuf;
  unsigned char b308;
  unsigned char b309;
} Obj;
extern void *fn_8267B8F0(void *heap, int size, int align, int flags);
extern int fn_826EA070(Cinfo *c, ErrMgr *e);
extern void fn_826EA350(Cinfo *c, int a);
extern void fn_826EA5C8();
extern void fn_826EA608(Obj *o);
extern ErrMgr *fn_827BDB08(ErrMgr *e);
extern char lbl_8200D84C[];
extern void *lbl_831E7E64;

Obj *fn_826EABB8(Obj *o, int a)
{
  o->vtbl = lbl_8200D84C;
  o->jmpbuf = fn_8267B8F0(lbl_831E7E64, 0x540, 0x20, 0);
  o->b309 = 0;
  o->b308 = 0;
  { ErrMgr *e = &o->jerr; ErrMgr *r = fn_827BDB08(e); e->error_exit = fn_826EA5C8; o->cinfo.err = r; }
  if (fn_826EA070(&o->cinfo, &o->jerr) != 0) {
    fn_826EA350(&o->cinfo, a);
    fn_826EA608(o);
  }
  return o;
}
