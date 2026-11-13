extern unsigned int *auStack_20;
extern int fn_8267B890();
extern int fn_8267BDA8();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;


void fn_826A8FA0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int auStack_20 [2];
  
  if ((param_3 & 0xffffffff) < 0x20) {
    param_3 = 0x20;
  }
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      fn_8267BE38();
      *param_1 = 0;
    }
  }
  else {
    uVar2 = (unsigned int)(param_3 + 0xf) & 0xfffffff0;
    if (*param_1 == 0) {
      auStack_20[0] = 2;
      iVar1 = fn_8267B890(lbl_831E7E64,(param_3 + 0xf & 0x3ffffff0) << 2,auStack_20);
    }
    else {
      iVar1 = fn_8267BDA8();
    }
    *param_1 = iVar1;
  }
  param_1[2] = uVar2;
  return;
}

