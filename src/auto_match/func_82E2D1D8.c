struct Com_82E2D1D8;
typedef struct {
  int (*f0)(struct Com_82E2D1D8 *, char *, void *);
  void *f4;
  int (*f8)(struct Com_82E2D1D8 *);
  char pad[0x60 - 0xc];
  int (*f60)(struct Com_82E2D1D8 *, char *, char *);
} ComVT_82E2D1D8;
typedef struct Com_82E2D1D8 { ComVT_82E2D1D8 *vt; } Com_82E2D1D8;
extern int fn_82E2D068(Com_82E2D1D8 **);
extern char lbl_82153478[];
extern char lbl_821537B8[];
extern char lbl_821531D8[];

int fn_82E2D1D8(void *param_1)
{
  Com_82E2D1D8 *c = 0;
  int hr;
  hr = fn_82E2D068(&c);
  if (hr >= 0) {
    hr = c->vt->f60(c, lbl_82153478, lbl_821537B8);
    if (hr >= 0) {
      hr = c->vt->f0(c, lbl_821531D8, param_1);
    }
  }
  if (c != 0) {
    c->vt->f8(c);
  }
  return hr;
}
