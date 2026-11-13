extern unsigned int *auStack_40;
extern unsigned int fStack_24;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_82539560();
extern int fn_82552BE8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C9D1C;
extern unsigned int lbl_831CA16C;
extern unsigned int lbl_831CA170;
extern unsigned int lbl_831CA174;
extern unsigned int lbl_831CA178;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823B0760(int param_1)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  unsigned int uVar10;
  float fVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  float afStack_50 [4];
  unsigned char auStack_40 [28];
  float fStack_24;
  
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = param_1 + 0x20U & 0xfffffff0;
    fVar9 = *(float *)(uVar1 + 4);
    fVar11 = *(float *)(uVar1 + 8);
    fVar9 = fVar9 * fVar9 + 0.0 + fVar11 * fVar11;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    fVar11 = lbl_831CA170 * lbl_831CA170;
    dVar8 = (double)lbl_831CA178;
    fVar5 = lbl_831CA16C * lbl_831CA16C;
    dVar7 = (double)lbl_831CA174;
    pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar9;
    pfVar2[1] = fVar9;
    pfVar2[2] = fVar9;
    pfVar2[3] = fVar9;
    dVar7 = (double)fn_82539560(ABS((double)afStack_50[0]),(double)fVar5,(double)fVar11,dVar7,dVar8
                                );
    fn_82230110(auStack_40,0xffffffff821b5a44);
    fStack_24 = (float)dVar7;
    fn_8236D0D0(&uStack_60,auStack_40);
    fn_82230300(auStack_40,1,0);
    iVar6 = *(int *)(param_1 + 0x188);
    puVar3 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar4 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar12;
    puVar4[3] = uVar13;
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 0x184) == 0) {
        if (*(float *)(param_1 + 0x14c) <= ltcg_pool_0_0f) {
          if (ltcg_pool_0_0f <= *(float *)(param_1 + 0x14c)) {
            iVar6 = param_1 + 0xdc;
            if (*(float *)(param_1 + 0x26c) <= lbl_831C9D1C) {
              iVar6 = param_1 + 0xd0;
            }
          }
          else {
            iVar6 = param_1 + 0xd8;
          }
        }
        else {
          iVar6 = param_1 + 0xd4;
        }
      }
      else {
        iVar6 = param_1 + 0xe0;
      }
    }
    else {
      iVar6 = param_1 + 0xe4;
    }
    fn_82552BE8(*(unsigned int *)(param_1 + 0x110),iVar6,afStack_50,&uStack_60);
    fn_822CD140(&uStack_60);
  }
  return;
}

