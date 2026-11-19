typedef unsigned char bool;
extern int fn_8267A0E0();


bool fn_82675C20(unsigned int *self,unsigned param_2,unsigned param_3,int param_4,int param_5)
{
  if ((self[7] == 0) || (*(unsigned int *)(self[7] + 0xd8) == 0)) return 0;
  (*(int (**)())(*self + 0x44))(self);
  if (param_4 == 1) self[0xd] = 0x18280086;
  else if (param_4 == 2) self[0xd] = 0x18280086;
  else if (param_4 == 9) self[0xd] = 0x4900002;
  else return 0;
  return fn_8267A0E0(param_2,param_3,param_5 + 1,0,self[0xd],self + 10) == 0;
}
