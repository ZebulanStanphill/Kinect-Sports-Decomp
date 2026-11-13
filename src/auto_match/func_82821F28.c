extern int fn_8281FDF0();
extern int fn_8281FE80();


void fn_82821F28(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  
  cVar6 = fn_8281FDF0(param_1,0xffffffff8201ebd4);
  if ((param_3 & 0xffffffff) != 0) {
    puVar9 = (unsigned int *)(param_2 + 8);
    do {
      uVar1 = puVar9[-1];
      iVar8 = uVar1 * 0xe;
      if (*(char *)(*(int *)(param_1 + 0x44) + iVar8 + -2) == cVar6) {
        param_4 = param_4 + *puVar9;
      }
      else {
        uVar2 = puVar9[-2];
        iVar4 = fn_8281FE80(param_1,uVar2);
        iVar5 = fn_8281FE80(param_1,uVar1);
        uVar7 = 0;
        uVar1 = *(unsigned int *)(uVar2 * 0xe + *(int *)(param_1 + 0x44) + -6);
        uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x44) + iVar8 + -6);
        if (*puVar9 != 0) {
          do {
            uVar3 = *param_4;
            if ((uVar3 < uVar1) && (*(unsigned int *)(uVar3 + iVar4) < uVar2)) {
              *(unsigned int *)(uVar3 + iVar4) = *(unsigned int *)(uVar3 + iVar4) + iVar5;
            }
            uVar7 = uVar7 + 1;
            param_4 = param_4 + 1;
          } while (uVar7 < *puVar9);
        }
      }
      param_3 = param_3 - 1;
      puVar9 = puVar9 + 3;
    } while (param_3 != 0);
  }
  return;
}

