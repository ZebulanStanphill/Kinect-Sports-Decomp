extern int fn_8288D230();
extern int fn_82F63CA0();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_8288E548(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uStack00000024;
  
  uVar2 = (unsigned __int64)param_1[1];
  uVar1 = (int)(param_1[1] - *param_1) >> 2;
  uStack00000024 = param_3;
  if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_8288D230(param_1,uVar2,param_2 - (__int64)(int)uVar1,&stack0x00000024);
  }
  else if (((param_2 & 0xffffffff) < (unsigned __int64)uVar1) &&
          (uVar3 = (param_2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1, (uVar3 & 0xffffffff) != uVar2))
  {
    fn_82F63CA0(uVar3,uVar2,0);
    param_1[1] = (unsigned int)uVar3;
  }
  return;
}

