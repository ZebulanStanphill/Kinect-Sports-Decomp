typedef struct Holder_8233EFC0 Holder_8233EFC0;
struct Holder_8233EFC0 {
  void *(**vt)(Holder_8233EFC0 *);
  int value;
};
typedef struct Obj_8233EFC0 {
  void (**vt)(struct Obj_8233EFC0 *, int, int *);
} Obj_8233EFC0;
extern unsigned char fn_82F64538(void *, void *);
extern char lbl_831D7480[];
extern char lbl_831D7088[];

void fn_8233EFC0(Obj_8233EFC0 *self, int a, Holder_8233EFC0 **h)
{
  int *p;
  int v;
  unsigned char ok;
  void *t;

  if (h != 0) {
    if (*h != 0) {
      t = (*h)->vt[1](*h);
    } else {
      t = lbl_831D7088;
    }
    ok = fn_82F64538(t, lbl_831D7480);
    if (ok != 0) {
      p = &(*h)->value;
      goto done;
    }
  }
  p = 0;
done:
  v = *p;
  self->vt[4](self, a, &v);
}
