extern int fn_82E50BE8();
extern int fn_82E7E500();


unsigned __int64 fn_82E44988(int param_1,unsigned __int64 param_2,unsigned int param_3,int param_4,int *param_5)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (((param_5 == (int *)0x0) || (*param_5 = 0, param_4 != 0)) || (9999 < param_3)) {
    return 0xffffffff80070057;
  }
  if (param_3 == 0) {
    iVar4 = param_1 + 4;
    if (param_1 == 4) {
      iVar4 = 0;
    }
    *param_5 = iVar4;
    piVar3 = (int *)(param_1 + -4);
    pcVar1 = *(int (***)())(*(int *)(param_1 + -4) + 4);
  }
  else {
    uVar2 = fn_82E50BE8(0x14,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E7E500(uVar2,param_1 + -4,param_3 & 0xffff);
    }
    if (piVar3 == (int *)0x0) {
      return 0xffffffff8007000e;
    }
    uVar5 = (**(int (***)())*piVar3)(piVar3,0xffffffff82153e5c,param_5);
    pcVar1 = *(int (***)())(*piVar3 + 8);
  }
  (*pcVar1)(piVar3);
  return uVar5;
}

