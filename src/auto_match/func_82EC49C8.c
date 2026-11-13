extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82E9AB00();
extern int fn_82EAA320();
extern int fn_82EC4410();
extern int fn_82F26F98();
extern unsigned int iStack_e0;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


void fn_82EC49C8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                  ,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  unsigned __int64 uVar7;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int *in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  unsigned int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  unsigned int in_stack_000000b4;
  unsigned int in_stack_000000bc;
  unsigned int in_stack_000000c4;
  int in_stack_000000d4;
  int in_stack_000000dc;
  int *in_stack_000000e4;
  int *in_stack_000000ec;
  int *in_stack_000000f4;
  unsigned int *in_stack_000000fc;
  unsigned int *in_stack_00000104;
  int *in_stack_0000010c;
  int iStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  int *piStack_c4;
  unsigned int auStack_c0 [4];
  unsigned int auStack_b0 [44];
  
  iVar12 = 0;
  iVar11 = 0;
  lVar9 = 4;
  piVar13 = in_stack_00000064;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  do {
    uVar15 = *piVar13 + in_stack_0000006c;
    uVar14 = piVar13[1] + in_stack_00000074;
    if (((int)uVar15 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar15)) {
      if (((int)uVar14 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar14))
      {
        if (in_stack_000000d4 == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar14 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar15 >> 2) + (unsigned __int64)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_000000b4,0x10,uVar15 & 3,uVar14 & 3,
                     in_stack_000000d4,*(unsigned int *)(param_1 + 0x618));
        }
        auStack_c0[0] = uVar14;
        auStack_b0[0] = uVar15;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_d8,&uStack_dc,1);
        uVar4 = uStack_d8;
        uVar3 = uStack_dc;
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                            in_stack_000000bc,8,uStack_d8,uStack_dc,0);
        }
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),
                            in_stack_000000c4,8,uVar4,uVar3,0);
        }
        uStack_d4 = in_stack_000000ac;
        uStack_d0 = in_stack_000000a4;
        piStack_c4 = in_stack_00000064;
        uStack_cc = in_stack_00000084;
        uStack_c8 = in_stack_0000007c;
        fn_82EC4410(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack0000004c,
                      in_stack_00000054,in_stack_0000005c,in_stack_000000b4);
        iVar5 = fn_82E9AB00(param_1,uVar15 - in_stack_00000094,uVar14 - in_stack_0000009c,
                              in_stack_000000dc);
        iStack_e0 = iVar5 + iStack_e0;
        if (iStack_e0 < in_stack_0000008c) {
          iVar12 = *piVar13;
          iVar11 = piVar13[1];
          in_stack_0000008c = iStack_e0;
        }
      }
    }
    lVar9 = lVar9 + -1;
    piVar13 = piVar13 + 2;
  } while (lVar9 != 0);
  in_stack_00000064 = in_stack_00000064 + 8;
  uStack_d4 = 4;
  iVar10 = 0;
  iVar5 = 0;
  do {
    uVar15 = *in_stack_00000064 + iVar12 + in_stack_0000006c;
    uVar14 = in_stack_00000064[1] + iVar11 + in_stack_00000074;
    if (((int)uVar15 < *(int *)(param_1 + 0xa2c)) && (-*(int *)(param_1 + 0xa2c) <= (int)uVar15)) {
      if (((int)uVar14 < *(int *)(param_1 + 0xa30)) && (-*(int *)(param_1 + 0xa30) <= (int)uVar14))
      {
        if (in_stack_000000d4 == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    ((__int64)((int)uVar14 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
                     (__int64)((int)uVar15 >> 2) + (unsigned __int64)uStack00000034,
                     *(int *)(param_1 + 0x564),in_stack_000000b4,0x10,uVar15 & 3,uVar14 & 3,
                     in_stack_000000d4,*(unsigned int *)(param_1 + 0x618));
        }
        auStack_c0[0] = uVar14;
        auStack_b0[0] = uVar15;
        fn_82EAA320(param_1,auStack_b0,auStack_c0,&uStack_d8,&uStack_dc,1);
        uVar4 = uStack_d8;
        uVar3 = uStack_dc;
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                            in_stack_000000bc,8,uStack_d8,uStack_dc,0);
        }
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),
                            in_stack_000000c4,8,uVar4,uVar3,0);
        }
        piStack_c4 = in_stack_000000e4;
        fn_82EC4410(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack0000004c,
                      in_stack_00000054,in_stack_0000005c,in_stack_000000b4);
        uVar1 = (int)(uVar15 - in_stack_00000094) >> 0x1f;
        uVar2 = (int)(uVar14 - in_stack_0000009c) >> 0x1f;
        iVar8 = (uVar15 - in_stack_00000094 ^ uVar1) - uVar1;
        iVar6 = (uVar14 - in_stack_0000009c ^ uVar2) - uVar2;
        if ((iVar8 < 0x9f) && (iVar6 < 0x9f)) {
          iVar6 = *(int *)(*(int *)(&lbl_831898B8 + iVar6 * 4) * 4 + in_stack_000000dc) +
                  *(int *)(*(int *)(&lbl_831898B8 + iVar8 * 4) * 4 + in_stack_000000dc);
        }
        else {
          iVar6 = *(int *)(in_stack_000000dc + 0x14) << 1;
        }
        iStack_e0 = iVar6 + iStack_e0;
        if (iStack_e0 < in_stack_0000008c) {
          iVar5 = *in_stack_00000064;
          iVar10 = in_stack_00000064[1];
          in_stack_0000008c = iStack_e0;
        }
      }
    }
    uVar7 = (unsigned __int64)uStack_d4;
    in_stack_00000064 = in_stack_00000064 + 2;
    uStack_d4 = (unsigned int)(uVar7 - 1);
  } while (uVar7 - 1 != 0);
  *in_stack_000000ec = iVar5 + iVar12 + in_stack_0000006c;
  *in_stack_000000f4 = iVar10 + iVar11 + in_stack_00000074;
  *in_stack_000000fc = in_stack_0000007c;
  *in_stack_00000104 = in_stack_00000084;
  *in_stack_0000010c = in_stack_0000008c;
  return;
}

