extern unsigned int fn_8265C940(unsigned int, unsigned int);
extern int fn_8265C990(unsigned int, unsigned int);

void fn_82ED4038(unsigned int *param_1, unsigned int param_2, unsigned int param_3)
{
  unsigned int iVar2;
  unsigned int sz;

  if (*param_1 != 0) {
    fn_8265C990(*param_1, 0x248c8000);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265C990(param_1[1], 0x248c8000);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    fn_8265C990(param_1[3], 0x248c8000);
    param_1[3] = 0;
  }
  param_1[0x1008] = param_2;
  param_1[0x1009] = param_3;
  param_1[0x100a] = param_2 >> 4;
  iVar2 = (param_2 + 0xf >> 4) * (param_3 + 0xf >> 4) * 4;
  param_1[0x1006] = iVar2;
  param_1[4] = -1;
  param_1[0x1007] = (int)iVar2 >> 1;
  *param_1 = fn_8265C940(iVar2, 0x248c8000);
  sz = param_1[0x1006] * 4;
  if (0x3fffffff < param_1[0x1006]) {
    sz = -1;
  }
  param_1[1] = fn_8265C940(sz, 0x248c8000);
  if (param_1[0x1006] <= 0x3fffffff) {
    sz = param_1[0x1006] * 4;
  } else {
    sz = -1;
  }
  param_1[3] = fn_8265C940(sz, 0x248c8000);
}
