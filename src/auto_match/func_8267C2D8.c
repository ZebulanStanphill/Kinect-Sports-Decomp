extern int fn_8267C0B8();
extern unsigned int lbl_831E7E60;


unsigned int * fn_8267C2D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar3 + 0x2c4);
  puVar2 = (unsigned int *)fn_8267C0B8(lbl_831E7E60,param_2,param_1,param_3);
  if (puVar2 != (unsigned int *)0x0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  RtlLeaveCriticalSection(uVar3 + 0x2c4);
  if (puVar2 != (unsigned int *)0x0) {
    RtlEnterCriticalSection(param_1 + 0x48);
    uVar1 = *(unsigned int *)(param_1 + 0x40);
    puVar2[1] = param_1 + 0x40;
    *puVar2 = uVar1;
    *(unsigned int **)(*(int *)(param_1 + 0x40) + 4) = puVar2;
    *(unsigned int **)(param_1 + 0x40) = puVar2;
    RtlLeaveCriticalSection(param_1 + 0x48);
  }
  return puVar2;
}

