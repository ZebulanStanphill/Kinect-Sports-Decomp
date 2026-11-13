extern unsigned int lbl_83215000[];


extern char lbl_8315C428[];
void fn_829CFC20(int param_1)

{
  unsigned int iVar1;
  
  RtlEnterCriticalSection(lbl_8315C428);
  iVar1 = lbl_83215000[0x2128/4 + param_1];
  if ((iVar1 != 0) && ((*(unsigned int *)(iVar1 + 0x14) & 0x10000) == 0)) {
    KeSetEvent(iVar1,1,0);
    if (*(unsigned int *)(iVar1 + 0x10) != 0) {
      KeSetEvent(*(int *)(iVar1 + 0x10),1,0);
    }
  }
  RtlLeaveCriticalSection(lbl_8315C428);
  return;
}

