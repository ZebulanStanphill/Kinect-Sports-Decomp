extern int fn_8267C498();
extern int fn_8278E8D0();
extern int fn_82794B88();


void fn_82794D68(int param_1,int param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_82794B88();
  uVar2 = fn_8278E8D0(uVar1,param_2);
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_8267C498(*(int *)(param_1 + 0x18));
  }
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  return;
}

