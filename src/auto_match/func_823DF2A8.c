extern int fn_82359698();
extern int fn_8236B4F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D1A54;


void fn_823DF2A8(double param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(float *)(iVar1 + 0xef0) = (float)((double)*(float *)(iVar1 + 0xef0) + param_1);
  if (lbl_831D1A54 < *(float *)(iVar1 + 0xef0)) {
    fn_82359698(iVar1,7);
    if (*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x4b0) + 0xd4) == 0) {
      fn_8236B4F0((double)lbl_821CA460);
    }
  }
  return;
}

