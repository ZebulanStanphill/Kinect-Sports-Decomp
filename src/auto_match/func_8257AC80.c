extern int fn_82F65C10();


unsigned __int64 fn_8257AC80(int param_1,char *param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  if (0xf < *(unsigned int *)(param_2 + 0x14)) {
    pcVar4 = *(char **)param_2;
  }
  pcVar3 = pcVar4 + *(int *)(param_2 + 0x10);
  uVar2 = 0x811c9dc5;
  for (; pcVar4 != pcVar3; pcVar4 = pcVar4 + 1) {
    uVar2 = uVar2 * 0x1000193 ^ (int)*pcVar4;
  }
  uVar1 = fn_82F65C10(uVar2 & 0x7fffffff,0x1f31d);
  uVar1 = (uVar1 & 0xffffffff) * 0x41a7 + (uVar1 >> 0x20) * -0xb14;
  if ((__int64)uVar1 < 0) {
    uVar1 = uVar1 - 0x80000001;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x20) & uVar1;
  if (*(unsigned int *)(param_1 + 0x24) <= uVar1) {
    uVar1 = (uVar1 - (*(unsigned int *)(param_1 + 0x20) >> 1)) - 1;
  }
  return uVar1;
}

