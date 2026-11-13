extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_824C9298();
extern int fn_82529D38();
extern int fn_8253FD80();
extern int fn_8255A160();
extern int fn_8255ACE0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821959A4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_38;


unsigned __int64 fn_824C8FA8(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  float fVar1;
  unsigned int *puVar2;
  int in_r0;
  double dVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fStack_40;
  float fStack_3c;
  unsigned int uStack_38;
  
  fn_82529D38(*param_2,&fStack_40);
  fn_8255A160((double)fStack_3c,(double)lbl_821917C0);
  dVar3 = (double)fn_824C9298(param_2);
  dVar4 = (double)fn_824C9298();
  fVar1 = (float)(dVar3 - dVar4);
  dVar3 = (double)fn_8253FD80((double)(fVar1 / SQRT(fVar1 * fVar1 + lbl_821959A4)));
  fStack_40 = (float)-dVar3;
  uStack_38 = ltcg_pool_0_0f;
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  fStack_3c = (float)ltcg_pool_0_0f;
  fn_8255ACE0(&fStack_40);
  puVar2 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return param_1;
}

