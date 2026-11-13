extern int fn_83032B08();
extern int fn_83032D88();
extern int fn_83033838();
extern int fn_83033EA8();
extern int fn_83034130();


unsigned int * fn_830341D0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int iVar2;
  unsigned int aiStack_30;
  
  aiStack_30 = *param_2;
  if (aiStack_30 != 0) {
    fn_83032B08(*param_2);
  }
  puVar1 = (unsigned int *)fn_83033EA8(param_1,&aiStack_30);
  if (puVar1 != (unsigned int *)0x0) { *puVar1=param_3; } else {
    iVar2 = fn_83034130(param_1);
    if (iVar2 != 0) {
      fn_83033838(iVar2,param_2);
      puVar1 = (unsigned int *)(iVar2 + 4);
      *(unsigned int *)(iVar2 + 4) = param_3;
    }
  }
  if (*param_2 != 0) {
    fn_83032D88(*param_2);
    *param_2 = 0;
  }
  return puVar1;
}

