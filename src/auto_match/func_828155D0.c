typedef unsigned char bool;
extern int fn_82821678();


bool fn_828155D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x80);
  iVar1 = fn_82821678(param_3,param_2,uVar2 + 0x20,uVar2,uVar2 + 0x10);
  *param_4 = iVar1;
  if (iVar1 >= 0) return 1;
  *param_4 = 0;
  return 0;
}

