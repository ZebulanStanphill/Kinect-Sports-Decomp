typedef unsigned char bool;
extern int fn_82F68CC0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A37768(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  piVar3 = (int *)param_1;
  piVar3[0x10] = piVar3[0x10] + 1;
  if (piVar3[0xd] == 0) {
    NtWaitForSingleObjectEx(piVar3[10],1,0,0);
  }
  if (piVar3[0xc] == 0) {
    uVar4 = 0;
  }
  else {
    fn_82F68CC0(param_2,piVar3[1],0x60);
    iVar1 = piVar3[1];
    piVar3[1] = iVar1 + 0x60;
    if (iVar1 + 0x60 == piVar3[0xb] * 0x60 + *piVar3) {
      piVar3[1] = *piVar3;
    }
    piVar3[0xf] = piVar3[0xf] + 1;
    do {
      puVar6 = (unsigned int *)(param_1 + 0x30);
      lVar5 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar5,0,param_1 + 0x30);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar3[0xd] = (int)lVar5;
    uVar4 = 1;
  }
  return uVar4;
}

