typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_823AA378();
extern int fn_828B2DE0();
extern int fn_828B2DE8();
extern int fn_828B4308();
extern int fn_828B4370();
extern int fn_828B47E0();
extern int fn_828EB5F8();
extern int fn_828EB650();


void fn_828B25C8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  char cVar13;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 *puVar12;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (piVar1 = (int *)**(int **)(param_1 + 0xc), piVar1 != *(int **)(param_1 + 0xc))) {
    do {
      uVar7 = (**(int (***)())(*(int *)piVar1[2] + 4))();
      if (((uVar7 & 0xffffffff) != 0) &&
         ((cVar13 = fn_828B2DE0(), cVar13 != '\0' &&
          (piVar2 = (int *)**(int **)(param_1 + 0xc), piVar2 != *(int **)(param_1 + 0xc))))) {
        do {
          uVar8 = (**(int (***)())(*(int *)piVar2[2] + 8))();
          if (((uVar8 & 0xffffffff) != 0) && (cVar13 = fn_828B2DE0(), cVar13 != '\0')) {
            uVar9 = fn_828B2DE8(uVar8);
            uVar10 = fn_823AA378(uVar7);
            lVar11 = fn_828EB5F8(uVar10,uVar9);
            uVar5 = (lVar11 + -2) - (lVar11 + -3 + (unsigned __int64)(lVar11 + -2 == 0)) & 0xff;
            fn_828B47E0(uVar7,uVar8,uVar5 != 0);
            cVar13 = fn_828B4370(uVar7,uVar8);
            if ((int)uVar5 == 0 && cVar13 == '\0') {
              cVar13 = fn_828B4308(uVar7,uVar8);
              bVar6 = true;
              if (cVar13 == '\0') goto LAB_828b26fc;
            }
            else {
LAB_828b26fc:
              bVar6 = false;
            }
            if (bVar6) {
              cVar13 = fn_828EB650();
              bVar6 = true;
              if (cVar13 != '\0') goto LAB_828b2720;
            }
            else {
LAB_828b2720:
              bVar6 = false;
            }
            piVar3 = *(int **)(param_1 + 4);
            iVar4 = *piVar3;
            if (bVar6) {
              puVar12 = (unsigned __int64 *)fn_828B2DE8(uVar8);
              uVar9 = fn_823AA378(uVar7);
              uVar10 = 0;
            }
            else {
              puVar12 = (unsigned __int64 *)fn_828B2DE8(uVar8);
              uVar9 = fn_823AA378(uVar7);
              uVar10 = 0xffffffffffffffff;
            }
            (**(int (***)())(iVar4 + 0x54))(piVar3,*puVar12,uVar9,uVar10);
          }
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)*(int *)(param_1 + 0xc));
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
  }
  return;
}

