extern int fn_826916F0();
extern int fn_826919A0();


unsigned int fn_82691CD8(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char acStack_30 [48];
  
  acStack_30[0] = '\0';
  if ((*(unsigned int *)(param_1 + 0x208) != 0) &&
     ((unsigned __int64)*(unsigned int *)(param_1 + 0x208) <= (param_2 & 0xffffffff))) {
    do {
      iVar2 = fn_826916F0(param_1,param_2,param_3,acStack_30);
      if (iVar2 != 0) goto LAB_82691d98;
    } while (acStack_30[0] != '\0');
  }
  uVar1 = *(unsigned int *)(param_1 + 0x1f8);
  uVar3 = (unsigned __int64)uVar1;
  acStack_30[0] = '\0';
  trapWord(6,uVar3,0);
  while (iVar2 = fn_826919A0(param_1,9,
                               (__int64)
                               (int)(((((param_2 + param_3) - 1 & ~(param_3 - 1U)) + uVar3) - 1 &
                                     0xffffffff) / uVar3) * (__int64)(int)uVar1,param_3,0,
                               acStack_30), iVar2 == 0) {
    if (acStack_30[0] == '\0') {
      return 0;
    }
  }
LAB_82691d98:
  *(int *)(param_1 + 0x214) = *(int *)(iVar2 + 0x18) + *(int *)(param_1 + 0x214);
  return *(unsigned int *)(iVar2 + 0x1c);
}

