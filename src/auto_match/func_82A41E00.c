#define true 1
extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A40750();
extern int fn_82A41140();
extern int fn_82A411B8();
extern int fn_82A4F4E0();
extern int fn_82BFE128();


unsigned int fn_82A41E00(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int auStack_60 [24];
  
  auStack_60[0] = 0;
  puVar2 = *(unsigned int **)(param_1 + 0x1d8);
  puVar6 = (unsigned int *)0x0;
  puVar7 = (unsigned int *)0x0;
  while( true ) {
    if (puVar2 == (unsigned int *)0x0) break;
    puVar4 = (unsigned int *)*puVar2;
    if (*puVar4 == param_2) goto LAB_82a41fb4;
    if ((param_2 < *puVar4) || (puVar6 = puVar2, puVar7 = puVar4, puVar2 == (unsigned int *)0x0))
    break;
    puVar2 = (unsigned int *)puVar2[1];
  }
  puVar4 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x34,0x20970001,0);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[10] = 1;
    puVar4[2] = (unsigned int)(puVar4 + 3);
    puVar4[9] = 0;
    puVar4[3] = 0;
    uVar1 = puVar4[2];
    *(unsigned int *)(uVar1 + 8) = puVar4[1];
    puVar4[1] = uVar1 + 4;
  }
  if (puVar4 == (unsigned int *)0x0) {
    auStack_60[0] = 0x8007000e;
    goto LAB_82a41fb8;
  }
  *puVar4 = param_2;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  if (puVar7 == (unsigned int *)0x0) {
    uVar1 = *(unsigned int *)(param_1 + 0xb4);
  }
  else {
    uVar1 = puVar7[0xc];
  }
  lVar3 = fn_82A40750(param_1,uVar1,puVar4 + 0xc);
  auStack_60[0] = (unsigned int)lVar3;
  if (lVar3 < 0) {
LAB_82a41f70:
    if (puVar4[0xb] != 0) {
      fn_82BFE128(*(unsigned int *)(param_1 + 0x3ea0));
    }
    if (puVar4[0xc] != 0) {
      fn_82BFE128(*(unsigned int *)(param_1 + 0x3ea0));
    }
    fn_82A411B8(puVar4 + 1);
    fn_82A4F4E0(puVar4);
    puVar4 = (unsigned int *)0x0;
    if ((int)lVar3 < 0) goto LAB_82a41fb8;
  }
  else {
    lVar3 = fn_82A40750(param_1,uVar1,puVar4 + 0xb);
    auStack_60[0] = (unsigned int)lVar3;
    if (lVar3 < 0) goto LAB_82a41f70;
    iVar5 = fn_82A41140(param_1 + 0x1c0,puVar6,puVar4);
    if (iVar5 == 0) {
      lVar3 = -0x7ff8fff2;
      auStack_60[0] = 0x8007000e;
      goto LAB_82a41f70;
    }
    auStack_60[0] = 0;
  }
LAB_82a41fb4:
  *param_3 = puVar4;
LAB_82a41fb8:
  fn_82A40238(auStack_60);
  return auStack_60[0];
}

