struct Com_82E2D8C0;
typedef struct {
  int (*f0)(struct Com_82E2D8C0 *, char *, void *);
  void *f4;
  int (*f8)(struct Com_82E2D8C0 *);
  int (*fc)(struct Com_82E2D8C0 *, char *, void *);
} ComVT_82E2D8C0;
typedef struct Com_82E2D8C0 { ComVT_82E2D8C0 *vt; } Com_82E2D8C0;
extern char lbl_82154C18[];
extern char lbl_82154B18[];
extern char lbl_820F8F08[];

int fn_82E2D8C0(void *self, Com_82E2D8C0 *src, int *out)
{
  Com_82E2D8C0 *c;
  unsigned int a;
  unsigned int b;
  int hr;
  *out = 0;
  c = 0;
  a = 0;
  b = 0;
  hr = src->vt->f0(src, lbl_82154C18, &c);
  if (hr >= 0) {
    hr = c->vt->fc(c, lbl_82154B18, &a);
    if (hr >= 0) {
      hr = c->vt->fc(c, lbl_820F8F08, &b);
      if (hr >= 0 && (a != 0 || b != 0)) {
        *out = 1;
      }
    }
  }
  if (c != 0) {
    c->vt->f8(c);
  }
  return hr;
}
