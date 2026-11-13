extern int fn_8234E808();
extern int fn_824E4400();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;


void fn_82333F40(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  float *pfVar2;
  
  fn_824E4400(param_1 + 0x1e);
  fn_824E4400(param_1 + 0x20,param_2);
  iVar1 = *param_1;
  fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10));
  iVar1 = *(int *)(iVar1 + 0x10);
  *(unsigned int *)(iVar1 + 0x108) = *(unsigned int *)(iVar1 + 0x10c);
  for (pfVar2 = (float *)(param_1 + 8); pfVar2 != (float *)(param_1 + 0x1a); pfVar2 = pfVar2 + 3) {
    pfVar2[2] = (pfVar2[1] - *pfVar2) + *pfVar2;
  }
  fn_8234E808();
  return;
}

