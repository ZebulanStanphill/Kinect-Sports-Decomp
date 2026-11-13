extern unsigned int *auStack_50;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;


void fn_82F5A730(unsigned __int64 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  __int64 lVar5;
  unsigned int uStack_54;
  unsigned int auStack_50 [20];
  
  lVar5 = 0x14;
  puVar3 = auStack_50;
  piVar4 = (int *)(param_3 * 0x1c0 + param_2 + 400);
  do {
    iVar1 = *piVar4;
    if (iVar1 == 2) {
      *puVar3 = lbl_82002AE0;
    }
    else if (iVar1 == 1) {
      *puVar3 = lbl_82002C5C;
    }
    else if (iVar1 == 0) {
      *puVar3 = lbl_821AAD20;
    }
    *(unsigned int *)((param_4 - (int)auStack_50) + (int)puVar3) = lbl_82002AE0;
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = &uStack_54;
  puVar2 = (unsigned int *)(param_4 + -4);
  lVar5 = 0x14;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

