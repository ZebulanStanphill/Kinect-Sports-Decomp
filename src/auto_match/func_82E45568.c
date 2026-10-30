typedef int (*code)();
extern int fn_82E43898(void *);
extern int fn_82E44F90(void *, unsigned int, unsigned int *);
extern int fn_82E50EA0(void *);
extern int fn_82E569B0(void *, int);
extern int fn_82E7B648(void *);
extern unsigned int lbl_821530D8;
extern unsigned int lbl_82153100;
extern unsigned int lbl_82153104;
extern unsigned int lbl_82153114;
extern unsigned int lbl_82153124;
extern unsigned int lbl_82154D80;

typedef struct Unk_82E45568 { struct VT_82E45568 *vt; } Unk_82E45568;
typedef struct VT_82E45568 {
  void *s0; void *s1;
  void (*Release)(Unk_82E45568 *);
  void *s3;
  void (*f4)(Unk_82E45568 *);
} VT_82E45568;

static Unk_82E45568 *Get_82E45568(int ok, unsigned int v) { return (Unk_82E45568 *)(ok ? v : 0); }
static Unk_82E45568 *Get2_82E45568(int ok, unsigned int *v) { return ok ? (Unk_82E45568 *)*v : 0; }
void fn_82E45568(unsigned int *param_1)
{
  unsigned int i;
  Unk_82E45568 *o;
  unsigned int out;
  *param_1 = (unsigned int)&lbl_82153124;
  param_1[1] = (unsigned int)&lbl_82153114;
  param_1[2] = (unsigned int)&lbl_821530D8;
  param_1[3] = (unsigned int)&lbl_82153104;
  param_1[4] = (unsigned int)&lbl_82153100;
  if (param_1[6] != 0) {
    fn_82E43898(param_1);
    ((Unk_82E45568 *)param_1[6])->vt->f4((Unk_82E45568 *)param_1[6]);
  }
  if (param_1[0x1e] != 0) {
    ((Unk_82E45568 *)param_1[0x1e])->vt->Release((Unk_82E45568 *)param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if (param_1[0x1f] != 0) {
    ((Unk_82E45568 *)param_1[0x1f])->vt->Release((Unk_82E45568 *)param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  if (param_1[0x20] != 0) {
    ((Unk_82E45568 *)param_1[0x20])->vt->Release((Unk_82E45568 *)param_1[0x20]);
    param_1[0x20] = 0;
  }
  if (param_1[6] != 0) {
    ((Unk_82E45568 *)param_1[6])->vt->Release((Unk_82E45568 *)param_1[6]);
    param_1[6] = 0;
  }
  i = 0;
  if (param_1[0x3b] > 0) {
    do {
      int ok = fn_82E44F90(param_1 + 0x21, i, &out);
      o = Get_82E45568(ok, out);
      if (o != 0) { o->vt->Release(o); }
      i++;
    } while (i < param_1[0x3b]);
  }
  fn_82E569B0(param_1 + 0x21, 0);
  param_1[0x3b] = 0;
  param_1[0x21] = (unsigned int)&lbl_82154D80;
  if (param_1[0x22] == 0) {
    fn_82E569B0(param_1 + 0x21, 0);
  }
  fn_82E50EA0(param_1 + 0xf);
  fn_82E7B648(param_1 + 4);
}
