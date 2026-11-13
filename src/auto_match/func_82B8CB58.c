typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABE2E0();
extern int fn_82AD20C0();
extern int fn_82B25248();
extern int fn_82B837F8();
extern int fn_82B8AC10();


__int64 fn_82B8CB58(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                      unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int uVar12;
  
  lVar9 = 0;
  puVar10 = (unsigned int *)(param_2 + 4);
  do {
    puVar1 = (unsigned int *)*puVar10;
    if (puVar1 == (unsigned int *)0x0) {
      if (((param_6 & 0xffffffff) != 0) && (lVar9 != 0)) {
        cVar6 = fn_82ABE2E0(param_3);
        if (cVar6 == '\0') {
          if ((*(unsigned int *)(param_3 + 8) & 0x40) == 0) {
            bVar5 = false;
          }
          else {
            uVar12 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
            if (((uVar12 == 0x1e) || (uVar12 == 0x37)) || (bVar5 = false, uVar12 == 0x38)) {
              bVar5 = true;
            }
          }
          if (bVar5) {
            for (puVar10 = *(unsigned int **)(param_3 + 4); puVar10 != (unsigned int *)0x0;
                puVar10 = (unsigned int *)puVar10[2]) {
              if (puVar10[4] != 0) {
                if (((*puVar10 & 0x40000000) == 0) || (bVar5 = true, (*puVar10 & 0xe000000) != 0)) {
                  bVar5 = false;
                }
                if (bVar5) {
                  for (iVar7 = *(int *)(puVar10[4] + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
                    if (*(int *)(iVar7 + 0x10) != 0) {
                      fn_82B25248(param_1,*(int *)(iVar7 + 0x10),param_6);
                    }
                  }
                }
              }
            }
            for (puVar10 = *(unsigned int **)(param_2 + 4); puVar10 != (unsigned int *)0x0;
                puVar10 = (unsigned int *)puVar10[2]) {
              if (puVar10[4] != 0) {
                if (((*puVar10 & 0x40000000) == 0) || (bVar5 = true, (*puVar10 & 0xe000000) != 0)) {
                  bVar5 = false;
                }
                if (bVar5) {
                  for (iVar7 = *(int *)(puVar10[4] + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
                    if (*(int *)(iVar7 + 0x10) != 0) {
                      fn_82B25248(param_1,*(int *)(iVar7 + 0x10),param_6);
                    }
                  }
                }
              }
            }
          }
          cVar6 = fn_82ABDA10(param_3);
          if (cVar6 != '\0') {
            iVar7 = *(int *)(param_3 + 0x1c);
            for (uVar12 = *(unsigned int *)(param_1 + 4); ((uVar12 & 1) == 0 && (uVar12 != 0));
                uVar12 = *(unsigned int *)((uVar12 & 0xfffffffe) + 4)) {
              uVar4 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x30) & 0x7ffff;
              if ((*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar12 + 0x28)) &
                  1 << ((unsigned int)uVar4 & 0x1f)) != 0) {
                for (uVar2 = *(unsigned int *)(uVar12 + 0x14); ((uVar2 & 1) == 0 && (uVar2 != 0));
                    uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 0x28)) {
                  if ((*(unsigned int *)(uVar2 + 8) & 0x3f80) == 0x3800) {
                    fn_82B25248(param_1,uVar2,param_6);
                  }
                }
              }
            }
          }
          fn_82B25248(param_1,param_3,param_6);
          cVar6 = fn_82ABE2E0(param_2);
          if (cVar6 != '\0') {
            piVar11 = (int *)(param_2 + 0x28);
            for (uVar12 = 0; uVar12 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
              piVar11 = piVar11 + 1;
              fn_82B25248(param_1,*(unsigned int *)(*piVar11 + 0xc),param_6);
            }
          }
        }
        else {
          fn_82B8AC10(param_1,param_3,0,1);
        }
      }
      return lVar9;
    }
    uVar12 = puVar1[4];
    if (uVar12 != 0) {
      uVar2 = *puVar1;
      if ((uVar2 & 0xe000000) == 0) {
        if (*(int *)(uVar12 + 0x1c) == *(int *)(param_2 + 0x1c)) {
          if ((uVar2 >> 0x1e & 1) == 0) {
            uVar2 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
            if ((uVar2 == 0) || (bVar5 = true, 0x66 < uVar2)) {
              bVar5 = false;
            }
            if ((bVar5) || (((*(unsigned int *)(uVar12 + 8) & 0x3f80) == 0x3a80 && (uVar2 == 0x71))))
            goto LAB_82b8ccb0;
            fn_82AD20C0(uVar12,puVar1,param_1);
          }
          else {
            uVar2 = uVar2 >> 0xd & 0xfff;
            if (uVar2 == 0) {
              if ((*(unsigned int *)(param_3 + 8) & 0x40) == 0) {
LAB_82b8cc78:
                cVar6 = '\0';
              }
              else {
                uVar2 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
                if (((uVar2 == 0x1e) || (uVar2 == 0x37)) || (cVar6 = '\0', uVar2 == 0x38)) {
                  cVar6 = '\x01';
                }
              }
            }
            else {
              if (uVar2 == 1) {
                iVar7 = (*(unsigned int *)(param_3 + 8) & 0x3f80) - 0x3100;
              }
              else if (uVar2 < 3) {
                iVar7 = (*(unsigned int *)(param_3 + 8) & 0x3f80) - 0x3280;
              }
              else {
                if (uVar2 != 3) {
                  if (uVar2 < 5) goto LAB_82b8cc78;
                  if (uVar2 == 6) {
                    uVar2 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
                    if ((uVar2 < 0x20) || (cVar6 = '\x01', 0x52 < uVar2)) {
                      cVar6 = '\0';
                    }
                  }
                  else {
                    if (uVar2 != 7) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(param_1,0x12c0);
                    }
                    cVar6 = fn_82ABDA10(param_3);
                  }
                  goto LAB_82b8cca8;
                }
                iVar7 = (*(unsigned int *)(param_3 + 8) & 0x3f80) - 0x3300;
              }
              cVar6 = iVar7 == 0;
            }
LAB_82b8cca8:
            if (cVar6 != '\0') {
LAB_82b8ccb0:
              puVar8 = (unsigned int *)(puVar1[3] + 4);
              for (puVar3 = (unsigned int *)*puVar8; puVar3 != puVar1; puVar3 = (unsigned int *)puVar3[2]) {
                puVar8 = puVar3 + 2;
              }
              *puVar8 = puVar1[2];
              puVar1[2] = *(unsigned int *)(param_3 + 4);
              *(unsigned int **)(param_3 + 4) = puVar1;
              puVar1[3] = param_3;
              goto LAB_82b8cd70;
            }
          }
        }
      }
      else {
        cVar6 = fn_82B837F8(param_1,param_2,puVar1,param_3,param_4,param_5);
        if (cVar6 != '\0') {
LAB_82b8cd70:
          lVar9 = 1;
          if ((param_6 & 0xffffffff) == 0) {
            *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) & 0xfbffffff;
          }
          else {
            fn_82B25248(param_1,uVar12,param_6);
          }
        }
      }
    }
    if ((unsigned int *)*puVar10 == puVar1) {
      puVar10 = puVar1 + 2;
    }
  } while( true );
}

