extern unsigned int lbl_832179FC;


void fn_829DC6C0(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = lbl_832179FC;
  if (*(unsigned int *)(lbl_832179FC + 0x8f080) < param_1) {
    iVar4 = 0x8f06c;
    iVar3 = 0x8f070;
    uVar1 = *(unsigned int *)(lbl_832179FC + 0x8f068);
    iVar5 = 0x8f078;
  }
  else {
    iVar4 = 0x8f058;
    iVar3 = 0x8f05c;
    uVar1 = *(unsigned int *)(lbl_832179FC + 0x8f054);
    iVar5 = 0x8f064;
  }
  *param_2 = uVar1;
  *param_3 = *(unsigned int *)(iVar2 + iVar4);
  *param_4 = *(unsigned int *)(iVar2 + iVar3);
  *param_5 = *(unsigned int *)(iVar2 + iVar5);
  return;
}

