typedef unsigned char bool;
extern unsigned int iStack_88;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_92;
extern unsigned int uStack_93;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82DC8328(int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  int *piStack_a4;
  unsigned int uStack_a0;
  int iStack_9c;
  int iStack_98;
  unsigned char uStack_94;
  unsigned char uStack_93;
  unsigned char uStack_92;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  
  iVar6 = (**(int (***)())(*param_1 + 0x40))();
  uVar3 = *(unsigned int *)(iVar6 + 0x14);
  iVar7 = (**(int (***)())(*param_1 + 0x40))(param_1);
  iVar6 = param_1[0xf];
  iVar8 = iVar6 + 0x30;
  uVar4 = *(unsigned int *)(iVar7 + 0x18);
  bVar1 = *(unsigned char *)(iVar6 + 10);
  uVar2 = *(unsigned short *)(iVar6 + 4);
  iVar10 = (unsigned int)*(unsigned short *)(iVar6 + 6) * 0x20 + iVar6 + 0x30;
  iVar6 = (**(int (***)())(*param_1 + 0x40))(param_1);
  lVar9 = (unsigned __int64)uVar2 - 1;
  iVar7 = (int)lVar9;
  bVar5 = (*(unsigned char *)(*(int *)(iVar6 + 0x30) + 0x12) & 8) != 0;
  if (-1 < iVar7) {
    do {
      if (((*(unsigned char *)(iVar10 + 0xf) & 1) != 0) || (bVar5)) {
        uStack_92 = (int)lVar9 == 0;
        uStack_93 = iVar7 == (int)lVar9;
        iStack_88 = iVar10 + 0x14;
        uStack_a0 = 3;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        stack_pair_b0.first = param_3;
        stack_pair_b0.second = uVar3;
        uStack_a8 = uVar4;
        piStack_a4 = param_1;
        iStack_9c = iVar8;
        iStack_98 = iVar10;
        uStack_94 = bVar5;
        (**(int (***)())*param_2)(param_2,&stack_pair_b0.first);
      }
      lVar9 = lVar9 + -1;
      iVar8 = iVar8 + 0x20;
      iVar10 = (unsigned int)bVar1 + iVar10;
    } while (-1 < lVar9);
  }
  return;
}

