typedef struct Holder_82249AD0 Holder_82249AD0;
struct Holder_82249AD0 {
  void *(**vt)(Holder_82249AD0 *);
  int value;
};
typedef struct Obj_82249AD0 {
  void (**vt)(struct Obj_82249AD0 *, int, int *);
} Obj_82249AD0;
extern unsigned char fn_82F64538(void *, void *);
extern char lbl_831D70C4[];
extern char lbl_831D7088[];

void fn_82249AD0(Obj_82249AD0 *self, int a, Holder_82249AD0 **h)
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
    ok = fn_82F64538(t, lbl_831D70C4);
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
