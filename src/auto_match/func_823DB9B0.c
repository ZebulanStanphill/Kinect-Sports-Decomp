extern unsigned int *auStack_40;
extern int fn_8227D9B0();
extern int fn_8227DA30();
extern int fn_824CCD80();
extern int memcpy();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823DB9B0(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x30) == 0) {
    fn_8227D9B0();
  }
  fn_8227DA30((double)*(float *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x3c) == 0) {
    uStack_24 = 0xffffffff;
  }
  else {
    uStack_24 = fn_824CCD80(*(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x10));
  }
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uStack_30 = *(unsigned int *)(param_1 + 0x10);
  uStack_2c = *(unsigned int *)(param_1 + 0x14);
  uStack_28 = *(unsigned int *)(param_1 + 0x28);
  uVar1 = *(unsigned int *)(param_1 + 0x44);
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  uStack_20 = 0;
  uStack_1c = 3;
  memcpy(uVar1,auStack_40,0x30);
  return;
}

