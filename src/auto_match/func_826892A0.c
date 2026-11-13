extern int fn_8267B890();
extern int fn_82689100();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


unsigned __int64 fn_826892A0(int param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  struct { int first; int second; } stack_pair_40;

  int iStack_38;
  int iStack_34;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = param_2[2];
  iVar6 = param_2[3];
  uVar7 = fn_8267B890(param_3,0x20,0);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar8 = 0;
  }
  else {
    stack_pair_40.first = iVar3 + iVar1;
    stack_pair_40.second = iVar4 + iVar2;
    iStack_38 = iVar5;
    iStack_34 = iVar6;
    uVar8 = fn_82689100(uVar7,param_1,&stack_pair_40.first);
  }
  return uVar8;
}

