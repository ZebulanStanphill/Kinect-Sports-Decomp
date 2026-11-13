extern int fn_829C90F0();
extern int fn_82F5E0A0();
extern int fn_82F5E1B8();


unsigned char fn_82F5E290(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned char bVar2;
  int iVar1;
  unsigned char bVar3;
  
  bVar2 = fn_82F5E0A0();
  iVar1 = fn_829C90F0(0,0,*param_2);
  bVar3 = fn_82F5E1B8(param_1,param_2);
  return bVar3 & bVar2 & 1 & iVar1 == 0;
}

