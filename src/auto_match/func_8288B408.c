extern int fn_823AA970();
extern int fn_82897BD0();


void fn_8288B408(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  *(int *)(param_1 + 0x38) = (int)param_2;
  uVar1 = fn_82897BD0(param_2);
  *(unsigned int *)(param_1 + 0x3c) = uVar1;
  uVar1 = fn_823AA970(param_2);
  *(unsigned int *)(param_1 + 0x40) = uVar1;
  return;
}

