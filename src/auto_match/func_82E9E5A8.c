extern int fn_82E9AB00();
extern int fn_82E9E258();
extern unsigned int lbl_831898B8;
extern unsigned int stack0x0000004c;
extern unsigned int stack0x00000054;
extern unsigned int uStack00000024;
extern unsigned int uStack0000004c;
extern unsigned int uStack_b0;


void fn_82E9E5A8(int param_1, unsigned __int64 param_2, unsigned int param_3, unsigned __int64 param_4, int *param_5, int param_6, int param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned int in_stack_00000084, unsigned __int64 unused_arg_16, int in_stack_00000094, int in_stack_0000009c, unsigned __int64 unused_arg_19, unsigned __int64 unused_arg_20, unsigned __int64 unused_arg_21, unsigned __int64 unused_arg_22, unsigned __int64 unused_arg_23, unsigned __int64 unused_arg_24, unsigned int in_stack_000000d4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar15;
  int *piVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uStack00000024;
  unsigned int uStack0000004c;




  unsigned int *in_stack_00000074;
  unsigned int *in_stack_0000007c;

  unsigned int *in_stack_0000008c;


  unsigned char *in_stack_000000a4;
  int *in_stack_000000ac;
  int *in_stack_000000b4;
  unsigned int *in_stack_000000bc;
  unsigned int *in_stack_000000c4;
  unsigned int *in_stack_000000cc;

  unsigned int uStack_b0;
  unsigned int *puStack_ac;
  unsigned char *puStack_a8;
  unsigned int *puStack_a4;
  unsigned int *puStack_a0;
  unsigned int *puStack_9c;
  
  iVar5 = in_stack_0000009c;
  iVar4 = in_stack_00000094;
  uVar3 = in_stack_00000084;
  uVar15 = (unsigned __int64)in_stack_0000005c;
  iVar14 = 0;
  iVar12 = 0;
  lVar10 = 4;
  uStack00000024 = param_3;
  uStack0000004c = param_8;
  piVar16 = param_5;
  do {
    uVar18 = *piVar16 + param_6;
    uVar17 = piVar16[1] + param_7;
    if (((int)uVar18 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar18)) {
      if (((int)uVar17 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar17))
      {
        if (iVar4 == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar17 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar18 >> 2) + (unsigned __int64)uStack00000024,
                     *(int *)(param_1 + 0x564),uVar3,0x10,uVar18 & 3,uVar17 & 3,iVar4,
                     *(unsigned int *)(param_1 + 0x618));
        }
        puStack_ac = &stack0x00000054;
        puStack_a8 = (unsigned char *)&stack0x0000004c;
        puStack_a4 = in_stack_0000008c;
        puStack_a0 = in_stack_0000007c;
        puStack_9c = in_stack_00000074;
        fn_82E9E258(param_1,param_2,param_4,uVar3,param_5,uStack0000004c,in_stack_00000054,uVar15)
        ;
        lVar6 = fn_82E9AB00(param_1,uVar18 - in_stack_00000064,uVar17 - in_stack_0000006c,iVar5);
        uVar7 = (unsigned __int64)uStack_b0;
        uStack_b0 = (unsigned int)(lVar6 + uVar7);
        if ((int)uStack_b0 < (int)uVar15) {
          iVar14 = *piVar16;
          iVar12 = piVar16[1];
          uVar15 = lVar6 + uVar7;
        }
      }
    }
    lVar10 = lVar10 + -1;
    piVar16 = piVar16 + 2;
  } while (lVar10 != 0);
  iVar11 = 0;
  iVar13 = 0;
  piVar16 = param_5 + 8;
  lVar10 = 4;
  do {
    uVar18 = *piVar16 + iVar14 + param_6;
    uVar17 = piVar16[1] + iVar12 + param_7;
    if (((int)uVar18 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar18)) {
      if (((int)uVar17 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar17))
      {
        if (iVar4 == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar17 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar18 >> 2) + (unsigned __int64)uStack00000024,
                     *(int *)(param_1 + 0x564),uVar3,0x10,uVar18 & 3,uVar17 & 3,iVar4,
                     *(unsigned int *)(param_1 + 0x618));
        }
        puStack_9c = &uStack_b0;
        puStack_a0 = &stack0x00000054;
        puStack_a4 = &stack0x0000004c;
        puStack_a8 = in_stack_000000a4;
        puStack_ac = in_stack_0000008c;
        fn_82E9E258(param_1,param_2,param_4,uVar3,param_5,uStack0000004c,in_stack_00000054,uVar15)
        ;
        uVar1 = (int)(uVar18 - in_stack_00000064) >> 0x1f;
        uVar2 = (int)(uVar17 - in_stack_0000006c) >> 0x1f;
        iVar9 = (uVar18 - in_stack_00000064 ^ uVar1) - uVar1;
        iVar8 = (uVar17 - in_stack_0000006c ^ uVar2) - uVar2;
        if ((iVar9 < 0x9f) && (iVar8 < 0x9f)) {
          lVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + iVar5) +
                  (unsigned __int64)*(unsigned int *)(*(int *)(&lbl_831898B8 + iVar9 * 4) * 4 + iVar5);
        }
        else {
          lVar6 = ((unsigned __int64)*(unsigned int *)(iVar5 + 0x14) & 0x7fffffff) << 1;
        }
        uVar7 = (unsigned __int64)uStack_b0;
        uStack_b0 = (unsigned int)(lVar6 + uVar7);
        if ((int)uStack_b0 < (int)uVar15) {
          iVar13 = *piVar16;
          iVar11 = piVar16[1];
          uVar15 = lVar6 + uVar7;
        }
      }
    }
    lVar10 = lVar10 + -1;
    piVar16 = piVar16 + 2;
  } while (lVar10 != 0);
  *in_stack_000000ac = iVar13 + iVar14 + param_6;
  *in_stack_000000b4 = iVar11 + iVar12 + param_7;
  *in_stack_000000bc = uStack0000004c;
  *in_stack_000000c4 = in_stack_00000054;
  *in_stack_000000cc = (int)uVar15;
  return;
}

