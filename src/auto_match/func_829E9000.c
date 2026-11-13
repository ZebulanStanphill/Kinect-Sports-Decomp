extern int fn_8265C990();
extern int fn_829EC590();


void fn_829E9000(int param_1)

{
  int iVar1;
  
  *(unsigned char *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    RtlEnterCriticalSection(0xffffffff83218b78);
    iVar1 = fn_829EC590(*(unsigned int *)(param_1 + 0xc));
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x10) != 0)) {
      fn_8265C990(*(int *)(param_1 + 0x10),0x209d0000);
    }
    RtlLeaveCriticalSection(0xffffffff83218b78);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned __int64 *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  return;
}

