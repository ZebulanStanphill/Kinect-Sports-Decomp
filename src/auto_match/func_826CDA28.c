extern int fn_826C8E20();
extern int fn_826CBCB0();
extern int fn_826CD7D0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned int * fn_826CDA28(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  unsigned int uStack0000001c;
  unsigned int *apuStack_30 [12];
  
  uStack0000001c = param_2;
  puVar3 = (unsigned int *)fn_826CBCB0();
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x24);
    puVar3[1] = param_1 + 0x24;
    *puVar3 = uVar1;
    *(unsigned int **)(*(int *)(param_1 + 0x24) + 4) = puVar3;
    *(unsigned int **)(param_1 + 0x24) = puVar3;
    puVar3[3] = param_2;
    apuStack_30[0] = puVar3;
    uVar2 = fn_826C8E20(param_1 + 0x14,0,*(unsigned int *)(param_1 + 0x18),&stack0x0000001c,
                          0xffffffff826c5190);
    fn_826CD7D0(param_1 + 0x14,uVar2,apuStack_30);
  }
  return puVar3;
}

