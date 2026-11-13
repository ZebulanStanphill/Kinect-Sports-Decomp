extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82011638;
extern unsigned int lbl_8201435C;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_82016250;
extern unsigned int uStack_2;
extern unsigned int uStack_9;


void fn_827B58E0(double param_1,double param_2,double param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,int param_9,int param_10,
                  unsigned short *param_11)

{
  float fVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  unsigned short uVar12;
  unsigned __int64 uVar13;
  unsigned short *in_stack_00000054;
  unsigned char uStack_9;
  unsigned short uStack_2;
  
  *(char *)(param_10 + 6) = (char)param_6;
  *(unsigned char *)(param_10 + 7) = *(unsigned char *)(param_9 + 7);
  fVar9 = lbl_82002AE0;
  *(unsigned char *)(param_10 + 10) = *(unsigned char *)(param_9 + 10);
  *param_11 = (unsigned short)((param_6 & 0xffffffff) << 4);
  fVar11 = lbl_8200D8DC;
  fVar1 = (float)((double)(param_6 & 0xffffffff) / param_1);
  if (fVar1 < fVar9) {
    fVar1 = fVar9;
  }
  bVar2 = *(unsigned char *)(param_9 + 8);
  bVar3 = *(unsigned char *)(param_9 + 9);
  uVar4 = *(unsigned int *)(param_4 + 0x10);
  iVar5 = *(int *)(param_4 + 0xc);
  *in_stack_00000054 = 0x100;
  fVar10 = lbl_82002C5C;
  fVar8 = (float)((iVar5 + (uVar4 & 0x7fffffff) * -2) - 2);
  fVar7 = (float)((double)((float)bVar2 * fVar1) * param_2) * fVar11;
  fVar6 = (float)((double)((float)bVar3 * fVar1) * param_2) * fVar11;
  fVar1 = (float)((double)(float)((double)(param_6 & 0xffffffff) * (double)lbl_820143E0) * param_3 +
                 (double)(fVar6 * lbl_82005344));
  if (fVar8 < fVar1) {
    fVar8 = fVar8 / fVar1;
    fVar7 = fVar7 * fVar8;
    fVar6 = fVar6 * fVar8;
    uStack_2 = (unsigned short)(__int64)(fVar8 * lbl_8201435C + lbl_82002C5C);
    uVar12 = uStack_2;
    uStack_2 = (unsigned short)(__int64)((float)*param_11 * fVar8);
    *param_11 = uStack_2;
    *in_stack_00000054 = uVar12;
    *(unsigned char *)(param_10 + 7) = *(unsigned char *)(param_10 + 7) & 0xfd;
  }
  if (lbl_82016250 < fVar7) {
    fVar7 = lbl_82016250;
  }
  if (lbl_82016250 < fVar6) {
    fVar6 = lbl_82016250;
  }
  fVar1 = fVar6 * lbl_82011638;
  uStack_2 = ((((unsigned __int64)(uStack_2)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)(__int64)(fVar7 * lbl_82011638 + fVar10))) & ((unsigned __int64)0xFF)) << 8));
  *(unsigned char *)(param_10 + 8) = (unsigned char)uStack_2;
  uStack_9 = (unsigned char)(__int64)(fVar1 + fVar10);
  *(unsigned char *)(param_10 + 9) = uStack_9;
  if ((*(unsigned char *)(param_9 + 7) & 0x80) != 0) {
    return;
  }
  if ((*(unsigned char *)(param_9 + 7) & 1) != 0) {
    return;
  }
  uVar13 = (__int64)((float)uStack_9 * fVar11 + fVar10) & 0xffffffff;
  if ((uVar13 == 0) && (uStack_9 != 0)) {
    uVar13 = 1;
  }
  if (fVar6 <= (float)uVar13) {
    return;
  }
  uStack_2 = (unsigned short)(__int64)((float)((unsigned int)*param_11 * (int)uVar13) * (fVar9 / fVar6));
  *param_11 = uStack_2;
  uStack_2 = (unsigned short)(__int64)((float)((unsigned int)*in_stack_00000054 * (int)uVar13) * (fVar9 / fVar6));
  *in_stack_00000054 = uStack_2;
  return;
}

