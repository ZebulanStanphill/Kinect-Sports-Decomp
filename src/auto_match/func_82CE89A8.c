extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82CE96B0(int, int);

void fn_82CE89A8(char *param_1, int param_2, int param_3)
{
  int uVar1;
  unsigned char *pbVar3;
  int iVar4;

  RtlEnterCriticalSection(param_1);
  uVar1 = *(int *)(param_1 + 0x1c);
  fn_82CE96B0((*(int *)(param_1 + 0x34) + param_2) * 0x14 + uVar1 + 0x2c, param_3);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    pbVar3 = (unsigned char *)(param_1 + 0x39);
    do {
      pbVar3 = pbVar3 + 8;
      fn_82CE96B0(*pbVar3 * 0x14 + uVar1 + 0x2c, param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  RtlLeaveCriticalSection(param_1);
}
