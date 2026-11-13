extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_74;
extern int fn_82F534D8();
extern int fn_82F59AE8();
extern int fn_82F59F48();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;


void fn_82F50258(unsigned __int64 param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int in_r0;
  __int64 lVar6;
  double dVar7;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_stack_0000002c;
  unsigned char auStack_80 [12];
  float fStack_74;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [48];
  
  pfVar1 = (float *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_00010000;
  pfVar1[1] = in_ACC;
  pfVar1[2] = in_register_00010008;
  pfVar1[3] = in_vr0;
  dVar7 = (double)lbl_821AAD20;
  fStack_74 = lbl_821AAD20;
  pfVar1 = (float *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_00010000;
  pfVar1[1] = in_ACC;
  pfVar1[2] = in_register_00010008;
  pfVar1[3] = in_vr0;
  fn_82F59F48();
  fn_82F534D8(dVar7,(double)in_stack_0000002c,dVar7,dVar7);
  fn_82F59AE8(auStack_70);
  lVar6 = 0x14;
  do {
    pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
    pfVar2 = (float *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    pfVar3 = (float *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    pfVar4 = (float *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    pfVar5 = (float *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    in_register_00010000 =
         *pfVar1 * *pfVar5 +
         in_register_000100d0 * *pfVar4 + *pfVar3 * in_register_00010000 + *pfVar2;
    in_ACC = pfVar1[1] * pfVar5[1] +
             in_register_000100d4 * pfVar4[1] + pfVar3[1] * in_ACC + pfVar2[1];
    in_register_00010008 =
         pfVar1[2] * pfVar5[2] +
         in_register_000100d8 * pfVar4[2] + pfVar3[2] * in_register_00010008 + pfVar2[2];
    in_vr0 = pfVar1[3] * pfVar5[3] + in_vr13 * pfVar4[3] + pfVar3[3] * in_vr0 + pfVar2[3];
    pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
    *pfVar1 = in_register_00010000;
    pfVar1[1] = in_ACC;
    pfVar1[2] = in_register_00010008;
    pfVar1[3] = in_vr0;
    param_2 = param_2 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

