extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_a0;
extern int fn_82270B70();
extern int fn_822734A0();
extern unsigned int uStack_9c;
extern unsigned int uStack_d0;


void fn_822707B0(double param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  __int64 lVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int *apuStack_e0 [2];
  unsigned int *apuStack_d8 [2];
  unsigned int uStack_d0;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  float fStack_a0;
  unsigned int uStack_9c;
  unsigned int auStack_90 [2];
  unsigned __int64 auStack_88 [15];
  
  iVar2 = fn_82270B70();
  puVar1 = (unsigned int *)(*(unsigned int **)(iVar2 + 0xe8))[1];
  apuStack_e0[0] = *(unsigned int **)(iVar2 + 0xe8);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x61) == '\0') {
    if ((unsigned int)puVar4[4] < param_2) {
      puVar1 = (unsigned int *)puVar4[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar4;
      apuStack_e0[0] = puVar4;
    }
  }
  if ((apuStack_e0[0] == *(unsigned int **)(iVar2 + 0xe8)) || (param_2 < (unsigned int)apuStack_e0[0][4])) {
    ppuVar5 = apuStack_d8;
    apuStack_d8[0] = *(unsigned int **)(iVar2 + 0xe8);
  }
  else {
    ppuVar5 = apuStack_e0;
  }
  if (*ppuVar5 == *(unsigned int **)(iVar2 + 0xe8)) {
    puVar1 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar3 = auStack_88;
    puVar1 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    lVar6 = 8;
    fStack_a0 = (float)param_1;
    uStack_9c = 0;
    ppuVar5 = apuStack_d8;
    do {
      ppuVar5 = ppuVar5 + 2;
      puVar3 = puVar3 + 1;
      *puVar3 = *(unsigned __int64 *)ppuVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uStack_d0 = param_2;
    auStack_90[0] = param_2;
    fn_822734A0(apuStack_d8,iVar2 + 0xe4,auStack_90);
  }
  return;
}

