extern int fn_822B1CF0();
extern int fn_8288B760(int);
extern int fn_828AB870(void *, int);
extern __declspec(noreturn) void fn_82F63108(void);

struct Iface_822B1E78;
typedef struct { void *f0; int (*f4)(struct Iface_822B1E78 *); } Vt_822B1E78;
typedef struct Iface_822B1E78 { Vt_822B1E78 *vt; } Iface_822B1E78;
typedef struct { int pad[4]; Iface_822B1E78 *ptr; } Handle_822B1E78;
typedef struct { char pad0[0x10]; int f10; char pad14[4]; Handle_822B1E78 h; char pad2c[4]; char sub[1]; } Obj_822B1E78;

void fn_822B1E78(Obj_822B1E78 *p)
{
  int v;
  fn_822B1CF0();
  if ((unsigned char)fn_8288B760(p->f10) != 0) {
    if (p->h.ptr != 0) {
      Handle_822B1E78 *h = &p->h;
      if (h->ptr == 0)
        fn_82F63108();
      v = h->ptr->vt->f4(h->ptr);
    } else {
      v = 0;
    }
    fn_828AB870(p->sub, v);
  }
}
