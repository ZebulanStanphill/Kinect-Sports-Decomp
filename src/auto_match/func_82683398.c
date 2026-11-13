extern unsigned int *auStack_161;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern int fn_82273CD8();
extern int fn_82681D00();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82682D30();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695DA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826B32D0();
extern int fn_82F66570();
extern int fn_82F68CC0();
extern unsigned int iStack_19c;
extern unsigned int iStack_1a0;


void fn_82683398(int param_1,unsigned __int64 param_2,int param_3,__int64 param_4,unsigned __int64 param_5)

{
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar1;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int *puVar11;
  int iStack_1a0;
  int iStack_19c;
  int aiStack_198 [2];
  unsigned char auStack_190 [16];
  unsigned char auStack_180 [16];
  unsigned char auStack_170 [15];
  unsigned char auStack_161 [353];
  
  iVar2 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
  if (param_3 == 0) {
    iVar3 = fn_826B32D0(iVar2,*(unsigned int *)(*(int *)(iVar2 + 0x78) + 0x2a0),
                              *(int *)(iVar2 + 0x78) + 0xc,0,0xffffffffffffffff);
    uVar1 = fn_826961B0(auStack_180);
    fn_82682D30(param_1,iVar2,uVar1,param_2);
    fn_82696330(auStack_180);
  }
  else {
    if (((param_5 & 0xffffffff) != 0) && (-1 < (int)(param_5 - 1))) {
      puVar11 = (unsigned int *)(iVar2 + 8);
      param_4 = (param_5 - 1 & 0xfffffff) * 0x10 + param_4;
      uVar9 = param_5;
      do {
        auStack_170[0] = 0;
        fn_82681D00(param_1,param_4,auStack_170);
        uVar8 = *puVar11;
        *puVar11 = uVar8 + 0x10;
        if (*(unsigned int *)(iVar2 + 0x10) <= uVar8 + 0x10) {
          fn_826826A8(puVar11);
        }
        if (*puVar11 != 0) {
          fn_82695DA0(*puVar11,auStack_170);
        }
        fn_82696330(auStack_170);
        uVar9 = uVar9 - 1;
        param_4 = param_4 + -0x10;
      } while (uVar9 != 0);
    }
    iVar3 = fn_82F66570(param_3,0x2e);
    if (iVar3 == 0) {
      aiStack_198[0] = fn_82694700((unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254,param_3);
      *(int *)(aiStack_198[0] + 8) = *(int *)(aiStack_198[0] + 8) + 1;
      iVar3 = fn_826B32D0(iVar2,*(unsigned int *)(*(int *)(iVar2 + 0x78) + 0x2a0),aiStack_198,
                                param_5,0xffffffffffffffff);
      lVar7 = (unsigned __int64)*(unsigned int *)(aiStack_198[0] + 8) - 1;
      *(int *)(aiStack_198[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_198[0]);
      }
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x78);
      puVar11 = (unsigned int *)(iVar2 + 0x78);
      iVar10 = *(int *)(iVar3 + 0x2a0);
      if (iVar10 != 0) {
        *(unsigned int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1U & 0x8fffffff;
      }
      iVar3 = *(int *)(iVar3 + 0x2a0);
      do {
        iVar4 = fn_82F66570(param_3,0x2e);
        iVar10 = param_3;
        iVar5 = iVar3;
        if (iVar4 == 0) break;
        iVar10 = iVar4 + 1;
        uVar8 = (iVar4 - param_3) + 1;
        if (0x100 < uVar8) {
          uVar8 = 0x100;
        }
        fn_82F68CC0(auStack_161 + 1,param_3,uVar8 - 1);
        auStack_190[0] = 0;
        auStack_161[uVar8] = 0;
        iStack_1a0 = fn_82694700((unsigned __int64)*puVar11 + 0x254,auStack_161 + 1);
        *(int *)(iStack_1a0 + 8) = *(int *)(iStack_1a0 + 8) + 1;
        cVar6 = (**(int (***)())(*(int *)(iVar3 + 0x10) + 0x2c))
                          (iVar3 + 0x10,puVar11,&iStack_1a0,auStack_190);
        if (cVar6 == '\0') {
          fn_82273CD8(param_2,0);
          lVar7 = (unsigned __int64)*(unsigned int *)(iStack_1a0 + 8) - 1;
          *(int *)(iStack_1a0 + 8) = (int)lVar7;
          if (lVar7 == 0) {
            fn_826944C8(iStack_1a0);
          }
          fn_82696330(auStack_190);
          goto LAB_82683764;
        }
        iVar5 = fn_82696958(auStack_190);
        if (iVar5 != 0) {
          uVar8 = *(int *)(iVar5 + 8) + 1;
          *(unsigned int *)(iVar5 + 8) = uVar8 & 0x8fffffff;
          *(unsigned int *)(iVar5 + 8) = (uVar8 & 0x8fffffff) + 1 & 0x8fffffff;
        }
        fn_826824B0(iVar3);
        lVar7 = (unsigned __int64)*(unsigned int *)(iStack_1a0 + 8) - 1;
        *(int *)(iStack_1a0 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(iStack_1a0);
        }
        if (iVar5 != 0) {
          fn_826824B0(iVar5);
        }
        fn_82696330(auStack_190);
        param_3 = iVar10;
        iVar3 = iVar5;
      } while (iVar10 != 0);
      iStack_19c = fn_82694700((unsigned __int64)*puVar11 + 0x254,iVar10);
      *(int *)(iStack_19c + 8) = *(int *)(iStack_19c + 8) + 1;
      iVar3 = fn_826B32D0(iVar2,iVar5,&iStack_19c,param_5,0xffffffffffffffff);
      lVar7 = (unsigned __int64)*(unsigned int *)(iStack_19c + 8) - 1;
      *(int *)(iStack_19c + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_19c);
      }
      if (iVar5 != 0) {
        fn_826824B0(iVar5);
      }
    }
    if (iVar3 == 0) {
      fn_82273CD8(param_2,0);
    }
    else {
      uVar1 = fn_826961B0(auStack_180,iVar3);
      fn_82682D30(param_1,iVar2,uVar1,param_2);
      fn_82696330(auStack_180);
    }
    if ((param_5 & 0xffffffff) != 0) {
      fn_82683270(iVar2 + 8,param_5);
    }
  }
  if (iVar3 != 0) {
LAB_82683764:
    fn_826824B0(iVar3);
  }
  return;
}

