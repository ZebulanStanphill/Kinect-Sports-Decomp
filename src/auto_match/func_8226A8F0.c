extern int fn_82809950();
extern float lbl_82193E2C;
extern float lbl_82195738;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8226A8F0(int param_1,float *param_2,int param_3,int param_4,unsigned char *param_5)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  double dVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *param_5 = 0;
  fVar2 = *(float *)(param_1 + 0x28) * param_2[1] + *param_2 * *(float *)(param_1 + 0x24) +
          *(float *)(param_1 + 0x40);
  if (fVar2 < ltcg_pool_0_0f) {
    if ((*(char *)(param_1 + 4) != '\0') && (fVar2 <= *(float *)(param_1 + 0x30) * lbl_82195738)) {
      *param_5 = 1;
    }
    if (-*(float *)(param_1 + 0x30) < fVar2) {
      dVar3 = (double)fn_82809950((double)((-fVar2 / *(float *)(param_1 + 0x30)) *
                                                lbl_82193E2C));
      *(float *)(param_3 + 8) = (float)(dVar3 * (double)*(float *)(param_1 + 0x34));
      return 1;
    }
  }
  return 0;
}

