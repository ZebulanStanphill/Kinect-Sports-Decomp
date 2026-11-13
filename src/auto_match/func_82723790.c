extern int fn_82681898();
extern int fn_826957D0();
extern int fn_82697610();
extern int fn_827A1590();
extern unsigned int lbl_8200E890;


void fn_82723790(int param_1)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar5;
  double dVar6;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar4 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar4 == 4)) {
    iVar4 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      lVar3 = fn_82697610(uVar2,uVar1);
      dVar6 = lbl_8200E890;
      if ((-1 < lVar3) &&
         (uVar5 = fn_827A1590(*(unsigned int *)(iVar4 + 0xa0)), dVar6 = lbl_8200E890,
         uVar5 != 0xffffffff)) {
        dVar6 = (double)uVar5;
      }
      fn_82681898(dVar6,*(unsigned int *)(param_1 + 4));
    }
  }
  return;
}

