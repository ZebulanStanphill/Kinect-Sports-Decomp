extern int fn_824C3380();
extern int fn_8265C9E0();


unsigned int * fn_824C2C30(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_8265C9E0(8);
  uVar2 = uVar1 ? fn_824C3380(uVar1,*(unsigned int *)(param_2 + 4)) : 0;
  *param_1 = uVar2;
  return param_1;
}

