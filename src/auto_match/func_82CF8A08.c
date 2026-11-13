extern int fn_82D01468();


unsigned char * fn_82CF8A08(unsigned char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  char acStack_40;
  
  iVar2 = param_2 + 4;
  RtlEnterCriticalSection(iVar2);
  iVar1 = *(int *)(param_2 + 0x208);
  iVar4 = 0;
  *param_1 = 1;
  if (iVar1 <= 0) {
LAB_82cf8a8c:
    RtlLeaveCriticalSection(iVar2);
  }
  else {
    puVar3 = (unsigned int *)(param_2 + 0x17c);
    do {
      fn_82D01468(&acStack_40,*puVar3);
      if (acStack_40 == '\0') {
        *param_1 = 0;
        goto LAB_82cf8a8c;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x208));
    RtlLeaveCriticalSection(iVar2);
  }
  return param_1;
}

