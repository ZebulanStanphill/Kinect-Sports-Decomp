extern int fn_8306F3A8();
extern int fn_830743D0();
extern int fn_83074490();
extern int fn_83075D90();
extern unsigned int lbl_82005718;
extern unsigned int lbl_821AAD20;


double fn_830748A8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float *pfVar1;
  float *pfVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  
  fn_830743D0();
  if (*(char *)(param_2 + 0xd08) != '\0') {
    fn_83074490(param_1,param_2,param_3);
  }
  lVar3 = 0;
  pfVar2 = (float *)(param_2 + 0x40c);
  dVar5 = (double)lbl_821AAD20;
  do {
    pfVar1 = pfVar2 + -0x13;
    pfVar2 = pfVar2 + 1;
    dVar5 = (double)(float)((double)(*pfVar1 * *pfVar2) + dVar5);
    fn_83075D90((double)(*pfVar1 * *pfVar2),param_4,lVar3);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 0x14);
  dVar4 = (double)fn_8306F3A8(param_1,param_2,param_3);
  return (double)(float)(dVar4 * (double)(float)(dVar5 * (double)lbl_82005718));
}

