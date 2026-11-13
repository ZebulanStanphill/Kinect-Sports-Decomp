extern unsigned int *auStack_50;
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826FDF58();
extern int fn_8278B458();
extern int fn_8278CD58();
extern int fn_8278E7B0();
extern int fn_82794B88();
extern unsigned int iStack_38;
extern unsigned int uStack_26;


void fn_82794C90(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned char auStack_50 [24];
  int iStack_38;
  unsigned short uStack_26;
  
  iVar2 = fn_8278B458(param_2);
  if (iVar2 == 0) {
    uVar1 = fn_82794B88(param_1);
    uVar3 = fn_8278E7B0(uVar1,param_2);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(unsigned int *)(param_1 + 0x1c) = uVar3;
  }
  else {
    fn_8278CD58(auStack_50,param_2,0);
    if (iStack_38 != 0) {
      fn_8267C498();
    }
    uStack_26 = uStack_26 | 0x200;
    iStack_38 = 0;
    uVar1 = fn_82794B88(param_1);
    uVar3 = fn_8278E7B0(uVar1,auStack_50);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(unsigned int *)(param_1 + 0x1c) = uVar3;
    fn_826FDF58(auStack_50);
  }
  return;
}

