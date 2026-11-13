extern unsigned int *auStack_30;


unsigned __int64 fn_82E5E628(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30 [12];
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    auStack_30[0] = 0;
    uVar3 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff8214c720,auStack_30);
    uVar1 = (int)((uVar3 & 0xffffffff) >> 0x1f) - 1U & auStack_30[0];
    auStack_30[0] = uVar1 | 0x80000000;
    if (param_2 == 0) {
      auStack_30[0] = uVar1 & 0x7fffffff;
    }
    uVar2 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff8214c720);
  }
  return uVar2;
}

