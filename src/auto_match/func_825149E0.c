extern unsigned char fn_828ACC40(int *p);
extern unsigned char fn_828ACCB0(int *p);
extern unsigned char fn_828ACCE8(int *p);
extern void fn_828ACD00(int *p);
extern unsigned char fn_828ADBB8(int *p);
extern void fn_82514AD8(int *p, int a);
extern void fn_828AE818(int *p, int a);
extern unsigned char lbl_83265988[];

typedef unsigned char (*VFn_825149E0)(int *p);

void fn_825149E0(int *param_1)
{
  int arg;

  if (fn_828ACC40(param_1) != 0) {
    return;
  }
  if (fn_828ACCB0(param_1) != 0) {
    return;
  }
  if (fn_828ACCE8(param_1) != 0) {
    if (fn_828ADBB8(param_1) != 0) {
      return;
    }
    if ((*(VFn_825149E0 *)(*param_1 + 0x78))(param_1) != 0) {
      fn_82514AD8(param_1, 0);
    }
    if (lbl_83265988[0x45] == 0) {
      arg = 0x19;
    }
    else {
      if (lbl_83265988[0x44] == 0) {
        return;
      }
      arg = 0x1a;
    }
    fn_828AE818(param_1, arg);
  }
  else {
    fn_828ACD00(param_1);
  }
}
