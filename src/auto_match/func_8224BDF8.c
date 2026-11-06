typedef struct Holder_8224BDF8 Holder_8224BDF8;
struct Holder_8224BDF8 {
  void *(**vt)(Holder_8224BDF8 *);
  unsigned char value;
};
typedef struct Obj_8224BDF8 {
  void (**vt)(struct Obj_8224BDF8 *, int, unsigned char *);
} Obj_8224BDF8;
extern unsigned char fn_82F64538(void *, void *);
extern char lbl_831D7470[];
extern char lbl_831D7088[];

void fn_8224BDF8(Obj_8224BDF8 *self, int a, Holder_8224BDF8 **h)
{
  unsigned char *p;
  unsigned char v;
  unsigned char ok;
  void *t;

  if (h != 0) {
    if (*h != 0) {
      t = (*h)->vt[1](*h);
    } else {
      t = lbl_831D7088;
    }
    ok = fn_82F64538(t, lbl_831D7470);
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
