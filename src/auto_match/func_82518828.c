extern unsigned int *auStack_30;
extern int fn_825188C8();
extern int fn_82518F80();
extern int fn_8265CA20();
extern int iRam83297928;
extern unsigned int uRam8329792c;


void fn_82518828(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  unsigned char auStack_30 [48];
  
  cVar1 = *(char *)((int)*(int **)(iRam83297928 + 4) + 0x21);
  piVar3 = *(int **)(iRam83297928 + 4);
  while (cVar1 == '\0') {
    fn_82518F80(0xffffffff83297924,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_825188C8(auStack_30,piVar3 + 4,*(unsigned int *)piVar3[5]);
    fn_8265CA20(piVar3[5]);
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  *(int *)(iRam83297928 + 4) = iRam83297928;
  *(int *)iRam83297928 = iRam83297928;
  *(int *)(iRam83297928 + 8) = iRam83297928;
  uRam8329792c = 0;
  fn_8265CA20(iRam83297928);
  return;
}

