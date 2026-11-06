typedef struct Holder_823BBE00 Holder_823BBE00;
struct Holder_823BBE00 {
  void *(**vt)(Holder_823BBE00 *);
  int pad;
  unsigned __int64 value;
};
typedef struct Obj_823BBE00 {
  void (**vt)(struct Obj_823BBE00 *, int, unsigned __int64 *);
} Obj_823BBE00;
extern unsigned char fn_82F64538(void *, void *);
extern char lbl_831DE9E4[];
extern char lbl_831D7088[];

void fn_823BBE00(Obj_823BBE00 *self, int a, Holder_823BBE00 **h)
{
  unsigned __int64 *p;
  unsigned __int64 v;
  unsigned char ok;
  void *t;

  if (h != 0) {
    if (*h != 0) {
      t = (*h)->vt[1](*h);
    } else {
      t = lbl_831D7088;
    }
    ok = fn_82F64538(t, lbl_831DE9E4);
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
