extern int fn_82821460();


unsigned __int64
fn_82821678(unsigned __int64 param_1,int param_2,int *param_3,unsigned int *param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  char acStack_20 [16];
  
  uVar4 = 0;
  uVar1 = (param_3[1] - *param_3) / 0x14;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      iVar5 = iVar3 + *param_3;
      if (*(int *)(iVar5 + 8) == param_2) break;
      uVar4 = uVar4 + 1;
      iVar5 = 0;
      iVar3 = iVar3 + 0x14;
    } while (uVar4 < uVar1);
    if (iVar5 != 0) {
      acStack_20[0] = '\x01';
      uVar2 = fn_82821460(((unsigned __int64)*(unsigned int *)(iVar5 + 4) & 0x7ffffff) * 0x20 +
                            (unsigned __int64)*param_4,param_1,param_4,param_5,acStack_20);
      if (acStack_20[0] != '\0') {
        return uVar2;
      }
    }
  }
  return 0xffffffffffffffff;
}

