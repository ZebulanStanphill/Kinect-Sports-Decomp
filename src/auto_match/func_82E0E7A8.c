extern int fn_82D04C78();
extern int fn_82D056B8();


void fn_82E0E7A8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  
  fn_82D056B8(param_3,0xffffffff8214ac90,param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    iVar2 = 0;
    do {
      puVar1 = (unsigned int *)(*(int *)(param_2 + 4) + iVar2);
      fn_82D056B8(param_3,0xffffffff8214accc,*puVar1,puVar1[1]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(param_2 + 8));
  }
  fn_82D04C78(param_3,0xffffffff8214acdc);
  return;
}

