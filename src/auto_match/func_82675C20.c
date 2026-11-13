typedef unsigned char bool;
extern int fn_8267A0E0();


bool fn_82675C20(unsigned int *param_1,unsigned param_2,unsigned param_3,int param_4,int param_5)
{
  if ((param_1[7] == 0) || (*(unsigned int *)(param_1[7] + 0xd8) == 0)) return 0;
  (*(int (**)())(*param_1 + 0x44))(param_1);
  if (param_4 == 1) param_1[0xd] = 0x18280086;
  else if (param_4 == 2) param_1[0xd] = 0x18280086;
  else if (param_4 == 9) param_1[0xd] = 0x4900002;
  else return 0;
  return fn_8267A0E0(param_2,param_3,param_5 + 1,0,param_1[0xd],param_1 + 10) == 0;
}
