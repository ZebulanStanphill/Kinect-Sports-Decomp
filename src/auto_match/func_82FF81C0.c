extern unsigned int *auStack_30;
extern int fn_82FF7EB0();
extern int fn_8301B248();


unsigned __int64 * fn_82FF81C0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  unsigned int auStack_30;
  
  fn_82FF7EB0(&auStack_30,param_1,param_2);
  puVar2 = (unsigned __int64 *)(-(unsigned int)(*(unsigned int *)(param_1 + 4) != auStack_30) & auStack_30 + 8);
  if (puVar2 == (unsigned __int64 *)0x0) {
    puVar1 = (unsigned __int64 *)fn_8301B248(param_1);
    if (puVar1 != (unsigned __int64 *)0x0) {
      puVar2 = puVar1 + 1;
      *puVar1 = param_2;
      *(unsigned int *)(puVar1 + 1) = param_3;
    }
  }
  else {
    *(unsigned int *)puVar2 = param_3;
  }
  return puVar2;
}

