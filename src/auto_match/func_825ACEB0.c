extern unsigned int *auStack_30;
extern int fn_825AD738();
extern int fn_825AD920();
extern int fn_8265CA20();
extern unsigned int lbl_832978BC;
extern unsigned int lbl_832978C0;


void fn_825ACEB0(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  unsigned char auStack_30 [48];
  
  cVar1 = *(char *)((int)*(int **)(lbl_832978BC + 4) + 0x21);
  piVar3 = *(int **)(lbl_832978BC + 4);
  while (cVar1 == '\0') {
    fn_825AD920(0xffffffff832978b8,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_825AD738(auStack_30,piVar3 + 4,*(unsigned int *)piVar3[5]);
    fn_8265CA20(piVar3[5]);
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  *(int *)(lbl_832978BC + 4) = lbl_832978BC;
  *(int *)lbl_832978BC = lbl_832978BC;
  *(int *)(lbl_832978BC + 8) = lbl_832978BC;
  lbl_832978C0 = 0;
  fn_8265CA20(lbl_832978BC);
  return;
}

