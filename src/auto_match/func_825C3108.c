extern int fn_8251E530();
extern int fn_825932A8();
extern int fn_825A2AF8();
extern int fn_825A2D10();
extern unsigned int lbl_821CA460;


unsigned int fn_825C3108(int param_1,unsigned int *param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x50);
  if (((*(int *)(param_1 + 0x48) != 0) &&
      (lVar3 = fn_825932A8(param_3,*(unsigned int *)(param_1 + 0x4c) & 0xffff), lVar3 != 0)) &&
     (iVar4 = fn_825A2AF8(param_3,param_3 + 0x230,param_1 + 0x48,1,uVar1), iVar4 != 0)) {
    if ((param_2 != (unsigned int *)0x0) && ((*param_2 & 0x40) != 0)) {
      uVar2 = lbl_821CA460;
      if ((*param_2 & 0x40) != 0) {
        uVar2 = param_2[0xb];
      }
      *(unsigned int *)(iVar4 + 0x20) = uVar2;
    }
    *(int *)(iVar4 + 0x4c) = (int)lVar3;
    uVar2 = *(unsigned int *)(iVar4 + 0x40);
    if ((((uVar2 & 8) == 0) || ((uVar2 & 1) != 0)) || ((uVar2 & 2) != 0)) {
      return *(unsigned int *)(iVar4 + 0x3c);
    }
    fn_825A2D10(param_3,iVar4);
    fn_8251E530(param_3 + 0x230,iVar4);
  }
  return 0;
}

