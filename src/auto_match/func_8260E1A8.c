extern unsigned int *auStack_20;
extern int fn_825359D8();
extern int fn_82569980();


void fn_8260E1A8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned int auStack_20 [4];
  
  iVar1 = fn_82569980(param_1,*(unsigned int *)(param_3 + 0x1c) & 0xff);
  if ((param_5 == 0) && (iVar1 != -1)) {
    auStack_20[0] = *(unsigned int *)(param_3 + 0x10);
    fn_825359D8(auStack_20,
                      *(unsigned int *)(*(int *)((int)param_1 + 0xd8) + iVar1 * 0x30 + 0x10),0,
                      *(unsigned int *)(**(int **)((int)param_1 + 0x60) + 0x84c),0xffffffff83296bc0,
                      0xffffffff83296bd0);
  }
  return;
}

