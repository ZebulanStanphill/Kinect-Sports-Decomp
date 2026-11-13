extern unsigned int *auStack_3e;
extern int fn_82A6E290();


void fn_82A69BD8(int param_1,int *param_2)

{
  short *psVar1;
  unsigned int uVar2;
  int iVar3;
  short sVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  short sStack_40;
  unsigned char auStack_3e [1];
  
  iVar7 = 0x7fff;
  iVar6 = 0;
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x1d4);
    iVar8 = 0;
    iVar7 = 0x7fff;
    do {
      iVar3 = *(int *)(param_1 + 0x140) + iVar8;
      psVar1 = *(short **)(iVar3 + 0x1a8);
      iVar4 = *psVar1 * 2;
      sVar5 = *(short *)(*(int *)(psVar1 + 4) + iVar4 + -2);
      uVar9 = (unsigned int)sVar5;
      if (*(int *)(param_1 + 0x1bc) == 0) {
        if (*(int *)(param_1 + 0x1c0) != 0) {
          uVar9 = (int)sVar5 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
        }
      }
      else {
        uVar9 = (int)sVar5 >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
      }
      if (*(int *)(param_1 + 0x3c) < 3) {
        sVar5 = *(short *)(*(int *)(*(int *)(iVar3 + 0x1a8) + 8) + iVar4);
        if (*(int *)(param_1 + 0x1bc) == 0) {
          if (*(int *)(param_1 + 0x1c0) != 0) {
            sVar5 = (short)((int)sVar5 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f));
          }
        }
        else {
          sVar5 = (short)((int)sVar5 >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f));
        }
        fn_82A6E290(param_1,1,(short)uVar9,sVar5,(short)uVar9,&sStack_40,auStack_3e);
        uVar9 = uVar9 * 3;
        uVar2 = *(unsigned int *)(param_1 + 0x1d4);
        iVar4 = ((int)sStack_40 - (((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0)))
                + uVar2;
      }
      else {
        iVar4 = uVar2 - (((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0));
      }
      iVar4 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar4;
      if (iVar4 < iVar7) {
        iVar7 = iVar4;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x6f0;
    } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  *param_2 = iVar7 - *(int *)(param_1 + 0x184);
  return;
}

