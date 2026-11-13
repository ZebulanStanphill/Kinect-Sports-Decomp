extern int fn_82AB15D0();
extern int fn_82BAFE48();
extern int fn_82BC0DD8();
extern int fn_82BC24F0();
extern int fn_82BC2958();
extern int fn_82BC5628();


void fn_82BA1A40(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    for (iVar2 = *(int *)(iVar1 + 0x1c); *(int *)(iVar2 + 8) != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if ((*(unsigned int *)(iVar2 + 0xe4) & 1) != 0) {
        uVar3 = *(unsigned int *)(iVar2 + 0x14);
        uVar11 = (unsigned __int64)uVar3;
        uVar9 = 0;
        uVar8 = 0;
        if (0 < (int)uVar3) {
          piVar7 = (int *)(iVar2 + 0x54);
          do {
            iVar10 = *piVar7;
            if (((iVar10 == 1) || (iVar10 == 2)) || (iVar10 == 3)) {
              uVar8 = uVar8 + 1;
            }
            else if (iVar10 == 0xb) {
              uVar9 = uVar9 + 1;
            }
            piVar7 = piVar7 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          if (((int)uVar8 != 0) && (iVar10 = (int)uVar9, iVar10 != 0)) {
            uVar9 = ((uVar8 & 0xffffffff) >> 0x1f) + (__int64)(iVar10 >> 0x1f) +
                    (unsigned __int64)(uVar8 <= uVar9);
            if ((iVar10 != 1) && ((int)uVar8 != 1)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded50,0xffffffff820deb50,0x77b);
            }
            lVar12 = 0;
            puVar13 = (unsigned int *)(iVar2 + 0x20);
            do {
              iVar10 = puVar13[0xd];
              if (((((iVar10 == 1) || (iVar10 == 2)) || (iVar10 == 3)) && ((uVar9 & 0xff) != 0)) ||
                 ((iVar10 == 0xb && ((uVar9 & 0xff) == 0)))) {
                uVar5 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
                uVar4 = *puVar13;
                *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) =
                     *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
                uVar6 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0);
                fn_82BC2958(uVar5,0,uVar6);
                fn_82BC2958(uVar5,1,uVar4);
                fn_82BC0DD8(uVar4,iVar2,uVar5);
                fn_82BC2958(iVar2,lVar12 + 1,uVar6);
                fn_82BC5628(*(unsigned int *)(iVar2 + 0x3b4),iVar2,uVar5);
              }
              lVar12 = lVar12 + 1;
              puVar13 = puVar13 + 1;
            } while ((int)lVar12 < (int)uVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
  }
  return;
}

