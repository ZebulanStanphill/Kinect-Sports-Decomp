extern int fn_824556F0();
extern int fn_8254E7D8();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;


void fn_824554C8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    fn_824556F0(param_1,param_1 + 0xc);
    *(unsigned int *)(param_1 + 0x90) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x7c) + 4) != 0) {
    fn_8254E7D8((double)lbl_82195530,(double)*(float *)(param_1 + 0x6c));
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (*(int *)(iVar1 + 4) != 0) {
    *(unsigned int *)(iVar1 + 0x1d4) = 0;
    uVar2 = lbl_82192734;
    *(unsigned int *)(iVar1 + 0x1cc) = 0;
    uVar3 = lbl_821CA460;
    *(unsigned int *)(iVar1 + 0x1d0) = uVar2;
    *(unsigned int *)(iVar1 + 0x1e0) = uVar3;
  }
  return;
}

