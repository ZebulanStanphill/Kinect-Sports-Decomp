extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_828100D0();
extern unsigned int lbl_82193E50;


void fn_82562788(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float fStack_30;
  float fStack_2c;
  unsigned int auStack_28 [2];
  unsigned char auStack_20 [16];
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  if ((*(unsigned int *)(param_1 + 0xa8) & 1) == 0) {
    puVar2 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  else {
    puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    fn_828100D0(auStack_20,&fStack_30,&fStack_2c,auStack_28,0);
    *(float *)(param_1 + 0x50) = -fStack_30;
    *(float *)(param_1 + 0x54) = fStack_2c + lbl_82193E50;
    *(unsigned int *)(param_1 + 0x58) = auStack_28[0];
  }
  *(unsigned int *)(param_1 + 0xd0) = 1;
  return;
}

