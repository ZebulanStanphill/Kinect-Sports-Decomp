extern int fn_82F68240();
extern int fn_82F6B890();
extern int fn_82F6BB98();
extern int fn_82F7C468();
extern int fn_82F82818();


__int64 fn_82F6BF90(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  if ((*(unsigned int *)(param_1 + 0xc) & 0x83) == 0) {
    puVar4 = (unsigned int *)fn_82F68240();
    lVar2 = -1;
    *puVar4 = 0x16;
  }
  else {
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) & 0xffffffef;
    if ((int)param_3 == 1) {
      lVar2 = fn_82F6B890(param_1);
      param_2 = lVar2 + param_2;
      param_3 = 0;
    }
    fn_82F6BB98(param_1);
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 1) != 0) {
        if (((uVar1 & 8) != 0) && ((uVar1 & 0x400) == 0)) {
          *(unsigned int *)(param_1 + 0x18) = 0x200;
        }
      }
    }
    else {
      *(unsigned int *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    uVar3 = fn_82F7C468(param_1);
    lVar2 = fn_82F82818(uVar3,param_2,param_3);
    lVar2 = -(unsigned __int64)(lVar2 == -1);
  }
  return lVar2;
}

