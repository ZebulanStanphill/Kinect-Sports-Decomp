extern unsigned int *auStack_80;
extern int fn_82D1EB20();
extern int fn_82D2D400();


int fn_82D25C48(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4)

{
  int iVar1;
  unsigned char auStack_80 [80];
  
  iVar1 = fn_82D2D400(param_1 + 0x20,auStack_80);
  *(unsigned int *)(iVar1 + 0x30) = 0xffffffff;
  *(unsigned int *)(iVar1 + 0x14) = 0;
  *(unsigned int *)(iVar1 + 0x18) = 0;
  *(unsigned int *)(iVar1 + 0x1c) = 0;
  *(int *)(iVar1 + 8) = (int)param_2;
  *(int *)(iVar1 + 0xc) = (int)param_3;
  *(int *)(iVar1 + 0x10) = (int)param_4;
  fn_82D1EB20(param_1,param_2 + 0x10,param_3 + 0x10,param_4 + 0x10,iVar1 + 0x20,1);
  return iVar1;
}

