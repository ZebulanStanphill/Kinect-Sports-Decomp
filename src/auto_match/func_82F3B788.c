extern unsigned int *auStack_28;
extern unsigned int uStack_30;


unsigned __int64 fn_82F3B788(int *param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack_30;
  unsigned __int64 auStack_28 [5];
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_2 < (unsigned int)param_1[0x1b]) {
    if ((param_1[0x1c] == 0) || ((param_1[0x13] & 1U) == 0)) {
      uVar1 = 0xffffffffc00d3a9e;
    }
    else {
      auStack_28[0] = 0;
      uStack_30 = 0;
      uVar1 = (**(int (***)())(*param_1 + 0x44))(param_1,param_2,auStack_28,&uStack_30);
      if (-1 < (int)uVar1) {
        if ((auStack_28[0] < 0x100000000) && (uStack_30 < 0x100000000)) {
          *(unsigned int *)((int)auStack_28[0] + param_1[0x1c]) = param_3;
          *(unsigned short *)((int)uStack_30 + param_1[0x1c]) = param_4;
          if ((unsigned int)param_1[0x1a] < (unsigned int)param_4) {
            param_1[0x1a] = (unsigned int)param_4;
          }
          uVar1 = 0;
        }
        else {
          uVar1 = 0xffffffffc00d36bb;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

