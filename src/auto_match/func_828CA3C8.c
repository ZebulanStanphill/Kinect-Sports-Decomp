extern unsigned int *auStack_30;
extern int fn_8265CA20();
extern int fn_8288E4B0();
extern int fn_828B22F0();


void fn_828CA3C8(unsigned __int64 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  unsigned char auStack_30 [16];
  
  cVar1 = *(char *)((int)param_2 + 0x49);
  while (cVar1 == '\0') {
    fn_828CA3C8(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    fn_828B22F0(param_2 + 10);
    fn_8265CA20(param_2[10]);
    fn_8288E4B0(auStack_30,param_2 + 6,*(unsigned int *)param_2[7]);
    fn_8265CA20(param_2[7]);
    fn_8265CA20(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x49);
  }
  return;
}

