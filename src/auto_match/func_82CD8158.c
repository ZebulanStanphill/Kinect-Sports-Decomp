void fn_82CD8158(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  __int64 lVar13;
  int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_0000007c;
  
  uVar11 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar11 = (int)in_stack_0000006c >> 1;
  }
  lVar5 = (__int64)(param_6 >> 1);
  if (0 < lVar5) {
    iVar9 = 0;
    do {
      iVar12 = 0;
      iVar6 = 0;
      if (0 < param_5 >> 1) {
        lVar13 = (__int64)(param_5 >> 1);
        iVar10 = iVar9;
        do {
          puVar2 = (unsigned char *)(iVar10 + param_3);
          uVar1 = *(unsigned char *)(iVar9 + param_4 + iVar6);
          iVar6 = iVar6 + 1;
          iVar10 = iVar9 + iVar6;
          *(unsigned char *)(in_stack_0000007c + iVar12) = *puVar2;
          *(unsigned char *)(in_stack_0000007c + 1 + iVar12) = uVar1;
          iVar12 = iVar12 + uVar11 * 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      lVar5 = lVar5 + -1;
      iVar9 = iVar9 + param_8;
      in_stack_0000007c = in_stack_0000007c + (in_stack_00000064 >> 1) * 2;
    } while (lVar5 != 0);
  }
  if (0 < param_6) {
    iVar6 = param_7 * 2;
    iVar9 = param_2 - param_7;
    lVar5 = (unsigned __int64)(param_6 - 1U >> 1) + 1;
    do {
      iVar12 = 0;
      iVar10 = 0;
      if (0 < param_5 + -0x10) {
        iVar4 = iVar9 + param_7;
        iVar8 = param_1 + in_stack_00000064;
        do {
          iVar7 = param_7 + param_2;
          uVar1 = *(unsigned char *)(iVar7 + iVar10);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 1);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 1);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 2);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 2);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 3);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 3);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 4);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 4);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 5);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 5);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 6);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 6);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 7);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 7);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 8);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 8);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 9);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 9);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 10);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 10);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 0xb);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 0xb);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 0xc);
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 0xc);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 0xd);
          *(unsigned char *)(iVar8 + iVar12) = *(unsigned char *)(iVar7 + iVar10 + 0xd);
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar10 + 0xe);
          iVar3 = iVar10 + 0xf;
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar10 + 0xe);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          uVar1 = *(unsigned char *)(iVar7 + iVar3);
          iVar10 = iVar10 + 0x10;
          *(unsigned char *)(param_1 + iVar12) = *(unsigned char *)(iVar4 + iVar3);
          *(unsigned char *)(iVar8 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
        } while (iVar10 < param_5 + -0x10);
      }
      if (iVar10 < param_5) {
        iVar8 = param_5 - iVar10;
        do {
          iVar4 = param_7 + iVar10;
          puVar2 = (unsigned char *)(iVar9 + param_7 + iVar10);
          iVar10 = iVar10 + 1;
          uVar1 = *(unsigned char *)(iVar4 + param_2);
          *(unsigned char *)(param_1 + iVar12) = *puVar2;
          *(unsigned char *)(param_1 + in_stack_00000064 + iVar12) = uVar1;
          iVar12 = iVar12 + in_stack_0000006c;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar5 = lVar5 + -1;
      param_7 = iVar6 + param_7;
      param_1 = in_stack_00000064 * 2 + param_1;
    } while (lVar5 != 0);
  }
  return;
}

