extern int fn_82A1E810();
extern int fn_82A29A38();
extern int fn_82E3C770();
extern unsigned int stack0x0000001c;


unsigned __int64 fn_82EEAAE8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piStack0000001c;
  
  piStack0000001c = param_2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_82A29A38();
    return 0xffffffffc00d3e85;
  }
  RtlEnterCriticalSection(param_1 + 0x54);
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = fn_82E3C770(*(int *)(param_1 + 0x50),&stack0x0000001c);
    if ((__int64)uVar1 < 0) goto LAB_82eeabb8;
    (**(int (***)())(*param_2 + 4))(param_2);
  }
  if (((-1 < (int)uVar1) && (*(int *)(*(int *)(param_1 + 0x50) + 100) == 1)) &&
     (iVar2 = fn_82A1E810(*(unsigned int *)(param_1 + 0x70)), iVar2 == 0)) {
    uVar1 = thunk_FUN_82a2b798();
    if (0 < (int)uVar1) {
      uVar1 = uVar1 & 0xffff | 0x80070000;
    }
    if (-1 < (int)uVar1) {
      uVar1 = 0xffffffff8000ffff;
    }
  }
LAB_82eeabb8:
  RtlLeaveCriticalSection(param_1 + 0x54);
  return uVar1;
}

