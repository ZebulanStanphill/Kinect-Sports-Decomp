extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_827A0C50();
extern unsigned int lbl_82005728;
extern unsigned int lbl_8200E890;


void fn_827235C0(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar3 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar3 == 4)) {
    iVar3 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar5 = (double)fn_826972E0(uVar2,uVar1);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,1);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      uVar4 = fn_827A0C50((double)(float)(dVar5 * lbl_82005728),
                                (double)(float)(dVar6 * lbl_82005728),*(unsigned int *)(iVar3 + 0xa0))
      ;
      dVar5 = lbl_8200E890;
      if (uVar4 != 0xffffffff) {
        dVar5 = (double)uVar4;
      }
      fn_82681898(dVar5,*(unsigned int *)(param_1 + 4));
    }
  }
  return;
}

