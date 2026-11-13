extern __int64 fn_828093F0();


extern char lbl_83265098[];
unsigned __int64 fn_8306BC58(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlEnterCriticalSection(lbl_83265098);
  }
  iVar2 = (*(int *)(param_1 + 8) + 4) * 4;
  *(unsigned int *)(iVar2 + param_1) =
       *(unsigned int *)((*(int *)(param_1 + 0xc) + 4) * 4 + param_1) ^ *(unsigned int *)(iVar2 + param_1);
  uVar1 = fn_828093F0(*(unsigned int *)((*(int *)(param_1 + 8) + 4) * 4 + param_1));
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0xf9) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0xf9) {
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlLeaveCriticalSection(lbl_83265098);
  }
  return uVar1;
}

