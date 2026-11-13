extern unsigned int *auStack_50;
extern int fn_83048198();
extern int fn_8304D8A0();
extern unsigned int iStack_60;
extern unsigned int uStack_44;


unsigned __int64 fn_83048348(int param_1)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int iStack_60;
  unsigned char auStack_50 [12];
  unsigned short uStack_44;
  
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x138);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x13c);
  if (iVar6 != 0) {
    piVar7 = (int *)(param_1 + 0x34);
    iVar3 = fn_8304D8A0(iVar6,iVar1,auStack_50,0x12,param_1 + 0x10,(int *)(param_1 + 0x20),
                            (int *)(param_1 + 0x24),piVar7);
    if (iVar3 != 1) {
      return 7;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    *(unsigned short *)(param_1 + 0x3c) = uStack_44;
    iVar6 = iStack_60 + iVar6;
    uVar4 = (unsigned int)uStack_44 * *(int *)(param_1 + 0x20) + iVar6;
    *(int *)(param_1 + 0x38) = iVar6;
    *(unsigned int *)(param_1 + 0x2c) = uVar4;
    if ((iVar3 == 0) || (*(short *)(*(int *)(param_1 + 8) + 0xd4) == 1)) {
      *(int *)(param_1 + 0x30) = *piVar7 + iVar6;
    }
    else {
      *(unsigned int *)(param_1 + 0x30) = (iVar3 + 1) * (unsigned int)uStack_44 + iVar6;
    }
    if (uVar4 <= *(unsigned int *)(param_1 + 0x30)) {
      uVar5 = *piVar7 + iVar6;
      if (((uVar4 <= uVar5) && (*(unsigned int *)(param_1 + 0x30) <= uVar5)) &&
         (iVar1 == *piVar7 + iStack_60)) {
        *(int *)(param_1 + 0x28) = iVar6;
        if ((*(unsigned char *)(*(int *)(param_1 + 8) + 0xdb) & 0x80) != 0) {
          uVar2 = fn_83048198(param_1);
          return uVar2;
        }
        return 1;
      }
    }
  }
  return 2;
}

