extern unsigned int *auStack_30;
extern int fn_82834458();
extern int fn_82834820();


unsigned int * fn_82834E48(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int auStack_30;
  
  iVar1 = fn_82834458(param_2);
  if ((unsigned int *)(iVar1 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar1 + 0xc) = *param_3;
  }
  fn_82834820(&auStack_30,param_2,iVar1,0);
  *param_1 = auStack_30;
  return param_1;
}

