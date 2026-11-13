typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_822ABA88();
extern int fn_8234B0C8();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82370BB8(int param_1,int *param_2,float *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  bool bVar5;
  unsigned __int64 in_r0;
  int iVar6;
  float *pfVar7;
  unsigned __int64 uVar8;
  float *pfVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  float afStack_90 [4];
  unsigned char auStack_80 [128];
  
  pfVar7 = param_3 + 2;
  if ((pfVar7 != (float *)0x0) && (*(char *)pfVar7 != '\0')) {
    bVar5 = false;
    uVar8 = 0;
    if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) != 0) {
      pfVar9 = param_3 + 10;
      do {
        dVar12 = (double)param_3[1];
        dVar11 = (double)*param_3;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        afStack_90[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
        iVar6 = fn_822ABA88(*(unsigned int *)(param_2[4] * 4 + *param_2),uVar8);
        fVar4 = afStack_90[0] - lbl_821CA460;
        uVar1 = *(unsigned int *)(iVar6 + 0x118);
        puVar2 = (unsigned int *)(iVar6 + 0x80U & 0xfffffff0);
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        fn_8234B0C8((double)(float)((double)(float)(dVar12 - dVar11) * (double)fVar4 + dVar11)
                          ,(unsigned __int64)uVar1 + 0x2c0,pfVar7);
        if (pfVar9 == (float *)0x0) {
          bVar10 = false;
        }
        else {
          bVar10 = *pfVar9 != 0.0;
        }
        if (((bVar10) && (!bVar5)) && (*(int *)(iVar6 + 0x24) == 0)) {
          afStack_90[0] = *pfVar9;
          bVar5 = true;
          afStack_90[0] =
               (float)fn_825354B8(afStack_90,auStack_80,0,
                                        *(unsigned int *)(*(int *)(param_1 + 0x7e0) + 0x84c),
                                        0xffffffff83296bc0,0xffffffff83296bd0);
          fn_82536288(afStack_90);
        }
        uVar8 = uVar8 + 1;
      } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_2[4] * 4 + *param_2) + 8))
      ;
    }
  }
  return;
}

