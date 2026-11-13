extern int fn_82631F00();
extern int fn_82636580();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_826362C0(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4dbc);
  if (-1 < (int)*(unsigned int *)(param_1 + 0x4dbc)) {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar3 = fn_82636580(param_1,&stack_pair_60.first);
    *(int *)(param_1 + 0x4dbc) = (int)uVar3;
    if (-1 < (int)uVar3) {
      uVar3 = (unsigned __int64)uStack_40;
      uVar2 = (unsigned __int64)uStack_54;
      if ((param_3 & 0xffffffff) < (uVar3 + uVar2 & 0xffffffff)) {
        uVar3 = 0xffffffff8007000e;
      }
      else {
        fn_82631F00(&stack_pair_60.first,param_2,uVar3,uVar3 + param_2);
        iVar1 = fn_82636580(param_1,&stack_pair_60.first);
        *(int *)(param_1 + 0x4dbc) = iVar1;
        if ((-1 < iVar1) && (param_4 != (unsigned int *)0x0)) {
          *param_4 = (int)(uVar3 + uVar2);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4dbc);
      }
    }
  }
  return uVar3;
}

