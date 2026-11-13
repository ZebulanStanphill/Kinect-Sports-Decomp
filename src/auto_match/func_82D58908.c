extern unsigned int *auStack_4a0;
extern int fn_82CFBB60();
extern int fn_82D6F1D8();
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;


void fn_82D58908(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned char *puVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned char *puVar12;
  unsigned int uStack00000024;
  unsigned int uStack00000044;
  int in_stack_00000054;
  unsigned char auStack_4a0 [1024];
  
  uStack00000024 = (unsigned int)param_3;
  *(unsigned char *)(param_1 + 0x1e20) = 1;
  uStack00000044 = (unsigned int)param_7;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    iVar10 = 0;
    do {
      puVar11 = (unsigned int *)(*(int *)(param_1 + 0x1e24) + iVar10);
      if (puVar11[1] == param_4) {
        fn_82D58908(param_1,param_2,param_3,*puVar11,param_5,param_6,param_7,param_8);
      }
      if (puVar11[1] == param_5) {
        fn_82D58908(param_1,param_2,param_3,param_4,*puVar11,param_6,param_7,param_8);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x1e28));
  }
  iVar10 = param_4 + 1;
  iVar6 = param_5 + 1;
  iVar9 = param_4;
  if (param_4 == -1) {
    iVar9 = 1;
    iVar10 = 0x20;
    in_stack_00000054 = in_stack_00000054 + 1;
  }
  iVar7 = param_5;
  if (param_5 == -1) {
    iVar7 = 1;
    iVar6 = 0x20;
    in_stack_00000054 = in_stack_00000054 + 1;
  }
  if (iVar9 < iVar10) {
    iVar10 = iVar10 - iVar9;
    param_2 = iVar9 * 0x20 + param_2;
    puVar8 = (unsigned char *)((iVar9 * 0x20 + iVar7) * 3 + param_8 + 1);
    do {
      if (iVar7 < iVar6) {
        uVar1 = (unsigned char)param_3;
        puVar12 = puVar8;
        iVar9 = iVar7;
        do {
          *(unsigned char *)(param_2 + iVar9) = uVar1;
          if (param_8 != 0) {
            if ((*(char *)(param_1 + 0x1e23) != '\0') && ((char)puVar12[1] < in_stack_00000054)) {
              uVar2 = fn_82D6F1D8(puVar12[-1]);
              uVar3 = fn_82D6F1D8(*puVar12);
              uVar4 = fn_82D6F1D8(param_4);
              uVar5 = fn_82D6F1D8(param_5);
              fn_82CFBB60(auStack_4a0,1000,0xffffffff82138c60,uVar4,uVar5,uVar2,uVar3);
              param_3 = (unsigned __int64)uStack00000024;
              param_7 = (unsigned __int64)uStack00000044;
            }
            puVar12[1] = (char)in_stack_00000054;
            puVar12[-1] = (char)param_6;
            *puVar12 = (char)param_7;
          }
          iVar9 = iVar9 + 1;
          puVar12 = puVar12 + 3;
        } while (iVar9 < iVar6);
      }
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 0x60;
      param_2 = param_2 + 0x20;
    } while (iVar10 != 0);
  }
  return;
}

