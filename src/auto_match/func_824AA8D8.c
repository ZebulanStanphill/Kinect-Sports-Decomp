#define NAN(x) ((x) != (x))
extern int fn_824AA3D8();
extern int fn_82539560();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8219250C;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82192730;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_824AA8D8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned char *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float afStack_20 [8];
  
  iVar4 = fn_824AA3D8(afStack_20,param_1,param_2,6,0xffffffff824aa980);
  puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar5 = &lbl_82192730;
  puVar3 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  dVar9 = (double)afStack_20[0];
  dVar8 = (double)lbl_8218E8E8;
  dVar7 = (double)ltcg_pool_0_0f;
  dVar6 = (double)fn_82539560(ABS(dVar9),(double)lbl_82192604,(double)lbl_8219250C,dVar7,dVar8);
  fVar1 = lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar9 < dVar7) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar7)) << 2)) < 0.0)
  {
    fVar1 = *(float *)(puVar5 + 4);
  }
  return -(double)(float)(dVar6 * (double)fVar1 - dVar8);
}

