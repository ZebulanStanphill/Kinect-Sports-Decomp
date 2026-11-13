extern int fn_82775060();


void fn_82775758(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto code_r0x827757ac;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto code_r0x827757ac;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_82775060(param_1,param_2,uVar1);
code_r0x827757ac:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

