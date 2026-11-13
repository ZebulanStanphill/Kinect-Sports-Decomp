extern unsigned int *fStack00000030;
extern unsigned int fStack00000034;
extern int fn_82539560();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8307DA20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_830797B8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fStack00000030;
  float fStack00000034;
  
  fVar3 = (float)((unsigned __int64)param_5 >> 0x20);
  pfVar2 = (float *)fn_82F6A548();
  fn_8307DA20();
  dVar4 = (double)lbl_821AAD20;
  dVar5 = (double)lbl_82002AE0;
  if (((param_2 & 0xffffffff) != 0) && (0 < param_3)) {
    iVar1 = (int)param_2;
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10),
                 (double)*(float *)(iVar1 + 0x14),dVar5,dVar4);
  }
  fStack00000030 = (float)((unsigned __int64)param_4 >> 0x20);
  *pfVar2 = (float)(dVar5 - dVar4) * fStack00000030 + *pfVar2;
  if (dVar5 <= dVar4) {
    dVar4 = (double)pfVar2[2] / dVar4;
  }
  else {
    dVar4 = (double)(float)(dVar5 - dVar4) * (double)fVar3 + (double)pfVar2[2];
  }
  fStack00000034 = (float)param_4;
  pfVar2[2] = (float)dVar4;
  pfVar2[1] = fStack00000034;
  fn_82F6A594(pfVar2);
  return;
}

