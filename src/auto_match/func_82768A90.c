typedef unsigned int (*code)(int *);
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826862E0();
extern int fn_826EF278();
extern unsigned int lbl_82014C60;


unsigned int * fn_82768A90(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int iVar1;
  
  param_1[2] = 0;
  *param_1 = &lbl_82014C60;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_826EF278(param_1 + 6);
  if (param_2 != (int *)0x0) {
    fn_8267C4C8(param_2);
  }
  if (param_1[3] != 0) {
    fn_8267C4F0(param_1[3]);
  }
  param_1[3] = param_2;
  if (param_2 != (int *)0x0) {
    iVar1 = (*(code *)(*param_2 + 4))(param_2);
  } else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (param_1[4] != 0) {
    fn_8267C498(param_1[4]);
  }
  param_1[4] = iVar1;
  *(unsigned char *)(param_1 + 8) = 0;
  param_1[9] = 0;
  fn_826862E0(param_1 + 6,param_3);
  *(unsigned short *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  return param_1;
}

