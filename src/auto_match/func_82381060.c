typedef unsigned char bool;
extern int fn_823737B8();
extern int fn_82375CA8();
extern int fn_823815D0();
extern int fn_82381948();
extern int fn_82381B20();


void fn_82381060(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  bVar2 = (int)param_2 == 0;
  fn_823815D0(param_1,bVar2,param_3,4);
  uVar1 = *(unsigned int *)(param_1 + 4);
  lVar3 = fn_823737B8(uVar1,param_2);
  if (lVar3 == 0) {
    iVar5 = fn_82381948(param_1,param_2,bVar2,param_3,1);
    if (iVar5 != 0) {
      return;
    }
    uVar6 = 2;
    lVar4 = -1;
  }
  else {
    lVar4 = fn_82381B20(param_1,param_2,param_3);
    if (((int)lVar4 != *(int *)((int)lVar3 + 0x28)) &&
       (iVar5 = fn_82375CA8(uVar1,*(unsigned int *)((int)lVar3 + 0x2c),1), iVar5 != 0)) {
      lVar4 = 1 - lVar4;
    }
    uVar6 = 0xd;
  }
  fn_823815D0(param_1,param_2,lVar4,uVar6);
  return;
}

