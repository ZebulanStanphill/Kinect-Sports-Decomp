extern int fn_82278B40();
extern int fn_82359698();
extern unsigned int lbl_821955F0;
extern unsigned int lbl_82195638;


void fn_8238DF50(int param_1)

{
  float fVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if (((*(int *)(param_1 + 0x28) != 0) &&
      (fVar1 = *(float *)(*(unsigned int *)(param_1 + 8) + 0x9ac), lbl_821955F0 <= fVar1)) &&
     (fVar1 <= lbl_82195638)) {
    fn_82278B40(uVar2 + 0x9a0);
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_82359698(uVar2,*(unsigned int *)(param_1 + 0x2c));
  }
  return;
}

