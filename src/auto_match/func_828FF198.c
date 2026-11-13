extern int fn_828F9A60();
extern int fn_828FCAC0();
extern int memcpy();


unsigned __int64 fn_828FF198(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int * apiStack_30;
  
  if ((*(unsigned int *)(param_1 + 0x3c) & 0x100000) == 0) {
    uVar2 = fn_828FCAC0(*(unsigned int *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0x5c),
                          *(int *)(param_1 + 0x60) << 2,param_2,param_1,0xffffffff828ff190,param_3);
  }
  else {
    uVar2 = fn_828F9A60(*(int *)(param_1 + 0x60) << 2,&apiStack_30);
    if (-1 < (int)uVar2) {
      uVar2 = (**(int (***)())(*apiStack_30 + 0x10))();
      uVar1 = *(unsigned int *)(param_1 + 0x5c);
      uVar3 = (**(int (***)())(*apiStack_30 + 0xc))(apiStack_30);
      memcpy(uVar3,uVar1,uVar2);
      uVar2 = 0;
      *param_2 = apiStack_30;
    }
  }
  return uVar2;
}

