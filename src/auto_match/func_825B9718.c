#define NAN(x) ((x) != (x))
extern int fn_825B9678();
extern int fn_82A1DD38();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


int fn_825B9718(double param_1,double param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int in_r6;
  unsigned __int64 in_r7;
  double dVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar2 = fn_825B9678();
  *(unsigned int *)(iVar2 + 0x80) = 8;
  fn_82A1DD38(iVar2 + 0x40,in_r7,0x40);
  *(float *)(iVar2 + 0x2c) = (float)param_1;
  *(float *)(iVar2 + 0x24) = (float)param_2;
  dVar3 = (double)ltcg_pool_0_0f;
  *(float *)(iVar2 + 0x3c) = ltcg_pool_0_0f;
  uVar4 = lbl_821CA460;
  *(unsigned char *)(iVar2 + 0x84) = 2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((param_1 < dVar3) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar3)) << 2)) <
      0.0) {
    uVar4 = lbl_82192734;
  }
  *(unsigned int *)(iVar2 + 0x38) = uVar4;
  if (in_r6 != 0) {
    puVar1 = (unsigned int *)(in_r0 + in_r6 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(unsigned char *)(iVar2 + 0x86) = 1;
    puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  return iVar2;
}

