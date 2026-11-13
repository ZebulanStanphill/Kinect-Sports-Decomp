extern unsigned int *auStack_30;
extern int fn_8288C2E0();
extern int fn_828B27A8();


unsigned int * fn_828C9BD0(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned char auStack_30 [1];
  
  fn_8288C2E0(param_1,auStack_30);
  puVar1 = (unsigned int *)*param_2;
  uVar2 = *(unsigned int *)*param_1;
  for (puVar3 = (unsigned int *)*puVar1; puVar3 != puVar1; puVar3 = (unsigned int *)*puVar3) {
    fn_828B27A8(param_1,uVar2,puVar3 + 2);
  }
  return param_1;
}

