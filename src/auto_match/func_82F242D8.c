typedef unsigned char bool;
extern int fn_82F21298();
extern int fn_82F214A0();


void fn_82F242D8(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,unsigned __int64 param_5
                  ,unsigned __int64 param_6,int param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  uVar1 = *(unsigned int *)(param_1 + 0x588);
  if (*(int *)(param_1 + 0x8e0) == 0) {
    if (param_7 == *(int *)(param_1 + 0x658) + -1) {
      uVar5 = (unsigned __int64)in_stack_00000064 - 1;
    }
    else {
      uVar5 = (unsigned __int64)in_stack_00000064;
    }
    iVar6 = (int)uVar5;
    uVar4 = (unsigned __int64)in_stack_00000054;
    bVar3 = iVar6 == 0;
    if (param_7 == 0) {
      fn_82F21298(param_1,param_2,*(unsigned int *)(param_1 + 0x564),uVar1,uVar4,1,bVar3);
    }
    uVar7 = (unsigned __int64)in_stack_0000005c;
    param_2 = (__int64)*(int *)(param_1 + 0x57c) * (__int64)(int)in_stack_0000005c + param_2;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        fn_82F21298(param_1,param_2,*(unsigned int *)(param_1 + 0x564),uVar1,uVar4,0,0);
        lVar14 = lVar14 + -1;
        param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x57c) + param_2;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      fn_82F21298(param_1,param_2,*(unsigned int *)(param_1 + 0x564),uVar1,uVar4,0,1);
    }
    if (param_7 == 0) {
      fn_82F214A0(param_1,param_3,*(unsigned int *)(param_1 + 0x568),uVar1,uVar4,1,bVar3);
    }
    param_3 = (__int64)*(int *)(param_1 + 0x580) * (__int64)(int)in_stack_0000005c + param_3;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        uVar2 = *(unsigned int *)(param_1 + 0x568);
        lVar12 = ((unsigned __int64)uVar2 & 0x1fffffff) * 8 + param_3;
        (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar12 = lVar12 + 4;
        lVar11 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + param_3 + 3;
        lVar9 = uVar4 - 1;
        if (0 < (int)(uVar4 - 1)) {
          do {
            (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,8);
            (**(int (***)())(param_1 + 0x870))(lVar11,uVar2,uVar1,8);
            lVar9 = lVar9 + -1;
            lVar12 = lVar12 + 8;
            lVar11 = lVar11 + 8;
          } while (lVar9 != 0);
        }
        (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar14 = lVar14 + -1;
        param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x580) + param_3;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      uVar2 = *(unsigned int *)(param_1 + 0x568);
      lVar14 = uVar4 - 1;
      lVar9 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + param_3 + 3;
      if (0 < lVar14) {
        do {
          (**(int (***)())(param_1 + 0x870))(lVar9,uVar2,uVar1,4);
          lVar14 = lVar14 + -1;
          lVar9 = lVar9 + 8;
        } while (lVar14 != 0);
      }
    }
    if (param_7 == 0) {
      fn_82F214A0(param_1,param_4,*(unsigned int *)(param_1 + 0x568),uVar1,uVar4,1,bVar3);
    }
    param_4 = (__int64)*(int *)(param_1 + 0x580) * (__int64)(int)in_stack_0000005c + param_4;
    if ((int)in_stack_0000005c < iVar6) {
      lVar14 = uVar5 - uVar7;
      do {
        uVar2 = *(unsigned int *)(param_1 + 0x568);
        lVar12 = ((unsigned __int64)uVar2 & 0x1fffffff) * 8 + param_4;
        (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar12 = lVar12 + 4;
        lVar11 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + param_4 + 3;
        lVar9 = uVar4 - 1;
        if (0 < (int)(uVar4 - 1)) {
          do {
            (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,8);
            (**(int (***)())(param_1 + 0x870))(lVar11,uVar2,uVar1,8);
            lVar9 = lVar9 + -1;
            lVar12 = lVar12 + 8;
            lVar11 = lVar11 + 8;
          } while (lVar9 != 0);
        }
        (**(int (***)())(param_1 + 0x86c))(lVar12,uVar2,uVar1,4);
        lVar14 = lVar14 + -1;
        param_4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x580) + param_4;
      } while (lVar14 != 0);
    }
    if ((param_7 == *(int *)(param_1 + 0x658) + -1) && (!bVar3)) {
      uVar2 = *(unsigned int *)(param_1 + 0x568);
      lVar14 = uVar4 - 1;
      lVar9 = ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + param_4 + 3;
      if (0 < lVar14) {
        do {
          (**(int (***)())(param_1 + 0x870))(lVar9,uVar2,uVar1,4);
          lVar14 = lVar14 + -1;
          lVar9 = lVar9 + 8;
        } while (lVar14 != 0);
      }
    }
  }
  else {
    iVar6 = in_stack_0000005c - 1;
    if (iVar6 < (int)in_stack_00000064) {
      iVar8 = iVar6 * 4;
      do {
        if ((iVar6 == 0) || (uVar10 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + iVar8) != 0)) {
          uVar10 = 1;
        }
        if (((param_7 == *(int *)(param_1 + 0x658) + -1) && (in_stack_0000005c == in_stack_00000064)
            ) || (uVar13 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + iVar8 + 4) != 0)) {
          uVar13 = 1;
        }
        fn_82F21298(param_1,param_2,*(unsigned int *)(param_1 + 0x564),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        fn_82F214A0(param_1,param_3,*(unsigned int *)(param_1 + 0x568),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        fn_82F214A0(param_1,param_4,*(unsigned int *)(param_1 + 0x568),uVar1,in_stack_00000054,
                        uVar10,uVar13);
        iVar6 = iVar6 + 1;
        in_stack_0000005c = in_stack_0000005c + 1;
        iVar8 = iVar8 + 4;
        param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x580) + param_3;
        param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x57c) + param_2;
        param_4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x580) + param_4;
      } while (iVar6 < (int)in_stack_00000064);
    }
  }
  return;
}

