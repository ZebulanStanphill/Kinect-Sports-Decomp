typedef struct Vt_82814278 { void *f[6]; void (*f18)(void *, void *, unsigned); } Vt_82814278;
typedef struct Obj_82814278 { Vt_82814278 *vt; } Obj_82814278;
extern void fn_82813038(void *);
extern Obj_82814278 *fn_8262F6A8(void);
extern unsigned fn_82811400(void *buf, int n);

void *fn_82814278(void *self, unsigned int flags)
{
  char buf[32];
  Obj_82814278 *o;

  fn_82813038(self);
  if ((flags & 1) != 0) {
    o = fn_8262F6A8();
    o->vt->f18(o, self, fn_82811400(buf, 8));
  }
  return self;
}
