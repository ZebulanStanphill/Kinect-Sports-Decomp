typedef unsigned char bool;
#define true 1
extern int fn_82ED5D40();
extern int fn_82ED5DB8();
extern int fn_82ED5EB0();
extern int fn_82ED5FA8();
extern int fn_82F07E00();
extern int fn_82F1C3A0();
extern unsigned int uStack0000001c;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;


void fn_82ED61A8(int param_1, unsigned int param_2, unsigned int *param_3, unsigned __int64 param_4, unsigned int param_5, unsigned int param_6, unsigned __int64 param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned __int64 unused_arg_12, unsigned int in_stack_00000074, int in_stack_0000007c, unsigned int in_stack_00000084, int in_stack_0000008c, unsigned int in_stack_00000094, int in_stack_0000009c, unsigned int in_stack_000000a4, int in_stack_000000ac, unsigned int in_stack_000000b4, unsigned int in_stack_000000bc, unsigned int in_stack_000000c4)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned short *puVar14;
  unsigned __int64 uVar15;
  unsigned int uStack0000001c;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack0000004c;



  unsigned short *in_stack_0000006c;











  unsigned int *puStack_ac;
  
  uVar12 = (unsigned __int64)in_stack_00000074;
  uVar11 = (unsigned __int64)in_stack_00000064;
  uVar15 = 0;
  uStack0000002c = (unsigned int)param_4;
  lVar9 = in_stack_000000a4 - uVar12;
  uVar10 = (unsigned __int64)in_stack_000000bc;
  lVar13 = (unsigned __int64)param_3[0x18] * 0x34 + (unsigned __int64)*(unsigned int *)(param_1 + 0x6d24);
  lVar8 = in_stack_00000094 - uVar12;
  puVar14 = in_stack_0000006c;
  uStack0000001c = param_2;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  puStack_ac = param_3;
  while( true ) {
    puStack_ac = puStack_ac + 1;
    uVar7 = (unsigned __int64)in_stack_000000c4;
    if (in_stack_000000c4 == 3) {
      uVar7 = (unsigned __int64)*(unsigned char *)param_3 & 7;
    }
    iVar2 = *(int *)(param_1 + 0x564);
    iVar4 = (int)uVar15;
    lVar6 = (__int64)(int)((unsigned int)((uVar15 & 0xffffffff) << 2) & 8) * (__int64)iVar2 +
            (uVar15 & 1) * 8 + (unsigned __int64)uStack0000003c;
    if (*(unsigned char *)((int)param_3 + iVar4 + 0x4a) == 0) {
      if (*puStack_ac != 0) {
        if (in_stack_000000c4 == 3) {
          if ((*param_3 & 0x10000000) == 0) {
            uVar7 = (unsigned __int64)(*param_3 >> 0x18) & 7;
          }
          else {
            uVar7 = (unsigned __int64)(char)*(unsigned char *)((int)param_3 + iVar4 + 0x38);
          }
        }
        if ((uVar7 & 0xffffffff) < 5) {
          bVar1 = (int)uVar7 != 0;
          if (uVar7 == 1 && bVar1) {
            fn_82ED5DB8(param_1,lVar6,in_stack_00000054,in_stack_0000005c,uVar12,
                              *(unsigned short *)
                               ((in_stack_0000007c - (int)in_stack_0000006c) + (int)puVar14),
                              (in_stack_00000084 - in_stack_00000074) + uVar12,
                              *(unsigned short *)
                               ((in_stack_0000008c - (int)in_stack_0000006c) + (int)puVar14));
          }
          else if (uVar7 == 2 && bVar1) {
            fn_82ED5EB0(param_1,lVar6,in_stack_00000054,in_stack_0000005c,lVar8 + uVar12,
                              *(unsigned short *)
                               ((in_stack_0000009c - (int)in_stack_0000006c) + (int)puVar14),
                              lVar9 + uVar12,
                              *(unsigned short *)
                               ((in_stack_000000ac - (int)in_stack_0000006c) + (int)puVar14));
          }
          else if (uVar7 != 3 || !bVar1) {
            if (bVar1) {
              fn_82ED5FA8(param_1,lVar6,in_stack_00000054,in_stack_0000005c,
                              (in_stack_000000b4 - in_stack_00000064) + uVar11,uVar10,
                              *(unsigned char *)((int)param_3 + iVar4 + 0x8c),iVar2);
            }
            else {
              fn_82ED5D40(param_1,lVar6,in_stack_00000054,in_stack_0000005c,uVar11,*puVar14,
                              iVar2,lVar13);
            }
          }
        }
      }
    }
    else {
      fn_82F1C3A0(param_1,param_4,uStack00000034,lVar6,iVar2,in_stack_00000054,in_stack_0000005c
                      ,uVar11);
    }
    uVar15 = uVar15 + 1;
    puVar14 = puVar14 + 1;
    uVar12 = uVar12 + 0x80;
    uVar10 = uVar10 + 8;
    uVar11 = uVar11 + 0x100;
    if (3 < (int)uVar15) break;
    param_4 = (unsigned __int64)uStack0000002c;
  }
  uVar10 = 4;
  do {
    uVar11 = (unsigned __int64)in_stack_000000c4;
    if (in_stack_000000c4 == 3) {
      uVar11 = (unsigned __int64)*(unsigned char *)param_3 & 7;
    }
    iVar2 = (int)uVar10;
    if (*(unsigned char *)((int)param_3 + iVar2 + 0x4a) == 0) {
      if (*(int *)((int)param_3 + (int)((uVar10 & 0xffffffff) << 2) + 4) != 0) {
        if (in_stack_000000c4 == 3) {
          if ((*param_3 & 0x10000000) == 0) {
            uVar11 = (unsigned __int64)(*param_3 >> 0x18) & 7;
          }
          else {
            uVar11 = (unsigned __int64)(char)*(unsigned char *)((int)param_3 + iVar2 + 0x38);
          }
        }
        if ((uVar11 & 0xffffffff) < 5) {
          bVar1 = (int)uVar11 != 0;
          if (uVar11 == 1 && bVar1) {
            iVar2 = (int)((uVar10 & 0xffffffff) << 1);
            lVar8 = (uVar10 & 0x1ffffff) * 0x80;
            fn_82ED5DB8(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              lVar8 + (unsigned __int64)in_stack_00000074,
                              *(unsigned short *)(iVar2 + in_stack_0000007c),
                              lVar8 + (unsigned __int64)in_stack_00000084,
                              *(unsigned short *)(iVar2 + in_stack_0000008c));
          }
          else if (uVar11 == 2 && bVar1) {
            iVar2 = (int)((uVar10 & 0xffffffff) << 1);
            lVar8 = (uVar10 & 0x1ffffff) * 0x80;
            fn_82ED5EB0(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              lVar8 + (unsigned __int64)in_stack_00000094,
                              *(unsigned short *)(iVar2 + in_stack_0000009c),
                              lVar8 + (unsigned __int64)in_stack_000000a4,
                              *(unsigned short *)(iVar2 + in_stack_000000ac));
          }
          else if (uVar11 != 3 || !bVar1) {
            if (bVar1) {
              fn_82ED5FA8(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              (uVar10 & 0xffffff) * 0x100 + (unsigned __int64)in_stack_000000b4,
                              (uVar10 & 0x1fffffff) * 8 + (unsigned __int64)in_stack_000000bc,
                              *(unsigned char *)((int)param_3 + iVar2 + 0x8c),
                              *(unsigned int *)(param_1 + 0x568));
            }
            else {
              uVar3 = *(unsigned int *)(param_1 + 0x568);
              uVar5 = fn_82F07E00(param_1,(uVar10 & 0xffffff) * 0x100 +
                                                (unsigned __int64)in_stack_00000064,
                                        *(unsigned short *)
                                         ((int)((uVar10 & 0xffffffff) << 1) + (int)in_stack_0000006c
                                         ),in_stack_0000005c,*(unsigned int *)(param_1 + 0x2030),
                                        lVar13);
              (**(int (***)())(param_1 + 0x1f98))(in_stack_00000054,in_stack_0000005c,8,uVar5);
              (**(int (***)())(param_1 + 0x1fb4))(param_1,param_7,in_stack_00000054,uVar3,8);
            }
          }
        }
      }
    }
    else {
      fn_82F1C3A0(param_1,uStack0000002c,uStack00000034,param_7,*(unsigned int *)(param_1 + 0x568)
                      ,in_stack_00000054,in_stack_0000005c,
                      (uVar10 & 0xffffff) * 0x100 + (unsigned __int64)in_stack_00000064);
    }
    uVar10 = uVar10 + 1;
    param_7 = (unsigned __int64)uStack0000004c;
  } while ((int)uVar10 < 6);
  return;
}

