extern void RtlEnterCriticalSection();
extern void RtlLeaveCriticalSection();
extern int fn_82A21458();

int fn_82A21608(int param_1,unsigned int *param_2)
{
  int iVar1;
  int r;

  RtlEnterCriticalSection();
  for (;;) {
    if (param_2[1] == 0xffffffff) {
      if (*param_2 == 0xffffffff) {
        *param_2 = 0;
      }
      else {
        *param_2 = *param_2 + 1;
      }
      param_2[1] = 0;
    }
    else {
      param_2[1] = param_2[1] + 1;
    }
    if (*param_2 >= *(unsigned int *)(param_1 + 0x20)) {
      RtlLeaveCriticalSection(param_1);
      return 0;
    }
    iVar1 = *(int *)(*param_2 * 4 + *(int *)(param_1 + 0x1c));
    if (param_2[1] < (unsigned int)*(unsigned short *)(iVar1 + 8)) {
      r = (unsigned int)*(unsigned char *)((param_2[1] - (unsigned int)*(unsigned short *)(iVar1 + 0xc)) * 4 +
                              (unsigned int)*(unsigned short *)(iVar1 + 4) + iVar1) *
              (*(unsigned int *)(iVar1 + 4) & 0xffff) + iVar1 + 0x14;
      fn_82A21458(param_1,r);
      RtlLeaveCriticalSection(param_1);
      return r;
    }
    param_2[1] = 0xffffffff;
  }
}
