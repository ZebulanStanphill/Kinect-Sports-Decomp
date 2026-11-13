#define true 1
extern int fn_82C9F760();
extern int fn_82CA00E8();
extern int fn_82CA1B48();
extern int fn_82CA1D38();
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82CA1EF8(int param_1, __int64 param_2, __int64 param_3, __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned int in_stack_00000074, unsigned int in_stack_0000007c, unsigned int in_stack_00000084, unsigned int in_stack_0000008c, unsigned int in_stack_00000094, unsigned int in_stack_0000009c, unsigned int in_stack_000000a4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;











  
  uStack0000003c = (unsigned int)param_6;
  uStack00000044 = (unsigned int)param_7;
  uStack0000004c = (unsigned int)param_8;
  lVar6 = 0;
  lVar10 = 0;
  if (*(int *)(param_1 + 0x55b4) == 0) {
    if ((unsigned __int64)in_stack_0000009c == 0) {
      lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xcc) & 0x1fffffff) << 3;
      lVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) & 0x1fffffff) << 3;
    }
    fn_82C9F760(param_1,param_5,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                  in_stack_00000094);
    uVar7 = (unsigned __int64)in_stack_000000a4 - (unsigned __int64)in_stack_0000009c;
    fn_82CA00E8(param_1,in_stack_00000064,in_stack_0000006c,in_stack_00000074,in_stack_0000007c,
                  in_stack_00000084,in_stack_0000008c,in_stack_00000094);
    lVar5 = (uVar7 & 0x7fffffff) * 2;
    fn_82CA1B48(param_1,lVar6 + param_2,lVar10 + param_3,lVar10 + param_4,
                  lVar5 - (unsigned __int64)(in_stack_0000009c == 0),param_5,uStack0000003c,uStack00000044)
    ;
    lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) & 0x3fffffff) * 4;
    fn_82CA1B48(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0xcc) & 0x3fffffff) * 4 + param_2,
                  lVar6 + param_3,lVar6 + param_4,lVar5,uStack0000004c,in_stack_00000054,
                  in_stack_0000005c);
    lVar6 = (uVar7 & 0xfffffff) << 4;
    fn_82CA1D38(param_1,param_2 + 8,param_3 + 8,param_4 + 8,
                  ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + -1,lVar6,
                  in_stack_00000064,in_stack_0000006c);
    fn_82CA1D38(param_1,param_2 + 4,param_3 + 4,param_4 + 4,*(int *)(param_1 + 0x88) << 1,lVar6,
                  in_stack_0000007c,in_stack_00000084);
  }
  else {
    uVar4 = *(unsigned int *)(param_1 + 0xcc);
    uVar3 = *(unsigned int *)(param_1 + 0xd0);
    uVar7 = (unsigned __int64)in_stack_0000009c;
    uVar1 = uVar4 << 2;
    uVar2 = uVar3 << 2;
    if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
       (*(int *)(param_1 + 0x54c8) != 1)) {
      *(unsigned int *)(param_1 + 0x55d0) = *(unsigned int *)(param_1 + 0x55d4);
    }
    else {
      *(int *)(param_1 + 0x55d0) = *(int *)(param_1 + 0x8c) * 4 + *(int *)(param_1 + 0x55d4);
    }
    uVar11 = uVar7;
    if ((uVar7 < in_stack_000000a4) &&
       (uVar11 = uVar7 + 1, (uVar11 & 0xffffffff) < (unsigned __int64)in_stack_000000a4)) {
      lVar6 = (uVar11 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x55d0)) != 0) break;
        uVar11 = uVar11 + 1;
        lVar6 = lVar6 + 4;
      } while ((uVar11 & 0xffffffff) < (unsigned __int64)in_stack_000000a4);
    }
    uVar13 = uVar11 - uVar7;
    if (uVar13 != 0) {
      uVar9 = (unsigned __int64)in_stack_00000094;
      do {
        if (((uVar7 & 0xffffffff) == 0) ||
           (*(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0x55d0)) != 0)) {
          lVar6 = ((unsigned __int64)uVar4 & 0x1fffffff) << 3;
          lVar10 = ((unsigned __int64)uVar3 & 0x1fffffff) << 3;
        }
        else {
          lVar6 = 0;
          lVar10 = 0;
        }
        iVar14 = (int)uVar13;
        fn_82C9F760(param_1,param_5,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,
                      uVar9);
        fn_82CA00E8(param_1,in_stack_00000064,in_stack_0000006c,in_stack_00000074,
                      in_stack_0000007c,in_stack_00000084,in_stack_0000008c,uVar9);
        if (((uVar7 & 0xffffffff) == 0) ||
           (lVar5 = 0, *(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0x55d0)) != 0)
           ) {
          lVar5 = 1;
        }
        lVar8 = (uVar13 & 0x7fffffff) * 2;
        fn_82CA1B48(param_1,lVar6 + param_2,lVar10 + param_3,lVar10 + param_4,lVar8 - lVar5,
                      param_5,uStack0000003c,uStack00000044);
        fn_82CA1B48(param_1,(unsigned __int64)uVar1 + param_2,(unsigned __int64)uVar2 + param_3,
                      (unsigned __int64)uVar2 + param_4,lVar8,uStack0000004c,in_stack_00000054,
                      in_stack_0000005c);
        lVar6 = (uVar13 & 0xfffffff) << 4;
        fn_82CA1D38(param_1,param_2 + 8,param_3 + 8,param_4 + 8,
                      ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * 2 + -1,lVar6,
                      in_stack_00000064,in_stack_0000006c);
        fn_82CA1D38(param_1,param_2 + 4,param_3 + 4,param_4 + 4,*(int *)(param_1 + 0x88) << 1,
                      lVar6,in_stack_0000007c,in_stack_00000084);
        uVar4 = *(unsigned int *)(param_1 + 0xcc);
        uVar7 = (__int64)*(int *)(param_1 + 0x88) * (__int64)iVar14;
        uVar3 = *(unsigned int *)(param_1 + 0xd0);
        lVar6 = ((__int64)(int)uVar3 * (__int64)iVar14 & 0x1fffffffU) * 8;
        param_2 = ((__int64)(int)uVar4 * (__int64)iVar14 & 0xfffffffU) * 0x10 + param_2;
        param_3 = lVar6 + param_3;
        param_4 = lVar6 + param_4;
        uVar9 = (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) * 2 + uVar9;
        uVar12 = uVar11;
        if (((uVar11 & 0xffffffff) < (unsigned __int64)in_stack_000000a4) &&
           (uVar12 = uVar11 + 1, (uVar12 & 0xffffffff) < (unsigned __int64)in_stack_000000a4)) {
          lVar6 = (uVar12 & 0x3fffffff) << 2;
          do {
            if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x55d0)) != 0) break;
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 4;
          } while ((uVar12 & 0xffffffff) < (unsigned __int64)in_stack_000000a4);
        }
        uVar13 = uVar12 - uVar11;
        if (uVar13 == 0) {
          return;
        }
        param_7 = (unsigned __int64)uStack00000044;
        param_6 = (unsigned __int64)uStack0000003c;
        param_8 = (unsigned __int64)uStack0000004c;
        uVar7 = uVar11;
        uVar11 = uVar12;
      } while( true );
    }
  }
  return;
}

