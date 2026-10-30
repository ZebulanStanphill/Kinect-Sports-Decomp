typedef struct { int pad0[3]; int f0c; unsigned f10; } A_82AF7EE8;
extern int fn_82AC6860(int, int, int, int);
extern A_82AF7EE8 *fn_82ACA920(int, A_82AF7EE8 *, int);
extern int fn_82AD1978(int, A_82AF7EE8 *);
extern int fn_82B841E8(int, int, int, int, int, int);
int fn_82AF7EE8(int param_1, int param_2, int param_3, A_82AF7EE8 *param_4, A_82AF7EE8 *param_5)
{
  int iVar1;
  iVar1 = fn_82B841E8(param_1, *(int *)(param_3 + 0x1c), 0, 0x11, 2, 4);
  *(int *)(iVar1 + 0x2c) = fn_82AD1978(iVar1, param_4->f10 != 0 ? fn_82ACA920(param_1, param_4, param_4->f0c) : param_4);
  *(int *)(iVar1 + 0x30) = fn_82AD1978(iVar1, param_5->f10 != 0 ? fn_82ACA920(param_1, param_5, param_5->f0c) : param_5);
  *(unsigned *)(iVar1 + 8) = *(unsigned *)(iVar1 + 8) & 0xfffe3fff | 0x4000;
  fn_82AC6860(param_1, iVar1, param_2, param_3);
  return iVar1;
}
