typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8306D698();
extern int fn_8306EEF8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E68;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_830798D0(double param_1,int param_2)

{
  float fVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  int in_r0;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x80) - param_1);
  *(float *)(param_2 + 0x80) = fVar1;
  if (fVar1 <= lbl_821AAD20) {
    fn_8306D698(auStack_50,*(unsigned int *)(param_2 + 0xb0),6);
    fn_8306D698(auStack_40,*(unsigned int *)(param_2 + 0xb0),10);
    dVar6 = (double)fn_8306EEF8();
    dVar7 = (double)fn_8306EEF8();
    fVar4 = lbl_82196080;
    fVar1 = lbl_82186E6C - *(float *)(param_2 + 0x80);
    altv207_13(in_vs32,in_vs41);
    altv207_13(in_vs32,in_vs40);
    *(float *)(param_2 + 0x80) = lbl_82186E6C;
    puVar2 = (unsigned int *)(in_r0 + param_2 + 0x60 & 0xfffffff0);
    *puVar2 = in_register_000103f0;
    puVar2[1] = in_register_000103f4;
    puVar2[2] = in_register_000103f8;
    puVar2[3] = in_vr63;
    puVar2 = (unsigned int *)(in_r0 + param_2 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_000103e0;
    puVar2[1] = in_register_000103e4;
    puVar2[2] = in_register_000103e8;
    puVar2[3] = in_vr62;
    fVar3 = lbl_82186E68;
    if (fVar4 < fVar1) {
      dVar5 = (double)(lbl_82002AE0 / fVar1);
      *(bool *)(param_2 + 0x84) = lbl_82186E68 < (float)(dVar5 * dVar6);
      *(bool *)(param_2 + 0x85) = fVar3 < (float)(dVar5 * dVar7);
    }
  }
  return;
}

