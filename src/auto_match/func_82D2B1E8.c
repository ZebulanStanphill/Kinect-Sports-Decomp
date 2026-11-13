typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_82D2B1E8(int param_1,char param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar7;
  bool bVar11;
  __int64 lVar10;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  int iStack_68;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  int iStack_58;

  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  iStack_68 = -1;
  iVar8 = fn_82CE5410();
  fn_82CEAB00(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10),0);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  iStack_58 = -1;
  iVar8 = fn_82CE5410();
  fn_82CEAB00(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10),0);
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      if ((param_2 == '\0') || ((stack_pair_70.second & 0x7fffffff) == *(unsigned int *)(param_1 + 0x18))) {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_60.first);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_70.first);
        uVar7 = 0;
      }
      else {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_60.first);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_70.first);
        uVar7 = 1;
      }
      return uVar7;
    }
    uVar12 = 0;
    do {
      uVar3 = *(unsigned int *)((int)((uVar12 + 5 & 0xffffffff) << 2) + (int)puVar1);
      iVar8 = (int)((uVar12 + 2 & 0x3fffffff) << 2);
      uVar5 = uVar3 & 3;
      puVar6 = (unsigned int *)(uVar3 & 0xfffffffc);
      iVar9 = fn_82CEA220(&stack_pair_70.first,*(unsigned int *)(iVar8 + (int)puVar1));
      if (iStack_68 < iVar9) {
        bVar11 = false;
        puVar4 = *(unsigned int **)(iVar8 + (int)puVar1);
        for (puVar2 = *(unsigned int **)(param_1 + 0x14); puVar2 != (unsigned int *)0x0;
            puVar2 = (unsigned int *)*puVar2) {
          if (puVar4 == puVar2) {
            bVar11 = true;
            break;
          }
        }
        if (!bVar11) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_60.first);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_70.first);
          return 2;
        }
        iVar9 = fn_82CE5410();
        fn_82CEA160(&stack_pair_70.first,*(unsigned int *)(iVar9 + 0x10),puVar4,puVar4);
      }
      uVar13 = uVar12 + 1;
      if (*(int *)(iVar8 + (int)puVar1) ==
          *(int *)((int)(((-(unsigned __int64)(uVar12 != 2) & uVar13) + 2 & 0xffffffff) << 2) + (int)puVar1
                  )) {
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_60.first);
        iVar8 = fn_82CE5410();
        fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
        fn_82BA02A8(&stack_pair_70.first);
        return 7;
      }
      if ((uVar3 & 0xfffffffc) != 0) {
        if (puVar1 == puVar6) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_60.first);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_70.first);
          return 6;
        }
        iVar9 = fn_82CEA220(&stack_pair_60.first,puVar6);
        if (iStack_58 < iVar9) {
          bVar11 = false;
          for (puVar2 = *(unsigned int **)(param_1 + 0x2c); puVar2 != (unsigned int *)0x0;
              puVar2 = (unsigned int *)*puVar2) {
            if (puVar2 == puVar6) {
              bVar11 = true;
              break;
            }
          }
          if (!bVar11) {
            iVar8 = fn_82CE5410();
            fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
            fn_82BA02A8(&stack_pair_60.first);
            iVar8 = fn_82CE5410();
            fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
            fn_82BA02A8(&stack_pair_70.first);
            return 3;
          }
          iVar9 = fn_82CE5410();
          fn_82CEA160(&stack_pair_60.first,*(unsigned int *)(iVar9 + 0x10),puVar6,puVar6);
        }
        if ((*(int *)(iVar8 + (int)puVar1) != puVar6[(-(unsigned int)(uVar5 != 2) & uVar5 + 1) + 2]) ||
           (puVar6[uVar5 + 2] !=
            *(int *)((int)(((-(unsigned __int64)(uVar12 != 2) & uVar13) + 2 & 0xffffffff) << 2) +
                    (int)puVar1))) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_60.first);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_70.first);
          return 5;
        }
        lVar10 = 2;
        if ((uVar12 & 0xffffffff) != 0) {
          lVar10 = uVar12 - 1;
        }
        iVar8 = 2;
        if ((uVar3 & 3) != 0) {
          iVar8 = uVar5 - 1;
        }
        if (*(int *)((int)((lVar10 + 2U & 0xffffffff) << 2) + (int)puVar1) == puVar6[iVar8 + 2]) {
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_60.first);
          iVar8 = fn_82CE5410();
          fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar8 + 0x10));
          fn_82BA02A8(&stack_pair_70.first);
          return 4;
        }
      }
      uVar12 = uVar13;
    } while ((int)uVar13 < 3);
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}
