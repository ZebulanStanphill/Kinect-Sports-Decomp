extern char lbl_821A8D8C[];
extern char lbl_821BC360[];
extern char lbl_821BC7A0[];
extern int fn_82279768(void *, void *, int, int, int, void *, int, int, int, int);
extern void *fn_822C5B18(void *, void *);
extern void fn_82359C18(void *);

typedef struct Func_824714C8 {
  void *vt;
  int val;
  int pad[2];
  void *self;
} Func_824714C8;

int *fn_824714C8(int *param_1, void *param_2, int *param_3, int *param_4, int *param_5, int *param_6)
{
  int *inner;
  int a, b, c;
  Func_824714C8 f;
  Func_824714C8 res;

  param_1[1] = 1;
  *(void **)param_1 = lbl_821A8D8C;
  inner = param_1 + 4;
  param_1[2] = 1;
  if (inner != 0) {
    f.val = *param_6;
    f.self = &f;
    a = *param_5;
    b = *param_4;
    f.vt = lbl_821BC7A0;
    c = *param_3;
    fn_82279768(inner, param_2, c, 1, 1, fn_822C5B18(&res, &f), 0, 1, 0, 0);
    inner[0x4c] = b;
    inner[0x4d] = a;
    *(void **)inner = lbl_821BC360;
    fn_82359C18(&f);
  }
  return param_1;
}
