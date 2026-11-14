typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_160;
extern unsigned int *auStack_220;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822902E8();
extern int fn_82290458();
extern int fn_822A4D38();
extern int fn_822A4F48();
extern int fn_822A51A0();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8242C410();
extern int fn_8243E578();
extern int fn_82526C70();
extern int fn_82528EE0();
extern int fn_826728E8();
extern int fn_82672C20();
extern int XMemSet();
extern unsigned int iStack0000001c;
extern unsigned int iStack_430;
extern unsigned int iStack_43c;
extern unsigned int iStack_440;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_2a0;
extern unsigned int uStack_30c;
extern unsigned int uStack_310;
extern unsigned int uStack_32c;
extern unsigned int uStack_330;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3c0;
extern unsigned int uStack_3dc;
extern unsigned int uStack_3e0;
extern unsigned int uStack_41c;
extern unsigned int uStack_420;
extern unsigned int uStack_428;
extern unsigned int uStack_438;


void fn_822A3EC0(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  double dVar11;
  int iStack0000001c;
  int iStack_440;
  int iStack_43c;
  unsigned int uStack_438;
  int iStack_430;
  unsigned __int64 uStack_428;
  struct { unsigned int first; unsigned int second; } stack_pair_420;

  double dStack_418;
  unsigned int uStack_3e0;
  unsigned int uStack_3dc;
  unsigned char *puStack_3d8;
  unsigned int uStack_3c0;
  unsigned int uStack_3bc;
  unsigned char uStack_3b8;
  unsigned int uStack_340;
  unsigned int uStack_33c;
  unsigned char *puStack_338;
  unsigned int uStack_330;
  unsigned int uStack_32c;
  unsigned char *puStack_328;
  unsigned int uStack_310;
  unsigned int uStack_30c;
  unsigned char *puStack_308;
  unsigned char auStack_300 [32];
  unsigned char auStack_2e0 [64];
  unsigned short uStack_2a0;
  unsigned char auStack_220 [192];
  unsigned char auStack_160 [352];
  
  if (*(int *)(*param_1 + 0x28) != 0) {
    iStack0000001c = param_2;
    fn_822A4D38();
    lVar9 = 0;
    iVar6 = fn_8242C410(param_2);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        piVar3 = *(int **)(**(int **)(param_2 + 8) + iVar6);
        fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
        fn_822B67F8();
        uVar5 = fn_822B98A8();
        lVar9 = lVar9 + 1;
        fn_82526C70(auStack_300,0x20,0xffffffff821a87dc,lVar9);
        fn_826728E8(*(unsigned int *)(*param_1 + 0x28),auStack_300,uVar5);
        iVar6 = iVar6 + 4;
        iVar7 = fn_8242C410(param_2);
      } while ((int)lVar9 < iVar7);
    }
    uVar1 = *param_1;
    fn_822A51A0(uVar1 + 0xa4,param_3 + 4);
    *(unsigned int *)(uVar1 + 0xb4) = *(unsigned int *)(param_3 + 0x14);
    uVar1 = *param_1;
    fn_822A51A0(uVar1 + 0x5c,param_4 + 4);
    *(unsigned int *)(uVar1 + 0x6c) = *(unsigned int *)(param_4 + 0x14);
    *(unsigned int *)(*param_1 + 0xb8) = 1;
    if (param_5 != 0) {
      uVar1 = *param_1;
      fn_822A51A0(uVar1 + 0x74,param_5 + 4);
      *(unsigned int *)(uVar1 + 0x84) = *(unsigned int *)(param_5 + 0x14);
      *(unsigned int *)(*param_1 + 0xb8) = 2;
      if (param_6 != 0) {
        uVar1 = *param_1;
        fn_822A51A0(uVar1 + 0x8c,param_6 + 4);
        *(unsigned int *)(uVar1 + 0x9c) = *(unsigned int *)(param_6 + 0x14);
        *(unsigned int *)(*param_1 + 0xb8) = 3;
      }
    }
    if (param_7 == 0) {
      param_3 = *(int *)(*param_1 + 0xb8) * 0x18 + *param_1 + 0x40;
    }
    iStack_430 = param_3;
    if (*(int *)(*param_1 + 0x28) != 0) {
      uStack_428 = (unsigned __int64)*(unsigned int *)(*param_1 + 0xb8);
      lVar9 = 5;
      dVar11 = (double)uStack_428;
      do {
        stack_pair_420.first = 0;
        stack_pair_420.second = 0;
        fn_82273CD8(&stack_pair_420.first,3);
        dStack_418 = dVar11;
        fn_82672C20(*(unsigned int *)(*param_1 + 0x28),0xffffffff821ac2cc,&stack_pair_420.first,1);
        fn_82273C88(&stack_pair_420.first);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    iVar6 = *(int *)(*param_1 + 0x50);
    if (iVar6 == 1) {
      if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c != 0) {
                    /* WARNING: Subroutine does not return */
        XMemSet(auStack_220,0,0xc0);
      }
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          uVar10 = 0;
          if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c == 0) {
            return;
          }
          iVar6 = 0;
          do {
            iVar7 = *(int *)(param_3 + 4);
            iVar8 = fn_8243E578((unsigned __int64)*param_1 + 0xa0,*(unsigned int *)(iVar6 + iVar7));
            if ((iVar8 != 0) &&
               (iVar2 = *(int *)(*(int *)(param_2 + 0x174) + 0x5c),
               (*(int *)(iVar2 + 0x1c8) - *(int *)(iVar2 + 0x1c4) & 0xfffffffcU) != 4)) {
              fn_82528EE0(auStack_2e0,0x20,0xffffffff821ac280,*(unsigned int *)(iVar8 + 0x44));
            }
            iStack_440 = 0;
            iStack_43c = 0;
            uStack_438 = 0;
            if ((*(int *)(param_2 + 0xa0) == 0) ||
               (bVar4 = true, *(int *)(*(int *)(param_2 + 0xa0) + 0x40) != 2)) {
              bVar4 = false;
            }
            uVar10 = uVar10 + 1;
            fn_822A4F48(param_1,&iStack_440,param_2,iVar6 + iVar7,param_3,uVar10,!bVar4);
            puStack_328 = auStack_2e0;
            uStack_330 = 0;
            uStack_32c = 5;
            fn_82290458(&iStack_440,&uStack_330);
            fn_82273C88(&uStack_330);
            puStack_308 = &lbl_820E975C;
            uStack_310 = 0;
            uStack_30c = 5;
            fn_82290458(&iStack_440,&uStack_310);
            fn_82273C88(&uStack_310);
            puStack_3d8 = &lbl_820E975C;
            uStack_3e0 = 0;
            uStack_3dc = 5;
            fn_82290458(&iStack_440,&uStack_3e0);
            fn_82273C88(&uStack_3e0);
            puStack_338 = auStack_2e0;
            uStack_340 = 0;
            uStack_33c = 5;
            fn_82290458(&iStack_440,&uStack_340);
            fn_82273C88(&uStack_340);
            uStack_3c0 = 0;
            uStack_3bc = 2;
            uStack_3b8 = 1;
            fn_82290458(&iStack_440,&uStack_3c0);
            fn_82273C88(&uStack_3c0);
            fn_82672C20(*(unsigned int *)(*param_1 + 0x28),0xffffffff821ac2a0,iStack_440,
                              iStack_43c - iStack_440 >> 4);
            fn_822902E8(&iStack_440);
            iVar6 = iVar6 + 0x5c;
          } while ((uVar10 & 0xffffffff) <
                   (unsigned __int64)(unsigned int)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c));
          return;
        }
        if (iVar6 != 4) {
          return;
        }
      }
      if ((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x5c != 0) {
        uStack_2a0 = 0;
                    /* WARNING: Subroutine does not return */
        XMemSet(auStack_160,0,0xc0);
      }
    }
  }
  return;
}

