extern int fn_82359698();
extern int fn_8236B008();
extern int fn_8236B4F0(int, float);
extern int fn_823D6088();
extern float lbl_821CA45C[];


void fn_823D1610(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_8236B008();
  fn_82359698(uVar1,9);
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0(param_1,lbl_821CA45C[1]);
  }
  fn_823D6088(param_1 + 0x9f8);
  return;
}

