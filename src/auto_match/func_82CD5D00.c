void fn_82CD5D00(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, unsigned int param_7, unsigned int param_8, unsigned int in_stack_00000054)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;

  
  iVar7 = param_6 * 0x10000 + ((int)param_8 >> 4) + (unsigned int)((int)param_8 < 0 && (param_8 & 0xf) != 0)
          + -0x8000;
  iVar9 = param_5 * 0x10000 + ((int)param_7 >> 4) + (unsigned int)((int)param_7 < 0 && (param_7 & 0xf) != 0)
          + -0x8000;
  iVar8 = 0x8000;
  if (0x8000 < iVar7) {
    do {
      iVar2 = (iVar8 >> (in_stack_00000054 & 0x3f)) * param_3 + param_2;
      iVar3 = 0x8000;
      if (0x8000 < iVar9) {
        puVar10 = (unsigned int *)(param_1 + 4);
        do {
          iVar1 = iVar3 >> (in_stack_00000054 & 0x3f);
          iVar4 = iVar3 + param_7;
          iVar5 = iVar4 + param_7;
          iVar6 = iVar5 + param_7;
          iVar3 = iVar6 + param_7;
          puVar10 = puVar10 + -1;
          *puVar10 = (unsigned int)*(unsigned char *)((iVar6 >> (in_stack_00000054 & 0x3f)) + iVar2) |
                     (unsigned int)*(unsigned char *)((iVar5 >> (in_stack_00000054 & 0x3f)) + iVar2) << 8 |
                     (unsigned int)*(unsigned char *)((iVar4 >> (in_stack_00000054 & 0x3f)) + iVar2) << 0x10 |
                     (unsigned int)*(unsigned char *)(iVar1 + iVar2) << 0x18;
        } while (iVar3 < iVar9);
      }
      iVar8 = iVar8 + param_8;
      param_1 = param_1 + param_4;
    } while (iVar8 < iVar7);
  }
  return;
}

