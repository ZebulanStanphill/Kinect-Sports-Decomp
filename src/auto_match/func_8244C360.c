extern unsigned int *auStack_60;
extern int fn_82435FA8();
extern int fn_824E17D8();
extern unsigned int lbl_82191FCC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C78F0;


double fn_8244C360(int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  float *pfVar2;
  float fVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  unsigned char auStack_60 [16];
  float afStack_50 [16];
  
  dVar5 = (double)**(float **)(param_2 + 0x1a0);
  dVar4 = (double)fn_824E17D8(*(unsigned int *)(param_2 + 0x24));
  (**(int (***)())(*param_1 + 0x1c))
            ((double)(float)(dVar4 * (double)lbl_82191FCC + dVar5),auStack_60,param_1,param_3,0);
  fVar8 = *(float *)(((unsigned int)(auStack_60 + in_r0) & 0xfffffff0) + 4);
  fVar9 = *(float *)(((unsigned int)(auStack_60 + in_r0) & 0xfffffff0) + 8);
  uVar1 = *(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 4) + 0x50U & 0xfffffff0;
  fVar6 = *(float *)(uVar1 + 4);
  fVar7 = *(float *)(uVar1 + 8);
  fn_82435FA8((double)ltcg_pool_0_0f,afStack_50,param_1,param_3,0);
  fVar3 = lbl_831C78F0;
  uVar1 = (int)afStack_50 + in_r0 & 0xfffffff0;
  fVar6 = (fVar8 - fVar6) * *(float *)(uVar1 + 4) + 0.0 + (fVar9 - fVar7) * *(float *)(uVar1 + 8);
  pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar6;
  pfVar2[1] = fVar6;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar6;
  return (double)(afStack_50[0] / fVar3);
}

