extern int fn_8289EE00();
extern int fn_828DF768();


unsigned int * fn_828E3958(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  struct {unsigned node; unsigned char ok;} result;
  
  uVar1 = *param_3;
  iVar2 = fn_8289EE00(param_2);
  if ((unsigned int *)(iVar2 + 0xc) != (unsigned int *)0x0) {
    unsigned *value=(unsigned *)(iVar2+0xc); value[0]=uVar1; value[1]=param_4;
  }
  fn_828DF768(&result.node,param_2,iVar2,0);
  *(char *)(param_1 + 1) = result.ok;
  puVar3 = (unsigned int *)(result.ok ? 0 : param_4);
  *param_1 = result.node;
  if (puVar3 != (unsigned int *)0x0) {
    (*(int (**)())*puVar3)(puVar3,1);
  }
  return param_1;
}

