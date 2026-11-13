extern int fn_8267B890();
extern unsigned int lbl_831E7E64;


void fn_826E4270(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  RtlEnterCriticalSection(param_1 + 0x24);
  puVar2 = (unsigned int *)fn_8267B890(lbl_831E7E64,0xc,0);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[2] = param_2;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  puVar2[1] = param_1 + 0x1c;
  *puVar2 = uVar1;
  *(unsigned int **)(*(int *)(param_1 + 0x1c) + 4) = puVar2;
  *(unsigned int **)(param_1 + 0x1c) = puVar2;
  RtlLeaveCriticalSection(param_1 + 0x24);
  return;
}

