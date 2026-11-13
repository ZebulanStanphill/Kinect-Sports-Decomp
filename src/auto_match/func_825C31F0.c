extern int fn_8251E530();
extern int fn_825A2AF8();
extern int fn_825A2D10();
extern unsigned int lbl_821CA460;


unsigned int fn_825C31F0(int param_1,unsigned int *param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar3 = *(unsigned int *)(param_1 + 0x50);
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar2 = fn_825A2AF8(param_3,param_3 + 0x230,param_1 + 0x48,2,
                              *(unsigned int *)(param_1 + 0x54)), iVar2 != 0)) {
    if ((param_2 != (unsigned int *)0x0) && ((*param_2 & 0x40) != 0)) {
      uVar1 = lbl_821CA460;
      if ((*param_2 & 0x40) != 0) {
        uVar1 = param_2[0xb];
      }
      *(unsigned int *)(iVar2 + 0x20) = uVar1;
    }
    *(unsigned int *)(iVar2 + 0x50) = uVar3;
    uVar1 = *(unsigned int *)(iVar2 + 0x40);
    if ((((uVar1 & 8) == 0) || ((uVar1 & 1) != 0)) || ((uVar1 & 2) != 0)) {
      return *(unsigned int *)(iVar2 + 0x3c);
    }
    fn_825A2D10(param_3,iVar2);
    fn_8251E530(param_3 + 0x230,iVar2);
  }
  return 0;
}

