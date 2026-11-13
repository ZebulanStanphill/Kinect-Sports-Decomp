extern int fn_8267BED0();
extern int fn_82716330();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;


unsigned int * fn_82757058(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  
  uStack_1c = 0x102;
  puVar3 = (unsigned int *)fn_8267BED0(param_1,0x28,&uStack_1c);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar2 = lbl_821AAD20;
    puVar3[3] = 0;
    puVar3[4] = 0;
    uVar1 = lbl_82002AE0;
    puVar3[7] = uVar2;
    puVar3[6] = uVar2;
    *(unsigned short *)(puVar3 + 9) = 0;
    puVar3[8] = uVar1;
  }
  if (puVar3 != (unsigned int *)0x0) {
    puStack_20 = puVar3;
    fn_82716330(param_1,&puStack_20);
  }
  return puVar3;
}

