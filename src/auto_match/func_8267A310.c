extern int fn_824B4298();


int fn_8267A310(int self,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(self + 0xc);
  uVar1 = *(unsigned int *)(*(int *)(self + 8) + 8);
  if ((uVar2 + param_3 & 0xffffffff) > uVar1) {
    param_3 = uVar1 - uVar2;
  }
  if (0 < param_3) {
    fn_824B4298(param_2,*(unsigned int *)(*(int *)(self + 8) + 4) + uVar2,param_3);
    *(int *)(self + 0xc) = param_3 + *(int *)(self + 0xc);
  }
  return param_3;
}

