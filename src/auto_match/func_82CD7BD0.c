void fn_82CD7BD0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  __int64 lVar13;
  int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  
  uVar7 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar7 = (int)in_stack_0000006c >> 1;
  }
  lVar4 = (__int64)(param_6 >> 1);
  if (0 < lVar4) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar12 = 0;
      iVar5 = 0;
      if (0 < param_5 >> 1) {
        lVar13 = (__int64)(param_5 >> 1);
        iVar11 = iVar9;
        iVar10 = iVar8;
        do {
          puVar2 = (unsigned char *)(iVar11 + param_3);
          uVar1 = *(unsigned char *)(iVar9 + param_4 + iVar5);
          iVar5 = iVar5 + 1;
          iVar11 = iVar9 + iVar5;
          *(unsigned char *)(iVar10 + in_stack_0000007c) = *puVar2;
          *(unsigned char *)(iVar8 + in_stack_00000084 + iVar12) = uVar1;
          iVar12 = iVar12 + uVar7;
          iVar10 = iVar8 + iVar12;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar4 = lVar4 + -1;
      iVar9 = iVar9 + param_8;
      iVar8 = iVar8 + (in_stack_00000064 >> 1);
    } while (lVar4 != 0);
  }
  if (0 < param_6) {
    iVar9 = param_7 * 2;
    iVar8 = param_2 - param_7;
    lVar4 = (unsigned __int64)(param_6 - 1U >> 1) + 1;
    do {
      iVar5 = 0;
      iVar12 = 0;
      if (0 < param_5 + -0x10) {
        iVar10 = iVar8 + param_7;
        iVar11 = param_1 + in_stack_00000064;
        do {
          iVar6 = param_7 + param_2;
          uVar1 = *(unsigned char *)(iVar6 + iVar12);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 1);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 1);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 2);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 2);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 3);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 3);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 4);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 4);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 5);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 5);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 6);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 6);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 7);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 7);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 8);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 8);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 9);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 9);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 10);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 10);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 0xb);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 0xb);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 0xc);
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 0xc);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 0xd);
          *(unsigned char *)(iVar11 + iVar5) = *(unsigned char *)(iVar6 + iVar12 + 0xd);
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar12 + 0xe);
          iVar3 = iVar12 + 0xf;
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar12 + 0xe);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar6 + iVar3);
          iVar12 = iVar12 + 0x10;
          *(unsigned char *)(param_1 + iVar5) = *(unsigned char *)(iVar10 + iVar3);
          *(unsigned char *)(iVar11 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
        } while (iVar12 < param_5 + -0x10);
      }
      if (iVar12 < param_5) {
        iVar11 = param_5 - iVar12;
        do {
          iVar10 = param_7 + iVar12;
          puVar2 = (unsigned char *)(iVar8 + param_7 + iVar12);
          iVar12 = iVar12 + 1;
          uVar1 = *(unsigned char *)(iVar10 + param_2);
          *(unsigned char *)(param_1 + iVar5) = *puVar2;
          *(unsigned char *)(param_1 + in_stack_00000064 + iVar5) = uVar1;
          iVar5 = iVar5 + in_stack_0000006c;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      lVar4 = lVar4 + -1;
      param_7 = iVar9 + param_7;
      param_1 = in_stack_00000064 * 2 + param_1;
    } while (lVar4 != 0);
  }
  return;
}

