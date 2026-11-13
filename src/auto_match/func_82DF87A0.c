extern int fn_82CE4118();
extern int fn_82D7C120();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DF7D90();
extern int fn_82DF8F60();


void fn_82DF87A0(char *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int *piVar9;
  
  *(int *)(param_3 + 0x94) = *(int *)(param_3 + 0x94) + 1;
  piVar9 = (int *)(param_2 + 0x44);
  uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 0x48) - 1;
  if (-1 < (__int64)uVar7) {
    lVar8 = (uVar7 & 0x3fffffff) << 2;
    do {
      iVar1 = (int)lVar8;
      iVar6 = *(int *)(*piVar9 + iVar1);
      if (*(char *)(iVar6 + 0x18) == '\0') {
        uVar2 = (unsigned __int64)*(unsigned int *)(iVar6 + 8);
        uVar3 = (unsigned __int64)*(unsigned int *)(iVar6 + 0xc);
      }
      else {
        uVar2 = (**(int (***)())(param_1 + 4))(*(unsigned int *)(iVar6 + 0x10));
        uVar3 = (**(int (***)())(param_1 + 4))(*(unsigned int *)(iVar6 + 0x14));
      }
      if (((uVar2 & 0xffffffff) != 0) && ((uVar3 & 0xffffffff) != 0)) {
        iVar5 = (**(int (***)())(*param_4 + 4))(param_4,uVar2);
        if (((iVar5 != 0) || (iVar5 = (**(int (***)())(*param_4 + 4))(param_4,uVar3), iVar5 != 0)) &&
           (uVar4 = fn_82D7C120(uVar2 + 0x10,uVar3 + 0x10), (uVar4 & 0xffffffff) != 0)) {
          if (*(int *)(iVar6 + 0x10c) != 0x103) {
            fn_82DF8F60(*(unsigned int *)(param_3 + 0x78),iVar6);
          }
          iVar6 = fn_82DF7D90(param_1,iVar6,uVar2,uVar3,*(unsigned int *)(param_3 + 0x78),uVar4);
          if ((*param_1 != '\0') && (iVar6 != 0)) {
            fn_82CE4118(*(unsigned int *)(*piVar9 + iVar1));
            iVar6 = *(int *)(param_2 + 0x48) + -1;
            *(int *)(param_2 + 0x48) = iVar6;
            if (iVar6 != (int)uVar7) {
              *(unsigned int *)(iVar1 + *piVar9) = *(unsigned int *)(iVar6 * 4 + *piVar9);
            }
          }
        }
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (__int64)uVar7);
  }
  lVar8 = (unsigned __int64)*(unsigned int *)(param_3 + 0x94) - 1;
  *(int *)(param_3 + 0x94) = (int)lVar8;
  if ((lVar8 == 0) && (*(char *)(param_3 + 0x9c) == '\0')) {
    if (*(int *)(param_3 + 0x8c) != 0) {
      fn_82D80C18(param_3);
    }
    if ((*(int *)(param_3 + 0xa4) == 1) && (*(int *)(param_3 + 0x90) != 0)) {
      fn_82D80C30(param_3);
    }
  }
  return;
}

