extern unsigned int *auStack_40;
extern int fn_8265CA20();
extern int fn_828A61C8();


void fn_828A7C40(unsigned __int64 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  unsigned char auStack_40 [16];
  
  cVar1 = *(char *)((int)param_2 + 0x39);
  while (cVar1 == '\0') {
    fn_828A7C40(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    fn_828A61C8(auStack_40,param_2 + 10,*(unsigned int *)param_2[0xb]);
    fn_8265CA20(param_2[0xb]);
    if (0xf < (unsigned int)param_2[8]) {
      fn_8265CA20(param_2[3]);
    }
    param_2[8] = 0xf;
    param_2[7] = 0;
    *(unsigned char *)(param_2 + 3) = 0;
    fn_8265CA20(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return;
}

