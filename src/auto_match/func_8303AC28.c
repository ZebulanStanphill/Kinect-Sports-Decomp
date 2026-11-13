extern unsigned int fStack_70;
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8303A888();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_60;


void fn_8303AC28(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fStack_70;
  int iStack_6c;
  int iStack_68;
  unsigned __int64 uStack_60;
  
  piVar3 = (int *)fn_82F6A548();
  iVar1 = (int)param_2;
  iStack_6c = *piVar3;
  dVar11 = (double)*(float *)(iVar1 + 0x10);
  uVar7 = (unsigned __int64)*(unsigned short *)((int)piVar3 + 0xe);
  dVar10 = (double)(float)((double)*(float *)(iVar1 + 0x14) - dVar11);
  iStack_68 = (unsigned int)*(unsigned short *)(piVar3 + 3) * 4 + iStack_6c;
  if (uVar7 != 0) {
    dVar12 = (double)lbl_821AAD20;
    dVar13 = (double)lbl_8201546C;
    do {
      uVar8 = 0x80;
      if ((uVar7 & 0xffffffff) < 0x81) {
        uVar8 = uVar7;
      }
      if (*(unsigned int *)(iVar1 + 0x18) < 8) {
        uVar6 = *(unsigned int *)(iVar1 + 0x18) + 1;
        fStack_70 = (float)dVar12;
        uStack_60 = (unsigned __int64)uVar6;
        *(unsigned int *)(iVar1 + 0x18) = uVar6;
        *(float *)(iVar1 + 0x10) =
             (float)((double)(float)((double)uStack_60 * dVar10) * dVar13 + dVar11);
        piVar4 = (int *)fn_8303A930(piVar3,*(unsigned char *)(iVar1 + 0x20),&fStack_70);
        if (((unsigned int)piVar4 & 0xff) == 0) {
          piVar3 = (int *)fn_8303AA38((double)fStack_70,piVar4,param_2);
        }
        else {
          piVar3 = piVar4;
          if (*(char *)(iVar1 + 0x21) == '\0') {
            lVar5 = param_3 + -4;
            lVar9 = 8;
            do {
              lVar5 = lVar5 + 4;
              *(unsigned int *)lVar5 = 0;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        *(char *)(iVar1 + 0x21) = (char)piVar4;
      }
      if (*(char *)(iVar1 + 0x21) == '\0') {
        fn_8303A888(param_3,param_2,&iStack_6c,uVar8);
        piVar3 = (int *)fn_8303A888(param_3 + 0x10);
      }
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
  }
  fVar2 = lbl_8217BA98;
  iVar1 = (int)param_3;
  *(float *)(iVar1 + 8) = (*(float *)(iVar1 + 8) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar1 + 0xc) = (*(float *)(iVar1 + 0xc) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x18) = (*(float *)(iVar1 + 0x18) + fVar2) - fVar2;
  *(float *)(iVar1 + 0x1c) = (*(float *)(iVar1 + 0x1c) + fVar2) - fVar2;
  fn_82F6A594();
  return;
}

