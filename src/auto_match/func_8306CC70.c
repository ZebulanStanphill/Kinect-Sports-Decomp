extern unsigned int *auStack_40;
extern int fn_8306D678();
extern int fn_8306D688();
extern int fn_8306D690();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8315FA80;


unsigned __int64 fn_8306CC70(__int64 param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_40 [64];
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    param_1 = param_1 + 0x78;
    fn_8306D678(auStack_40,param_1);
    altv207_13(in_vs32,in_vs35);
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    dVar4 = (double)lbl_8200133C;
    if (lbl_8315FA80 == 0) {
      *(float *)(param_2 + 8) = (float)((double)*(float *)(param_2 + 8) * dVar4);
    }
    dVar3 = (double)fn_8306D688(param_1);
    *(float *)(param_2 + 0x10) = (float)dVar3;
    if (lbl_8315FA80 == 0) {
      *(float *)(param_2 + 0x10) = (float)(dVar3 * dVar4);
    }
    dVar4 = (double)fn_8306D690(param_1);
    *(float *)(param_2 + 0x14) = (float)dVar4;
  }
  return uVar2;
}

