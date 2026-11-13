extern int fn_82A6AD30();
extern int fn_82A7EB68();
extern int fn_82A7F048();
extern int fn_82A7F400();
extern int fn_82C2CED0();
extern int fn_82C2CFE8();


unsigned __int64 fn_82A6ADE0(__int64 param_1)

{
  int iVar1;
  int iVar2;
  int (**pcVar3)();
  
  fn_82A6AD30(param_1 + 0x20c,param_1 + 0x208,*(unsigned int *)((int)param_1 + 0x60));
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 100);
  if (iVar1 == 0) {
    pcVar3 = fn_82C2CED0;
  }
  else {
    pcVar3 = fn_82C2CFE8;
  }
  *(int (***)())(iVar2 + 0x1e8) = pcVar3;
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x60) == 0x3d) {
      pcVar3 = fn_82A7EB68;
    }
    else {
      if (*(int *)(iVar2 + 0x60) != 0x5e) goto LAB_82a6ae58;
      pcVar3 = fn_82A7F048;
    }
    *(int (***)())(iVar2 + 0x1e8) = pcVar3;
  }
LAB_82a6ae58:
  if (iVar1 == 1) {
    *(int (***)())(iVar2 + 0x1e8) = fn_82A7F400;
  }
  return 0;
}

