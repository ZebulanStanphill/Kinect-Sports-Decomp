typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_826933E8();
extern int fn_826BCD88();
extern int fn_8278FDC8();
extern int fn_82791070();
extern int fn_8279C658();
extern int fn_827A0C20();
extern int fn_827A0EB8();
extern int fn_827A3A50();
extern int fn_82F68918();
extern unsigned int iStack_74;


void fn_827A44B8(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int *piVar3;
  bool bVar4;
  float *pfVar8;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar9;
  int iVar10;
  bool bVar11;
  unsigned short uVar12;
  unsigned __int64 uVar13;
  unsigned short *puVar15;
  __int64 lVar14;
  double dVar16;
  double dVar17;
  unsigned int auStack_80 [2];
  int *piStack_78;
  int iStack_74;
  
  if ((param_6 & 1) != 0) {
    pfVar8 = (float *)fn_827A0C20(*(unsigned int *)(param_3 + 8));
    dVar16 = (double)fn_82F68918((double)(float)(param_1 - (double)*pfVar8));
    dVar17 = (double)(float)dVar16;
    dVar16 = (double)fn_82F68918((double)(float)(param_2 - (double)pfVar8[1]));
    dVar16 = (double)(float)dVar16;
    uVar5 = fn_826933E8();
    bVar4 = false;
    bVar11 = false;
    if ((((double)*(float *)(param_3 + 0x4c) == dVar17) &&
        ((double)*(float *)(param_3 + 0x50) == dVar16)) &&
       ((uVar5 / 1000 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_3 + 0x54) + 300))) {
      bVar4 = (*(unsigned short *)(param_3 + 0x68) >> 9 & 1) == 0;
      bVar11 = !bVar4;
      uVar12 = *(unsigned short *)(param_3 + 0x68) | 0x200;
    }
    else {
      uVar12 = *(unsigned short *)(param_3 + 0x68) & 0xfdff;
    }
    *(float *)(param_3 + 0x4c) = (float)dVar17;
    *(unsigned short *)(param_3 + 0x68) = uVar12;
    *(float *)(param_3 + 0x50) = (float)dVar16;
    *(int *)(param_3 + 0x54) = (int)(uVar5 / 1000);
    lVar6 = fn_827A0EB8(dVar17,dVar16,*(unsigned int *)(param_3 + 8));
    if ((int)lVar6 != -1) {
      fn_827A3A50(param_3,lVar6,*(unsigned short *)(param_3 + 0x68) >> 1 & 1);
      uVar12 = *(unsigned short *)(param_3 + 0x68);
      if (((uVar12 >> 1 & 1) != 0) && ((uVar12 >> 5 & 1) == 0)) {
        *(unsigned short *)(param_3 + 0x68) = uVar12 | 0x20;
        if ((bVar4) || (bVar11)) {
          fn_82791070(&piStack_78,*(unsigned int *)(*(int *)(param_3 + 8) + 8),lVar6,auStack_80)
          ;
          if (((piStack_78 == (int *)0x0) || (iStack_74 < 0)) ||
             (bVar11 = false, piStack_78[1] <= iStack_74)) {
            bVar11 = true;
          }
          if (bVar11) {
            return;
          }
          piVar3 = *(int **)(iStack_74 * 4 + *piStack_78);
          uVar7 = fn_8278FDC8(piVar3);
          uVar5 = (unsigned __int64)auStack_80[0];
          if (bVar4) {
            iVar10 = *piVar3;
            uVar13 = uVar5;
            if (uVar5 != 0) {
              puVar15 = (unsigned short *)(auStack_80[0] * 2 + iVar10);
              do {
                puVar15 = puVar15 + -1;
                uVar1 = *puVar15;
                iVar9 = fn_826BCD88(0xffffffff820094c8,uVar1);
                if ((iVar9 != 0) || (iVar9 = fn_826BCD88(0xffffffff820083c8,uVar1), iVar9 == 0))
                break;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (uVar5 < (uVar7 & 0xffffffff)) {
              puVar15 = (unsigned short *)(auStack_80[0] * 2 + iVar10);
              do {
                uVar1 = *puVar15;
                iVar10 = fn_826BCD88(0xffffffff820094c8,uVar1);
                if ((iVar10 != 0) || (iVar10 = fn_826BCD88(0xffffffff820083c8,uVar1), iVar10 == 0))
                break;
                uVar5 = uVar5 + 1;
                puVar15 = puVar15 + 1;
              } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
            }
          }
          else {
            uVar13 = 0;
            uVar5 = uVar7;
          }
          uVar2 = piVar3[7];
          lVar14 = uVar2 + uVar5;
          fn_827A3A50(param_3,lVar14,*(unsigned short *)(param_3 + 0x68) >> 1 & 1);
          lVar6 = uVar2 + uVar13;
        }
        else {
          lVar14 = lVar6;
          if ((uVar12 >> 6 & 1) != 0) {
            return;
          }
        }
        fn_8279C658(*(unsigned int *)(param_3 + 8),lVar6,lVar14);
      }
    }
  }
  return;
}

