typedef struct Mgr Mgr;
typedef struct MgrVtbl {
  void *pad0[4];
  void (*f10)(Mgr *self, void *item, void *arg);
  void (*f14)(Mgr *self, void *item, void *out);
} MgrVtbl;
struct Mgr {
  MgrVtbl *vtbl;
};

typedef struct Listener Listener;
typedef struct ListenerVtbl {
  void *pad0;
  void (*f4)(Listener *self, int v);
} ListenerVtbl;
struct Listener {
  ListenerVtbl *vtbl;
};

typedef struct Obj {
  char pad0[0x48];
  Listener *listener;
  char pad4c[0x1c];
  Mgr *mgr;
} Obj;

typedef struct Ptr {
  void *p;
  void *rc;
} Ptr;

extern void fn_822315A0(void *p);
extern void fn_822D79D8(Ptr *sp, void *p);
extern void *fn_822D7FE0(void *mem);
extern void *fn_8265C9E0(int size);
extern void fn_828E2B28(Obj *o, Ptr *sp);
extern void fn_828E9D40(void *p);
extern void fn_828E9D90(void *p);

void fn_822D6AB8(Obj *o, int arg)
{
  void *mem;
  void *item;
  Ptr sp;
  int out;

  mem = fn_8265C9E0(0x28);
  item = mem ? fn_822D7FE0(mem) : 0;
  sp.p = 0;
  sp.rc = 0;
  fn_822D79D8(&sp, item);
  o->mgr->vtbl->f10(o->mgr, sp.p, &arg);
  if (o->listener != 0) {
    fn_828E9D90(sp.p);
    fn_828E9D40(sp.p);
    o->mgr->vtbl->f14(o->mgr, sp.p, &out);
    if (o->listener != 0) {
      o->listener->vtbl->f4(o->listener, out);
    }
  }
  fn_828E2B28(o, &sp);
  if (sp.rc != 0) {
    fn_822315A0(sp.rc);
  }
}
