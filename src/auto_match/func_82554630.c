typedef struct Obj Obj;
typedef struct {
  void (*Release)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

typedef struct Mgr Mgr;
typedef struct {
  void *f0[6];
  void (*Free)(Mgr *, void *, void *);
} MgrVtbl;
struct Mgr { MgrVtbl *vtbl; };

typedef struct {
  void *vtbl;
  char pad[0x188];
  unsigned int count;
  Obj **a;
  Obj **b;
  Obj **c;
} Self;

extern void fn_827F1080(Self *self);
extern void fn_82811438(void *out, void *in, int size);
extern unsigned int lbl_821C4CB8;
extern Mgr *lbl_832823E0;

void fn_82554630(Self *param_1)
{
  unsigned int i;
  int desc[4];
  char buf[32];

  param_1->vtbl = &lbl_821C4CB8;
  for (i = 0; i < param_1->count; i++) {
    if (i != 0) {
      param_1->c[i - 1]->vtbl->Release(param_1->c[i - 1], 0);
    }
    param_1->a[i]->vtbl->Release(param_1->a[i], 0);
    param_1->b[i]->vtbl->Release(param_1->b[i], 0);
  }
  desc[0] = 3;
  fn_82811438(buf, desc, 0x10);
  lbl_832823E0->vtbl->Free(lbl_832823E0, param_1->b, buf);
  fn_827F1080(param_1);
}
