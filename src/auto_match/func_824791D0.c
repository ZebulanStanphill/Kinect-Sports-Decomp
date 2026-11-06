extern int fn_822C5B18(void *, void *);
extern int fn_82281308(int, void *, void *, int, int, int, int, int);
extern void fn_82359C18(void *);
extern void fn_824794A0(void);
extern void fn_82BA02A8(void);
extern int fn_8265C9E0(int);
extern char lbl_821A8C90[];
extern int lbl_831D3C30[];

int *fn_824791D0(int *param_1, int *param_2, int param_3, int param_4, int param_5, void *param_6, int param_7)
{
  int p;
  int v;
  char buf[16];

  param_1[0] = (int)lbl_821A8C90;
  param_1[5] = 0;
  param_1[6] = param_2[0];
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  param_1[9] = param_4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  fn_822C5B18(param_1 + 0xe, param_6);
  param_1[0x14] = param_7;
  param_1[0x15] = 0;
  param_1[0x16] = *(int *)(param_3 + 0x8c8);
  param_1[1] = (int)param_1;
  param_1[2] = (int)fn_824794A0;
  param_1[3] = (int)fn_82BA02A8;
  param_1[4] = (int)fn_82BA02A8;
  lbl_831D3C30[0] = param_3;
  lbl_831D3C30[1] = param_2[0];
  lbl_831D3C30[7] = param_2[1];
  p = fn_8265C9E0(0x68);
  if (p != 0) {
    v = fn_82281308(p, lbl_831D3C30, param_1, 0, param_5, 0, fn_822C5B18(buf, param_1 + 0xe), param_1[0x14]);
  } else {
    v = 0;
  }
  param_1[5] = v;
  fn_82359C18(param_6);
  return param_1;
}
