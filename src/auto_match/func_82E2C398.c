extern unsigned int *auStack_50;
extern int fn_82E2ADE0();


unsigned __int64
fn_82E2C398(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *apiStack_60 [4];
  unsigned char auStack_50 [16];
  
  apiStack_60[0] = (int *)0x0;
  iVar1 = (**(int (***)())(*param_1 + 0x84))(param_1,auStack_50);
  if (((iVar1 < 0) ||
      (iVar1 = (**(int (***)())*param_2)(param_2,0xffffffff8214c5a0,apiStack_60), iVar1 < 0)) ||
     (iVar1 = (**(int (***)())(*apiStack_60[0] + 0x84))(apiStack_60[0],auStack_50), iVar1 < 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82E2ADE0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (apiStack_60[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_60[0] + 8))();
  }
  return uVar2;
}

