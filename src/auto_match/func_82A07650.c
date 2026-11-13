#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_82A03570();
extern int fn_82A07430();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000040;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;


void fn_82A07650(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int uVar11;
  unsigned int uVar12;
  float in_stack_0000004c;
  unsigned int auStack_b0 [2];
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_90;
  unsigned char auStack_80 [128];
  
  iVar4 = (int)param_5;
  uVar5 = (unsigned int)((unsigned __int64)param_5 >> 0x20);
  uVar3 = fn_82F6A548();
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000040 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar10 = (double)lbl_821AAD20;
  if ((dVar10 < (double)in_stack_0000004c) && (iVar4 != 0)) {
    lVar7 = CONCAT44(uVar5,iVar4);
    dVar8 = (double)lbl_82002AE0;
    dVar9 = extraout_f1;
    do {
      if (dVar10 < (double)*(float *)((int)param_3 + 0xc)) {
        puVar1 = (unsigned int *)((int)in_r0 + (int)param_3 & 0xfffffff0);
        uVar5 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        if (dVar10 < dVar9) {
          iVar4 = fn_82A03570(dVar9,uVar3,auStack_80);
          altv207_13(in_vs32,in_vs43);
          if ((iVar4 != 0) &&
             (uVar3 = fn_82A07430(param_2,param_6,auStack_b0), auStack_b0[0] != 0)) {
            uStack_a0 = (unsigned __int64)auStack_b0[0];
            uStack_a8 = uVar3 & 0xffffffff;
          }
        }
        uVar3 = fn_82A07430(param_2,param_6,auStack_b0);
        uVar6 = (unsigned __int64)auStack_b0[0];
        if (uVar6 != 0) {
          if (uVar6 <= (uVar3 & 0xffffffff)) {
            uVar3 = uVar6 - 1;
          }
          uStack_98 = uVar3 & 0xffffffff;
          uStack_90 = (unsigned __int64)auStack_b0[0];
          *(float *)param_4 =
               (float)(dVar8 - (double)((float)uStack_98 / (float)uStack_90)) * *(float *)param_4;
        }
      }
      lVar7 = lVar7 + -1;
      param_3 = param_3 + 0x10;
      param_4 = param_4 + 4;
    } while (lVar7 != 0);
  }
  fn_82F6A594();
  return;
}

