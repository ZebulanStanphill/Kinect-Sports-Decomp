extern int fn_82E9AB00();
extern unsigned int lbl_831898B8;
extern unsigned int uStack00000024;


void fn_82E9E258(int param_1, unsigned __int64 param_2, unsigned int param_3, unsigned __int64 param_4, int *param_5, int param_6, int param_7, int param_8, int in_stack_00000054, int in_stack_0000005c, unsigned int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074, int in_stack_0000007c)

{
  int (**pcVar1)();
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uStack00000024;






  int *in_stack_00000084;
  int *in_stack_0000008c;
  int *in_stack_00000094;
  
  pcVar1 = *(int (***)())(in_stack_0000007c + 0xc);
  iVar11 = 0;
  iVar10 = 0;
  lVar9 = 4;
  piVar12 = param_5;
  uStack00000024 = param_3;
  do {
    uVar14 = *piVar12 + param_6;
    uVar13 = piVar12[1] + param_7;
    if (((int)uVar14 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar14)) {
      if (((int)uVar13 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar13))
      {
        if (in_stack_0000006c == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar13 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar14 >> 2) + (unsigned __int64)uStack00000024,
                     *(int *)(param_1 + 0x564),in_stack_00000064,0x10,uVar14 & 3,uVar13 & 3,
                     in_stack_0000006c,*(unsigned int *)(param_1 + 0x618));
        }
        (**(int (***)())(param_1 + 0xb1c))
                  (in_stack_00000064,0x10,param_4,0x10,in_stack_00000064,0x10,0x10,0x10);
        iVar4 = (*pcVar1)(param_2,0x10,in_stack_00000064,0x10,0x10);
        iVar5 = fn_82E9AB00(param_1,uVar14 - in_stack_00000054,uVar13 - in_stack_0000005c,
                              in_stack_00000074);
        if (iVar5 + iVar4 < param_8) {
          iVar11 = *piVar12;
          iVar10 = piVar12[1];
          param_8 = iVar5 + iVar4;
        }
      }
    }
    lVar9 = lVar9 + -1;
    piVar12 = piVar12 + 2;
  } while (lVar9 != 0);
  param_5 = param_5 + 8;
  iVar5 = 0;
  iVar4 = 0;
  lVar9 = 4;
  do {
    uVar14 = *param_5 + iVar11 + param_6;
    uVar13 = param_5[1] + iVar10 + param_7;
    if (((int)uVar14 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar14)) {
      if (((int)uVar13 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar13))
      {
        if (in_stack_0000006c == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar13 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar14 >> 2) + (unsigned __int64)uStack00000024,
                     *(int *)(param_1 + 0x564),in_stack_00000064,0x10,uVar14 & 3,uVar13 & 3,
                     in_stack_0000006c,*(unsigned int *)(param_1 + 0x618));
        }
        (**(int (***)())(param_1 + 0xb1c))
                  (in_stack_00000064,0x10,param_4,0x10,in_stack_00000064,0x10,0x10,0x10);
        iVar6 = (*pcVar1)(param_2,0x10,in_stack_00000064,0x10,0x10);
        uVar2 = (int)(uVar14 - in_stack_00000054) >> 0x1f;
        uVar3 = (int)(uVar13 - in_stack_0000005c) >> 0x1f;
        iVar8 = (uVar14 - in_stack_00000054 ^ uVar2) - uVar2;
        iVar7 = (uVar13 - in_stack_0000005c ^ uVar3) - uVar3;
        if ((iVar8 < 0x9f) && (iVar7 < 0x9f)) {
          iVar7 = *(int *)(*(int *)(&lbl_831898B8 + iVar7 * 4) * 4 + in_stack_00000074) +
                  *(int *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + in_stack_00000074);
        }
        else {
          iVar7 = *(int *)(in_stack_00000074 + 0x14) << 1;
        }
        if (iVar7 + iVar6 < param_8) {
          iVar4 = *param_5;
          iVar5 = param_5[1];
          param_8 = iVar7 + iVar6;
        }
      }
    }
    lVar9 = lVar9 + -1;
    param_5 = param_5 + 2;
  } while (lVar9 != 0);
  *in_stack_00000084 = iVar4 + iVar11 + param_6;
  *in_stack_0000008c = iVar5 + iVar10 + param_7;
  *in_stack_00000094 = param_8;
  return;
}

