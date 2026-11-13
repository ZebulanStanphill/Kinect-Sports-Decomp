extern unsigned int *auStack_20;
extern int fn_82E404A8();
extern int fn_82E50BE8();


unsigned __int64 fn_82E40B20(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int auStack_20 [2];
  
  if (param_1 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = 0;
    auStack_20[0] = 0;
    uVar2 = fn_82E50BE8(0x2d0,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E404A8(uVar2,auStack_20);
      uVar1 = (unsigned __int64)auStack_20[0];
    }
    *param_1 = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    if (((int)uVar1 < 0) && (piVar3 != (int *)0x0)) {
      (**(int (***)())(*piVar3 + 8))();
      *param_1 = 0;
    }
  }
  return uVar1;
}

