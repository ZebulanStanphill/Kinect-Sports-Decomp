extern void *memcpy(void *,const void *,unsigned);


unsigned int fn_82C04CE0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = (*(int (**)())(*param_1 + 0x5c))(param_1);
  if(iVar1 != 0) *param_4 = 0;
  else { uVar2 = param_1[0xc] - param_1[0xd];
  if(param_3 > uVar2) *param_4=uVar2; else *param_4=param_3; }
  memcpy(param_2,(unsigned int)(unsigned int)param_1[0xb] + (unsigned int)(unsigned int)param_1[0xd],*param_4);
  param_1[0xd] = param_1[0xd] + *param_4;
  return 0;
}

