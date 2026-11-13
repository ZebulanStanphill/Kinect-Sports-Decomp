extern int fn_828FA8D8();
extern int fn_828FAB00();


void fn_82936358(unsigned int *param_1)

{
  *(unsigned char *)((int)param_1 + *(unsigned short *)(param_1 + 2) + 0x10) = 0;
  if ((int)param_1[3] != 0) {
    fn_828FA8D8(*param_1,param_1[1],0x1bbd,"%s",param_1 + 4);
  }
  else {
    fn_828FAB00(*param_1,param_1[1],0x1bbe,"%s",param_1 + 4);
  }
  *(unsigned short *)(param_1 + 2) = 0;
  return;
}

