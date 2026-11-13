extern int fn_82276BC8();
extern int fn_82276CD0();
extern int fn_82279D28();
extern int fn_82279E08();
extern int fn_82284B08();
extern int fn_823AB470();
extern int fn_8265CA20();
extern int fn_828EA608();
extern unsigned int lbl_83265988;


void fn_82285650(double param_1,int param_2)

{
  char cVar2;
  int iVar1;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x168);
  *(float *)(param_2 + 0x174) = (float)(param_1 + (double)*(float *)(param_2 + 0x174));
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x170) == 0) {
      fn_82276CD0(param_1,iVar1);
    }
    else {
      fn_82276BC8();
      fn_8265CA20(iVar1);
      *(unsigned int *)(param_2 + 0x168) = 0;
      *(unsigned int *)(param_2 + 0x170) = 0;
    }
  }
  if (*(int *)(param_2 + 0x16c) != 0) {
    fn_82284B08(param_1);
  }
  iVar1 = lbl_83265988;
  if (lbl_83265988 != 0) {
    cVar2 = fn_828EA608(lbl_83265988);
    if (cVar2 != '\0') {
      iVar1 = fn_823AB470(iVar1);
      uVar3 = 0;
      if (iVar1 == 2) goto LAB_82285710;
    }
  }
  uVar3 = 1;
LAB_82285710:
  fn_82279D28(param_2,2,uVar3);
  fn_82279E08(param_1,param_2);
  return;
}

