extern int fn_8265C940();
extern int fn_828F4440();
extern int fn_828F4780();
extern int fn_828F7668();
extern int fn_82A9F7E8();


unsigned __int64 fn_828F7D48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2a4);
  if (-1 < (int)*(unsigned int *)(param_1 + 0x2a4)) {
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = 0xffffffff82196582;
    }
    iVar3 = fn_8265C940(0x60,0x24810000);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828F4440();
    }
    *(int *)(param_1 + 0x274) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = fn_828F4780(uVar2,param_2,param_3,param_4,param_1,param_1 + 0x18);
      if (-1 < (int)uVar2) {
        if ((*(int *)(param_1 + 0x2b0) != 0) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x14), iVar3 != 0)) {
          puVar1 = *(unsigned int **)(param_1 + 0x274);
          uVar2 = fn_82A9F7E8(iVar3,puVar1[0x13],*puVar1,
                                  (unsigned __int64)puVar1[1] - (unsigned __int64)*puVar1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        }
        uVar2 = fn_828F7668(param_1,param_5);
        if (-1 < (int)uVar2) {
          uVar2 = 0;
          *(unsigned int *)(param_1 + 0x27c) = param_6;
          *(unsigned int *)(param_1 + 0x278) = *(unsigned int *)(param_1 + 0x274);
        }
      }
    }
  }
  return uVar2;
}

