extern int fn_82CE4118();
extern int fn_82CFC058();
extern int fn_82D8E878();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DBBDA8(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  __int64 lVar11;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar9 = *(int **)(param_1 + 0x30);
  *(unsigned char *)(iVar2 + 0x25) = *(unsigned char *)(iVar2 + 0x25) & 0x3f | 0x40;
  stack_pair_40.first = (unsigned int)*(unsigned short *)(piVar9 + 5);
  uStack_38 = (unsigned int)*(unsigned short *)((int)piVar9 + 0x16);
  uStack_34 = (unsigned int)*(unsigned short *)(piVar9 + 6);
  stack_pair_40.second = stack_pair_40.first;
  fn_82D8E878(*(unsigned int *)(param_1 + 8),param_1,&stack_pair_40.first);
  iVar10 = 0;
  *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
  *(unsigned int *)(param_1 + 8) = 0;
  uVar1 = *(unsigned short *)((int)piVar9 + 0x22);
  iVar3 = piVar9[2 - (unsigned int)*(unsigned char *)((int)piVar9 + 0x1a)];
  iVar2 = *(int *)(*(int *)(iVar3 + 0xb8) * 4 + *(int *)(iVar3 + 0xb4) + -4);
  *(int *)((unsigned int)uVar1 * 4 + *(int *)(iVar3 + 0xb4)) = iVar2;
  *(int *)(iVar3 + 0xb8) = *(int *)(iVar3 + 0xb8) + -1;
  *(unsigned short *)(*(int *)(iVar2 + 0x30) + 0x22) = uVar1;
  uVar4 = (unsigned __int64)(unsigned int)piVar9[7];
  iVar2 = piVar9[*(unsigned char *)((int)piVar9 + 0x1a) + 1];
  if (uVar4 != 0) {
    lVar5 = *(unsigned short *)(piVar9 + 8) + uVar4;
    iVar10 = -(unsigned int)*(unsigned short *)(piVar9 + 8);
    fn_82CFC058(uVar4,lVar5,
                    ((unsigned __int64)*(unsigned int *)(iVar2 + 0xc4) - lVar5) +
                    (unsigned __int64)*(unsigned int *)(iVar2 + 0xc0));
    *(unsigned int *)(iVar2 + 0xc4) = *(int *)(iVar2 + 0xc4) - (unsigned int)*(unsigned short *)(piVar9 + 8);
    piVar9[7] = 0;
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  piVar7 = (int *)((unsigned int)*(unsigned short *)(iVar2 + 0xb0) * 0x30 + *(int *)(iVar2 + 0xac) + -0x30);
  if (piVar9 < piVar7) {
    lVar5 = (unsigned __int64)(unsigned int)((int)piVar7 + (-1 - (int)piVar9)) / 0x30 + 1;
    do {
      piVar6 = piVar9 + -2;
      piVar7 = piVar9 + 10;
      lVar11 = 6;
      do {
        piVar7 = piVar7 + 2;
        piVar6 = piVar6 + 2;
        *(unsigned __int64 *)piVar6 = *(unsigned __int64 *)piVar7;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      *(int **)(*piVar9 + 0x30) = piVar9;
      iVar3 = piVar9[7];
      iVar8 = iVar3 + iVar10;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      lVar5 = lVar5 + -1;
      piVar9[7] = iVar8;
      piVar9 = piVar9 + 0xc;
    } while (lVar5 != 0);
  }
  *(short *)(iVar2 + 0xb0) = *(short *)(iVar2 + 0xb0) + -1;
  fn_82CE4118(param_1);
  return;
}

