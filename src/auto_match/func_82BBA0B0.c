typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BA02A8();
extern int fn_82BC31C8();
extern unsigned int lbl_8316FF50;
extern unsigned int lbl_8316FF54;


void fn_82BBA0B0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  __int64 lVar12;
  int *piVar13;
  
  iVar1 = *(int *)(param_1 + 0x88);
  lVar6 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    do {
      piVar13 = *(int **)(iVar1 + 0x1c);
      for (iVar4 = piVar13[2]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      }
      piVar7 = piVar13 + 2;
      iVar4 = *piVar7;
      while (iVar4 != 0) {
        if (((piVar13[0x39] & 1U) != 0) && ((int)lVar6 < *(int *)(*(int *)(param_1 + 0xc) + 0xaa4)))
        {
          iVar4 = (**(int (***)())(*piVar13 + 4))(piVar13);
          bVar2 = false;
          iVar5 = piVar13[6] * 0x34;
          uVar8 = 0;
          if (((*(unsigned int *)(&lbl_8316FF50 + iVar5) >> 1 & 1) == 0) ||
             (*(int *)(&lbl_8316FF54 + iVar5) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            bVar2 = piVar13[6] == 0x12;
          }
          if ((bVar3) && (((unsigned int)piVar13[0x39] >> 1 & 1) == 0)) {
            uVar11 = 0;
            uVar10 = 0xffffffffffffffff;
            uVar9 = 0xffffffffffffffff;
            lVar12 = 0;
            do {
              iVar5 = (**(int (***)())(*piVar13 + 0x50))(piVar13,0,lVar12);
              if (iVar5 == 0) {
                uVar11 = 1 << ((unsigned int)lVar12 & 0x3f) | uVar11;
              }
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 < 4);
            bVar3 = true;
            lVar12 = 0;
            do {
              if ((1 << ((unsigned int)lVar12 & 0x3f) & uVar11) != 0) {
                if ((-1 < (int)uVar10) &&
                   (iVar5 = (**(int (***)())(*piVar13 + 0x50))(piVar13,1,lVar12), (int)uVar10 != iVar5))
                {
LAB_82bba29c:
                  bVar3 = false;
                  break;
                }
                uVar10 = (**(int (***)())(*piVar13 + 0x50))(piVar13,1,lVar12);
                if (iVar4 == 2) {
                  if ((-1 < (int)uVar9) &&
                     (iVar5 = (**(int (***)())(*piVar13 + 0x50))(piVar13,2,lVar12), (int)uVar9 != iVar5)
                     ) goto LAB_82bba29c;
                  uVar9 = (**(int (***)())(*piVar13 + 0x50))(piVar13,2,lVar12);
                }
              }
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 < 4);
            if (bVar3) {
              if (iVar4 == 2) {
                if (((piVar13[0x3b] != piVar13[0x3c]) ||
                    (*(char *)((int)piVar13 + 0x99) != *(char *)((int)piVar13 + 0x9a))) ||
                   (*(char *)((int)piVar13 + 0x9f) != *(char *)(piVar13 + 0x28))) {
                  if (((!bVar2) || (piVar13[0x3b] != piVar13[0x3c])) ||
                     (*(char *)((int)piVar13 + 0x9f) != *(char *)(piVar13 + 0x28)))
                  goto LAB_82bba31c;
                  uVar8 = 1;
                }
              }
              lVar6 = lVar6 + 1;
              fn_82BC31C8(piVar13,uVar10,uVar9,uVar8);
            }
          }
        }
LAB_82bba31c:
        piVar13 = (int *)*piVar7;
        piVar7 = piVar13 + 2;
        iVar4 = piVar13[2];
      }
      iVar1 = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != 0);
    if (0 < (int)lVar6) {
      fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820e0908,lVar6);
    }
  }
  return;
}

