extern int fn_82FF8580();
extern int fn_82FF8648();
extern int fn_82FF86F0();
extern int fn_82FF8B88();
extern int fn_82FF8D30();
extern int fn_82FFE0F0();


unsigned __int64 fn_82FFA278(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  __int64 lVar7;
  int aiStack_50;
  
  lVar7 = param_1 + 4;
  fn_82FF8580(lVar7);
  uVar2 = *(unsigned int *)(param_2 + 0x10);
  uVar3 = *(unsigned int *)(param_2 + 4);
  uVar1 = *(unsigned short *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 8);
  puVar6 = (unsigned int *)fn_82FFE0F0(param_1 + 0x41c,uVar3);
  if (puVar6 == (unsigned int *)0x0) {
    uVar5 = fn_82FF8D30(lVar7,uVar3,iVar4,-(unsigned short)(iVar4 == 0) & uVar1,uVar2 >> 0x1f);
  }
  else {
    uVar5 = fn_82FF8B88(lVar7,*puVar6,iVar4);
  }
  aiStack_50 = 0;
  if ((((int)uVar5 == 1) &&
      (uVar5 = fn_82FF86F0(lVar7,param_3,*(unsigned int *)(param_2 + 0xc),&aiStack_50),
      (int)uVar5 == 1)) && (*(int *)(param_2 + 0xc) != aiStack_50)) {
    uVar5 = 2;
  }
  fn_82FF8648(lVar7);
  return uVar5;
}

