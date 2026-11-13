#define true 1
#define false 0
extern int fn_82A1BB18();
extern int fn_82A1E650();


unsigned __int64 fn_82E50CB8(int param_1)

{
  int bVar1;
  int iVar2;
  unsigned int iVar3;
  
  bVar1 = false;
  iVar2 = fn_82A1BB18();
  RtlEnterCriticalSection(param_1);
  if ((*(unsigned int *)(param_1 + 0x38) == iVar2) ||
     ((((*(unsigned int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x34) == 0)) &&
       (*(unsigned int *)(param_1 + 0x2c) <= 0)) && (*(unsigned int *)(param_1 + 0x28) <= 0)))) {
    iVar3 = *(unsigned int *)(param_1 + 0x30) + 1;
    *(unsigned int *)(param_1 + 0x30) = iVar3;
    if (iVar3 == 1) {
      *(unsigned int *)(param_1 + 0x38) = iVar2;
    }
  }
  else {
    bVar1 = true;
    *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) + 1;
  }
  RtlLeaveCriticalSection(param_1);
  if (bVar1) {
    fn_82A1E650(*(unsigned int *)(param_1 + 0x1c),0xffffffffffffffff);
    RtlEnterCriticalSection(param_1);
    *(unsigned int *)(param_1 + 0x38) = iVar2;
    *(unsigned int *)(param_1 + 0x34) = 0;
    RtlLeaveCriticalSection(param_1);
  }
  return 0;
}

