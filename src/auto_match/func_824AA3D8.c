#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_824AA3D8(unsigned __int64 param_1,int param_2,int *param_3,int param_4,int (**param_5)())

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  
  (**(int (***)())*param_3)(param_3,&uStack_50,&uStack_4c);
  iVar6 = (int)in_r0;
  fVar2 = (float)((uStack_4c - param_4) + 1);
  iVar1 = *(int *)(param_2 + 0x3c);
  fVar3 = (float)uStack_50 - fVar2;
  fVar4 = (float)uStack_50;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = fVar2;
  }
  uStack_48 = (unsigned __int64)fVar4;
  uVar7 = uStack_48 & 0xffffffff;
  uStack_50 = (((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF);
  if ((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) <= uStack_4c) {
    do {
      (**(int (***)())(*param_3 + 4))(param_3,uVar7,&uStack_48);
      puVar5 = (unsigned int *)
               (*(int *)((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) + 0x40) + ((-(unsigned int)(iVar1 != 0) & 0xfffffffc) + 10) * 0x40
                + 0x10 & 0xfffffff0);
      in_register_000104d0 = *puVar5;
      in_register_000104d4 = puVar5[1];
      in_register_000104d8 = puVar5[2];
      in_vr77 = puVar5[3];
      if ((uVar7 & 0xffffffff) != (unsigned __int64)uStack_50) {
        (*param_5)();
      }
      iVar6 = (int)in_r0;
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) <= (unsigned __int64)uStack_4c);
  }
  puVar5 = (unsigned int *)(iVar6 + (int)param_1 & 0xfffffff0);
  *puVar5 = in_register_000104d0;
  puVar5[1] = in_register_000104d4;
  puVar5[2] = in_register_000104d8;
  puVar5[3] = in_vr77;
  return param_1;
}

