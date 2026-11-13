extern unsigned int *auStack_2f0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_320;
extern int fn_822315A0();
extern int fn_823116D8();
extern int fn_82365BD8();
extern int fn_823A9A98();
extern int fn_823ADF20();
extern int fn_823AE180();
extern int fn_823AF468();
extern int fn_823B0C20();
extern unsigned int iStack_1dc;
extern unsigned int lbl_82193A34;
extern unsigned int uStack_1c0;
extern unsigned int uStack_310;


unsigned int ** fn_823AF358(unsigned int **param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puStack_330;
  unsigned int *puStack_32c;
  unsigned char auStack_320 [16];
  unsigned int uStack_310;
  unsigned char auStack_300 [16];
  unsigned char auStack_2f0 [276];
  int iStack_1dc;
  unsigned int uStack_1c0;
  
  if ((*(int *)(param_2 + 0x2b4) == 0) || (*(int *)(param_2 + 700) == 0)) {
    fn_823AF468(auStack_300);
    fn_823B0C20(auStack_300,1);
    fn_823A9A98(&puStack_330);
    puVar1 = (unsigned int *)((unsigned int)(auStack_2f0 + (int)in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_320 + (int)in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    uStack_310 = uStack_1c0;
    fn_823116D8(*puStack_330,auStack_320);
    do {
      fn_823AE180((double)lbl_82193A34,auStack_300);
      uVar3 = *puStack_330;
      puVar1 = (unsigned int *)((unsigned int)(auStack_2f0 + (int)in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_320 + (int)in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uStack_310 = uStack_1c0;
      fn_823116D8(uVar3,auStack_320);
    } while (iStack_1dc == 0);
    *param_1 = (unsigned int *)0x0;
    param_1[1] = (unsigned int *)0x0;
    if (param_1 != &puStack_330) {
      puVar1 = param_1[1];
      param_1[1] = puStack_32c;
      *param_1 = puStack_330;
      puStack_32c = puVar1;
    }
    if (puStack_32c != (unsigned int *)0x0) {
      fn_822315A0();
    }
    fn_823ADF20(auStack_300);
  }
  else {
    fn_82365BD8(param_1,param_2 + 0x2b4);
  }
  return param_1;
}

