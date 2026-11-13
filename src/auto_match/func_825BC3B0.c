extern unsigned int *auStack_20;
extern int fn_82535298();
extern int fn_825359D8();
extern int fn_82569980();


void fn_825BC3B0(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int auStack_20 [2];
  
  iVar2 = -1;
  if (*(unsigned int *)(param_2 + 0x20) != 0xffffffff) {
    iVar2 = fn_82569980(param_3,*(unsigned int *)(param_2 + 0x20) & 0xff);
  }
  iVar1 = **(int **)((int)param_3 + 0x60);
  if (iVar2 == -1) {
    auStack_20[0] = *(unsigned int *)(param_2 + 0x14);
    uVar3 = fn_82535298(auStack_20,*(unsigned int *)(iVar1 + 0x84c),0xffffffff83296bc0,
                              0xffffffff83296bd0);
  }
  else {
    auStack_20[0] = *(unsigned int *)(param_2 + 0x14);
    uVar3 = fn_825359D8(auStack_20,
                              *(unsigned int *)(*(int *)((int)param_3 + 0xd8) + iVar2 * 0x30 + 0x10),4
                              ,*(unsigned int *)(iVar1 + 0x84c),0xffffffff83296bc0,0xffffffff83296bd0)
    ;
  }
  *(unsigned int *)(*(int *)(param_2 + 0x10) * 4 + param_1) = uVar3;
  return;
}

