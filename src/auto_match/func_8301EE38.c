extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83264658;
extern unsigned int lbl_8326465C;
extern unsigned int lbl_83264660;


unsigned __int64 fn_8301EE38(unsigned int param_1,unsigned char param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  if (7 < param_1) {
    return 0x1f;
  }
  iVar2 = param_1 * 0x90;
  (&lbl_83264660)[iVar2] = param_2;
  if (param_3 != 0) {
    puVar4 = (unsigned int *)(param_3 + -4);
    puVar3 = (unsigned int *)(iVar2 + -0x7cd9b9c4);
    lVar5 = 6;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      uVar1 = lbl_821AAD20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(unsigned int *)(&lbl_83264658 + iVar2) = lbl_821AAD20;
    *(unsigned int *)(&lbl_8326465C + iVar2) = uVar1;
  }
  return 1;
}

