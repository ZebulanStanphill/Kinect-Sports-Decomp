typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_8263CBB0();
extern int fn_82837D98();
extern unsigned int lbl_8320A898;


void fn_82553678(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int *apuStack_20 [2];
  
  if (*(int *)(param_1 + 0x4664) == 0) goto LAB_825537d0;
  fn_82837D98(*(unsigned int *)(*(int *)(param_1 + 0x4664) + 0x14),0,apuStack_20);
  bVar1 = false;
  uVar2 = *apuStack_20[0] & 0xf;
  if (uVar2 - 1 < 9) {
    if (uVar2 == 2) {
      if (*(unsigned int **)(lbl_8320A898 + 0x3144) == apuStack_20[0]) goto LAB_825537b0;
    }
    else {
      if (uVar2 == 3) {
        puVar5 = (unsigned int *)(lbl_8320A898 + 0x31b0);
        lVar7 = 0x1a;
        do {
          if ((unsigned int *)*puVar5 == apuStack_20[0]) {
            bVar1 = true;
          }
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else if (uVar2 == 4) {
        bVar1 = *(unsigned int **)(lbl_8320A898 + 0x3148) == apuStack_20[0];
        if (*(unsigned int **)(lbl_8320A898 + 0x3158) == apuStack_20[0]) {
          bVar1 = true;
        }
      }
      else {
        if (uVar2 == 5) {
          puVar6 = *(unsigned int **)(lbl_8320A898 + 0x2ed8);
        }
        else if (uVar2 == 6) {
          puVar6 = *(unsigned int **)(lbl_8320A898 + 0x3248);
        }
        else {
          if (uVar2 != 7) {
            if ((uVar2 == 8) || (uVar2 != 1)) {
              bVar1 = false;
            }
            else {
              puVar5 = (unsigned int *)(lbl_8320A898 + 0x315c);
              lVar7 = 0x10;
              do {
                if ((unsigned int *)*puVar5 == apuStack_20[0]) {
                  bVar1 = true;
                }
                puVar5 = puVar5 + 1;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            goto LAB_825537a8;
          }
          puVar6 = *(unsigned int **)(lbl_8320A898 + 0x3244);
        }
        bVar1 = apuStack_20[0] == puVar6;
      }
LAB_825537a8:
      if (bVar1) {
LAB_825537b0:
                    /* WARNING: Subroutine does not return */
        fn_8263CBB0(lbl_8320A898,0xf,0,0x10000);
      }
    }
  }
  fn_8251FA58(*(unsigned int *)(param_1 + 0x4664));
  *(unsigned int *)(param_1 + 0x4664) = 0;
LAB_825537d0:
  iVar3 = fn_825200A8(param_2,0xffffffff82196288);
  if (iVar3 == 0) {
    uVar4 = fn_8251F720(param_2,0);
    *(unsigned int *)(param_1 + 0x4664) = uVar4;
  }
  return;
}

