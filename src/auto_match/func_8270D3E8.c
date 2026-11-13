extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_8270D3E8(double param_1,int *param_2,int *param_3,unsigned __int64 param_4,int param_5,
                  unsigned __int64 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  struct { int first; int second; } stack_pair_60;

  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  (**(int (***)())(*param_3 + 0x10))(param_3,&stack_pair_60.first,0xffffffff8200e7fc,6);
  iVar1 = stack_pair_60.first;
  if (*param_2 != 0) {
    fn_8267C4F0();
  }
  iVar2 = stack_pair_60.second;
  *param_2 = iVar1;
  if (param_2[2] != 0) {
    fn_8267C4F0();
  }
  iVar1 = iStack_58;
  param_2[2] = iVar2;
  if (param_2[3] != 0) {
    fn_8267C4F0();
  }
  iVar2 = iStack_54;
  param_2[3] = iVar1;
  if (param_2[4] != 0) {
    fn_8267C4F0();
  }
  iVar1 = iStack_50;
  param_2[4] = iVar2;
  if (param_2[5] != 0) {
    fn_8267C4F0();
  }
  iVar2 = iStack_4c;
  param_2[5] = iVar1;
  if (param_2[6] != 0) {
    fn_8267C4F0();
  }
  param_2[6] = iVar2;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_2[7] != 0) {
    fn_8267C4F0();
  }
  param_2[7] = (int)param_4;
  param_2[9] = (int)(float)param_1;
  param_2[8] = param_5;
  param_2[1] = 0;
  param_2[0x13] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[10] = *param_7;
  param_2[0xb] = param_7[1];
  param_2[0xc] = param_7[2];
  param_2[0xd] = param_7[3];
  param_2[0xe] = param_7[4];
  param_2[0xf] = param_7[5];
  param_2[0x10] = -0x7ceaae70;
  param_2[0x11] = -0x7ceaad20;
  return;
}

