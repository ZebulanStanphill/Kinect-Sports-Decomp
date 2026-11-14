typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_170;
extern int fn_8268CC00();
extern int fn_8268CEB0();
extern int fn_82755588();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int cos();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_c4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_d0;


void fn_82757688(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  unsigned char auStack_170 [72];
  __int64 lStack_128;
  __int64 lStack_120;
  __int64 lStack_118;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_d0;
  int iStack_c4;
  
  piVar5 = (int *)fn_82F6A53C();
  if ((param_2 & 0xffffffff) != 0) {
    uVar6 = (unsigned __int64)(unsigned int)piVar5[1];
    uVar11 = 0;
    if (uVar6 != 0) {
      iVar9 = 0;
      dVar13 = (double)lbl_821AAD20;
      do {
        uVar10 = 0;
        iVar12 = 0;
        iVar1 = *(int *)(iVar9 + *piVar5);
        dVar14 = dVar13;
        while( true ) {
          if (((iVar1 == -0x6c) || (*(unsigned int *)(iVar1 + 0x70) <= uVar10)) ||
             (bVar4 = false, (int)uVar10 < 0)) {
            bVar4 = true;
          }
          if (bVar4) break;
          piVar2 = *(int **)(iVar12 + *(int *)(iVar1 + 0x6c));
          lStack_118 = (__int64)piVar2[3];
          if ((double)lStack_118 < dVar13) {
            dVar13 = (double)lStack_118;
          }
          if (*piVar2 < 0) {
            iVar7 = (int)*(char *)((int)piVar2 + 0x1d);
          }
          else {
            iVar7 = (int)*(short *)(piVar2 + 10);
          }
          lStack_120 = (__int64)(iVar7 + piVar2[4]);
          fn_82756F70(&uStack_110);
          if (iStack_c4 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iStack_c4 + 0x14);
          }
          iVar3 = (int)param_2;
          *(unsigned int *)(iVar3 + 0x30) = *(unsigned int *)(iVar7 + 0xc);
          *(unsigned int *)(iVar3 + 0x3c) = uStack_d0;
          while( true ) {
            if ((uStack_110 == 0) || (bVar4 = false, uStack_10c <= uStack_110)) {
              bVar4 = true;
            }
            if (bVar4) break;
            if (((param_3 & 0xffffffff) <= (uVar11 & 0xffffffff)) &&
               ((uVar11 & 0xffffffff) < (param_4 & 0xffffffff))) {
              *(unsigned int *)(iVar3 + 0x34) = 0;
              dVar13 = (double)fn_82755588();
              *(float *)(iVar3 + 0x38) = (float)dVar13;
              fn_8268CC00(auStack_170);
              dVar13 = (double)fn_8268CEB0(iVar1 + 0x44);
                    /* WARNING: Subroutine does not return */
              cos((double)(float)dVar13);
            }
            uVar8 = (unsigned int)*(unsigned short *)(uStack_110 + 2);
            if ((*(unsigned short *)(uStack_110 + 6) >> 6 & 1) != 0) {
              uVar8 = -(unsigned int)*(unsigned short *)(uStack_110 + 2);
            }
            lStack_128 = (__int64)(int)uVar8;
            uVar11 = uVar11 + 1;
            dVar13 = (double)(float)((double)lStack_128 + dVar13);
            fn_827555D8(&uStack_110);
          }
          fn_82756488(&uStack_110);
          if (uVar10 < *(unsigned int *)(iVar1 + 0x70)) {
            uVar10 = uVar10 + 1;
            iVar12 = iVar12 + 4;
          }
        }
        uVar6 = uVar6 - 1;
        iVar9 = iVar9 + 8;
        dVar13 = dVar14;
      } while (uVar6 != 0);
    }
  }
  fn_82F6A588();
  return;
}

