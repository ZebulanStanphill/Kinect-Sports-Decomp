extern int fn_8267B890();
extern int memcpy();


void fn_826D64E0(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = fn_8267B890(*(unsigned int *)(param_1 + 0x1c),param_3,0);
  *(int *)(param_1 + 0x6c) = uVar1;
  if (uVar1 != 0) {
    *(int *)(param_1 + 0x70) = param_3;
    memcpy(uVar1,param_2,param_3);
  }
  return;
}

