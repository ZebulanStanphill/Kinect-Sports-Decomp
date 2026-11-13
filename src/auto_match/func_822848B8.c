extern int fn_8227CB30();
extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82359C18();
extern int fn_82F4DCF8();


void fn_822848B8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned short *puVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  __int64 lVar12;
  
  iVar4 = fn_82284738();
  iVar7 = *(int *)(iVar4 + 0x148);
  if (iVar7 != *(int *)(iVar4 + 0x14c)) {
    do {
      iVar11 = *(int *)(iVar7 + 0x430);
      if (iVar11 == param_1) {
        iVar1 = *(int *)(*(int *)(iVar4 + 0x14c) + -0x10);
        iVar2 = *(int *)(iVar4 + 0x14c);
        if (iVar7 + 0x440 != iVar2) {
          iVar7 = iVar7 + 0x858;
          do {
            puVar8 = (unsigned short *)(iVar7 + -0x858);
            iVar9 = (iVar7 - (int)puVar8) + -0x418;
            lVar12 = 0x100;
            do {
              *puVar8 = *(unsigned short *)(iVar9 + (int)puVar8);
              puVar8 = puVar8 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            puVar8 = (unsigned short *)(iVar7 + -0x658);
            lVar12 = 0x100;
            do {
              *puVar8 = *(unsigned short *)(iVar9 + (int)puVar8);
              puVar8 = puVar8 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            fn_8227CB30(iVar7 + -0x458,iVar7 + -0x18);
            fn_8227CB30(iVar7 + -0x440,iVar7);
            *(unsigned int *)(iVar7 + -0x428) = *(unsigned int *)(iVar7 + 0x18);
            *(unsigned int *)(iVar7 + -0x424) = *(unsigned int *)(iVar7 + 0x1c);
            *(unsigned int *)(iVar7 + -0x420) = *(unsigned int *)(iVar7 + 0x20);
            iVar9 = iVar7 + 0x28;
            iVar7 = iVar7 + 0x440;
          } while (iVar9 != iVar2);
        }
        uVar3 = *(unsigned int *)(iVar4 + 0x14c);
        for (uVar10 = (unsigned __int64)uVar3 - 0x440; (uVar10 & 0xffffffff) != (unsigned __int64)uVar3;
            uVar10 = uVar10 + 0x440) {
          fn_82359C18(uVar10 + 0x418);
          fn_82359C18(uVar10 + 0x400);
        }
        *(int *)(iVar4 + 0x14c) = *(int *)(iVar4 + 0x14c) + -0x440;
        if ((unsigned int)LZCOUNT(iVar1 - iVar11) >> 5 == 0) {
          return;
        }
        if (*(int *)(iVar4 + 0x148) == *(int *)(iVar4 + 0x14c)) {
          uVar6 = 1;
          uVar5 = 1;
          iVar7 = 0;
          iVar11 = 0;
        }
        else {
          iVar7 = *(int *)(iVar4 + 0x14c);
          *(unsigned int *)(iVar4 + 0x15c) = 0xffffffff;
          iVar11 = iVar7 + -0x440;
          fn_82F4DCF8(0xffffffffffffffff);
          uVar6 = *(unsigned int *)(iVar7 + -8);
          uVar5 = *(unsigned int *)(iVar7 + -0xc);
          iVar7 = iVar7 + -0x240;
        }
        fn_82284BA0(iVar4,iVar11,iVar7,uVar5,uVar6);
        return;
      }
      iVar7 = iVar7 + 0x440;
    } while (iVar7 != *(int *)(iVar4 + 0x14c));
  }
  return;
}

