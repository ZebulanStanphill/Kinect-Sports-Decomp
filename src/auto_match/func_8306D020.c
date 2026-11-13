extern unsigned int *auStack_50;
extern int fn_82539560();
extern int fn_82A8CFD0();
extern int fn_82F68CC0();
extern int fn_8306E890();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021544;
extern unsigned int lbl_821AAD20;


void fn_8306D020(double param_1,__int64 param_2,int param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  unsigned char auStack_50 [80];
  
  uVar2 = fn_82A8CFD0(auStack_50,(unsigned __int64)*(unsigned int *)(param_3 + 0xd80) * 0x5994 + param_2,
                            param_3 + 0xd8c);
  fn_82F68CC0(param_3 + 0xd8c,uVar2,0x20);
  *(float *)(param_3 + 0xd88) = (float)((double)*(float *)(param_3 + 0xd88) + param_1);
  uVar2 = fn_8306E890((double)lbl_82021544,param_1);
  dVar3 = (double)*(float *)(param_3 + 0xd84);
  fVar1 = lbl_82002AE0;
  if ((double)lbl_821AAD20 < dVar3) {
    fVar1 = (float)((double)*(float *)(param_3 + 0xd88) / dVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(fVar1 * fVar1 * fVar1),(double)lbl_821AAD20,dVar3,uVar2);
}

