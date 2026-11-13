extern int fn_82B7BD28();
extern int fn_82BA03B8();


unsigned int * fn_82BD1FF0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *param_1 = 0;
  uVar1 = *(unsigned int *)(param_2 + 0x5b0);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar3 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar3 != (unsigned int *)0x0) {
    fn_82BA03B8(puVar3,*(unsigned int *)(param_2 + 0x5b0));
  } else {
    puVar3 = (unsigned int *)0x0;
  }
  param_1[1] = puVar3;
  return param_1;
}

