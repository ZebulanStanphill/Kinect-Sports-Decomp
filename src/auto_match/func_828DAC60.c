typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_828A0E20();
extern int fn_828ACCE8();
extern int fn_828AECC0();
extern int fn_828BE158();
extern int fn_828C8008();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828D3188();
extern int fn_828D31A8();
extern int fn_828EDED8();
extern int fn_82A4AAA8();
extern int fn_82BA02A8();
extern unsigned int iStack_80;


void fn_828DAC60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned char bVar6;
  char cVar14;
  unsigned __int64 uVar7;
  unsigned int *puVar12;
  __int64 lVar8;
  int iVar13;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  bool bVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int iVar18;
  int iVar19;
  int iStack_80;
  int aiStack_7c;
  
  cVar14 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
  if (cVar14 != '\0') {
    uVar7 = fn_828D2EE0(param_1);
    bVar5 = false;
    if (uVar7 < 0x2711) goto LAB_828dac9c;
  }
  bVar5 = true;
LAB_828dac9c:
  if (!bVar5) {
    cVar14 = fn_828D3188(param_1);
    if (cVar14 == '\0') {
      return;
    }
    fn_82BA02A8(param_1);
    cVar14 = fn_828D31A8(param_1);
    if (cVar14 != '\0') {
      bVar5 = false;
      puVar12 = (unsigned int *)fn_828EDED8(*(unsigned int *)(*(int *)(param_1 + 8) + 0x8c));
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x200);
      aiStack_7c = *piVar1;
      if ((int *)aiStack_7c != piVar1) {
        do {
          piVar1 = *(int **)(aiStack_7c + 0x10);
          fn_82381BC0(&aiStack_7c);
          bVar15 = true;
          iStack_80 = *(int *)piVar1[0x16];
          if ((int *)iStack_80 != (int *)piVar1[0x16]) {
            do {
              bVar6 = 0;
              piVar2 = *(int **)(iStack_80 + 0xc);
              uVar16 = 0;
              if (*puVar12 != 0) {
                iVar13 = 0;
                do {
                  uVar17 = 0;
                  iVar19 = iVar13 + puVar12[1];
                  if (*(int *)(iVar19 + 0xc) != 0) {
                    iVar18 = 0;
                    do {
                      iVar3 = *(int *)(iVar19 + 0x10);
                      lVar8 = (**(int (***)())(*piVar2 + 0x48))(piVar2);
                      if (*(__int64 *)(iVar18 + iVar3) == lVar8) {
                        bVar6 = 1;
                      }
                      uVar17 = uVar17 + 1;
                      iVar18 = iVar18 + 8;
                    } while (uVar17 < *(unsigned int *)(iVar19 + 0xc));
                  }
                  uVar16 = uVar16 + 1;
                  iVar13 = iVar13 + 0x18;
                } while (uVar16 < *puVar12);
              }
              bVar15 = (bool)(bVar6 & bVar15);
              fn_828A0E20(&iStack_80);
            } while (iStack_80 != piVar1[0x16]);
          }
          if (!bVar15) {
            bVar5 = true;
            uVar7 = (**(int (***)())(*piVar1 + 0xc))(piVar1);
            if ((uVar7 & 0xffffffff) == 0) goto LAB_828dacdc;
            iVar13 = fn_82A4AAA8();
            if (iVar13 != 2) {
              piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x230);
              iStack_80 = *piVar1;
              if ((int *)iStack_80 != piVar1) {
                do {
                  uVar4 = *(unsigned int *)(iStack_80 + 0x10);
                  uVar9 = fn_8265C9E0(0x90);
                  if ((uVar9 & 0xffffffff) == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = fn_823AA970(uVar7);
                    uVar10 = fn_828C8008(uVar9,3,uVar10,0x10);
                  }
                  fn_82886518(uVar10,0xffffffffffffffff,0xffffffffffffffff);
                  uVar11 = fn_82897BD0(uVar4);
                  fn_828BE158(*(unsigned int *)(param_1 + 8),uVar10,uVar11,0);
                  fn_82381BC0(&iStack_80);
                } while (iStack_80 != *(int *)(*(int *)(param_1 + 8) + 0x230));
              }
              fn_828AECC0(uVar7,2);
            }
          }
        } while (aiStack_7c != *(int *)(*(int *)(param_1 + 8) + 0x200));
      }
      uVar10 = 7;
      if (!bVar5) {
        uVar10 = 8;
      }
      fn_828D2DB8(param_1,uVar10);
      return;
    }
  }
LAB_828dacdc:
  fn_828D2F28(param_1);
  return;
}

