typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_30;
extern int fn_8234B0C8();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823D2898(unsigned int *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float fVar6;
  int in_r0;
  bool bVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float afStack_40;
  unsigned char auStack_30 [16];
  
  fVar6 = lbl_821CA460;
  if ((param_3 + 2 != (float *)0x0) && (*(char *)(param_3 + 2) != '\0')) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    puVar4 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    uVar3 = *(unsigned int *)(param_2 + 0x118);
    afStack_40 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    puVar5 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    fn_8234B0C8((double)((fVar2 - fVar1) * (afStack_40 - fVar6) + fVar1),
                      (unsigned __int64)uVar3 + 0x2c0);
    param_3 = param_3 + 10;
    if (param_3 == (float *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = *param_3 != 0.0;
    }
    if ((bVar7) && (*(int *)(param_2 + 0x24) == 0)) {
      afStack_40 = *param_3;
      afStack_40 =
           (float)fn_825354B8(&afStack_40,auStack_30,0,*(unsigned int *)*param_1,
                                    0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(&afStack_40);
    }
  }
  return;
}

