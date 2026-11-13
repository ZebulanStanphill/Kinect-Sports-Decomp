#define NAN(x) ((x) != (x))
extern unsigned int fStack00000024;
extern int fn_824FE498();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82369900(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int *puVar3;
  float fVar4;
  unsigned __int64 uVar5;
  float in_register_00010014;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float fStack00000024;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    fVar1 = *(float *)(param_2 + 0xa8) * *(float *)(param_2 + 0x8bc);
    fVar2 = *(float *)(param_2 + 0xa0) * *(float *)(param_2 + 0x8bc);
    fVar4 = fVar2 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = fVar2 * *(float *)(param_2 + 0x280) +
            *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4);
    fVar2 = in_register_00010014 - fVar1;
    fStack00000024 = in_register_00010014;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fStack00000024 = fVar1;
    }
    fn_824FE498(param_2);
    uVar5 = 1;
    puVar3 = (unsigned int *)(param_2 + 0xbd0U & 0xfffffff0);
    *puVar3 = in_register_00010020;
    puVar3[1] = in_register_00010024;
    puVar3[2] = in_register_00010028;
    puVar3[3] = in_vr2;
    puVar3 = (unsigned int *)(param_2 + 0xc30U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  return uVar5;
}

