extern int fn_82230300();
extern int fn_82529320();
extern int fn_8265CA20();
extern int (*lbl_821B9978[])();



void fn_82441CB0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = (unsigned int)lbl_821B9978;
  lbl_821B9978[2](param_1);
  if (*(unsigned int *)param_1[1] != 0) {
    fn_82529320(*(unsigned int *)param_1[1],0);
    *(unsigned int *)param_1[1] = 0;
  }
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    fn_82230300(uVar1 + 8,1,0);
    fn_8265CA20(uVar1);
  }
  return;
}

