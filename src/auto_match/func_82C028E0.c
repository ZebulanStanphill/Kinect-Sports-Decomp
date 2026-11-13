extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_dc;
extern int fn_82C0ABD0();
extern int fn_82C0AC90();
extern int fn_82C0ACB8();
extern int fn_82F64CE0();
extern int fn_82F69FF0();
extern int iRam00000004;
extern unsigned int uRam00000000;
extern unsigned int uRam00000002;
extern unsigned int uRam0000000c;
extern unsigned int uRam00000010;
extern unsigned int uStack_c4;


unsigned __int64 fn_82C028E0(int param_1)

{
  unsigned int uVar1;
  int (**pcVar2)();
  unsigned short uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  int iVar10;
  unsigned char auStack_dc [4];
  unsigned char auStack_d8 [8];
  unsigned char auStack_d0 [12];
  unsigned int uStack_c4;
  
  piVar9 = (int *)(param_1 + 0xd0);
  (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x24))(piVar9);
  lVar4 = fn_82C0AC90(*(unsigned int *)(param_1 + 0x2a0),auStack_dc);
  uVar8 = -(unsigned __int64)(lVar4 != 0) & 0xffffffff80004005;
  if ((int)uVar8 < 0) {
    if (-1 < (int)uVar8) {
      (**(int (***)())(*piVar9 + 0x28))(piVar9,uRam0000000c,uRam00000000 >> 1);
      (**(int (***)())(*piVar9 + 0x34))(piVar9,uRam00000010,uRam00000002 >> 1);
    }
  }
  else {
    uVar8 = 0xffffffff80004003;
  }
  if (-1 < (int)uVar8) {
    lVar4 = fn_82C0ACB8(*(unsigned int *)(param_1 + 0x2a0),auStack_d8);
    uVar8 = -(unsigned __int64)(lVar4 != 0) & 0xffffffff80004005;
    if (-1 < (int)uVar8) {
      return 0xffffffff80004003;
    }
  }
  if (-1 < (int)uVar8) {
    for (uVar7 = 0; uVar7 < uRam00000000; uVar7 = uVar7 + 1 & 0xffff) {
      iVar10 = uVar7 * 0x10 + iRam00000004;
      uVar3 = *(unsigned short *)(uVar7 * 0x10 + iRam00000004) >> 1;
      uVar1 = *(unsigned int *)(iVar10 + 4);
      if (*(short *)(iVar10 + 8) == 0) {
        iVar5 = fn_82F69FF0(0xffffffff820ec59c,uVar1,uVar3);
        if (iVar5 == 0) {
          (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x38))
                    (param_1 + 0xd0,*(unsigned int *)(iVar10 + 0xc),*(unsigned short *)(iVar10 + 10) >> 1);
        }
        else {
          iVar5 = fn_82F69FF0(0xffffffff820ec5bc,uVar1,uVar3);
          if (iVar5 == 0) {
            (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x3c))
                      (param_1 + 0xd0,*(unsigned int *)(iVar10 + 0xc),*(unsigned short *)(iVar10 + 10) >> 1);
          }
          else {
            iVar5 = fn_82F69FF0(0xffffffff820ec5d8,uVar1,uVar3);
            if (iVar5 == 0) {
              (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x40))
                        (param_1 + 0xd0,*(unsigned int *)(iVar10 + 0xc),*(unsigned short *)(iVar10 + 10) >> 1)
              ;
            }
            else {
              iVar5 = fn_82F69FF0(0xffffffff820ec5ec,uVar1,uVar3);
              if (iVar5 == 0) {
                piVar9 = (int *)(param_1 + 0xd0);
                (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x58))(piVar9);
                iVar5 = fn_82F64CE0();
                if (iVar5 == 0) {
                  (**(int (***)())(*piVar9 + 0x40))
                            (piVar9,*(unsigned int *)(iVar10 + 0xc),*(unsigned short *)(iVar10 + 10) >> 1);
                }
              }
            }
          }
        }
      }
      else if (*(short *)(iVar10 + 8) == 3) {
        iVar5 = fn_82F69FF0(0xffffffff820ec604,uVar1,uVar3);
        if (iVar5 == 0) {
          pcVar2 = *(int (***)())(*(int *)(param_1 + 0xd0) + 0x48);
          uVar6 = (unsigned __int64)**(unsigned int **)(iVar10 + 0xc);
LAB_82c02c20:
          (*pcVar2)(param_1 + 0xd0,uVar6);
        }
        else {
          iVar5 = fn_82F69FF0(0xffffffff820ec624,uVar1,uVar3);
          if (iVar5 == 0) {
            iVar5 = (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x60))((int *)(param_1 + 0xd0));
            if (iVar5 == 0) {
              pcVar2 = *(int (***)())(*(int *)(param_1 + 0xd0) + 0x48);
              uVar6 = (unsigned __int64)**(unsigned int **)(iVar10 + 0xc) + 1;
              goto LAB_82c02c20;
            }
          }
        }
      }
    }
    if (-1 < (int)uVar8) {
      lVar4 = fn_82C0ABD0(*(unsigned int *)(param_1 + 0x2a0),auStack_d0);
      uVar8 = -(unsigned __int64)(lVar4 != 0) & 0xffffffff80004005;
      if (-1 < (int)uVar8) {
        (**(int (***)())(*(int *)(param_1 + 0xd0) + 0x44))(param_1 + 0xd0,uStack_c4);
      }
    }
  }
  return uVar8;
}

