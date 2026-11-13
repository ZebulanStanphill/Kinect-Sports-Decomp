extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_8267C4F0();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_8278E7B0();
extern int fn_827949B0();
extern int fn_82794B88();
extern int fn_82795EE0();
extern int fn_8279C588();
extern int fn_827A3088();
extern int fn_827AFDE0();
extern unsigned int lbl_82015C34;
extern unsigned int uStack_100;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned int * fn_827A5058(unsigned int *param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned char uStack_dc;
  unsigned char auStack_d0 [48];
  unsigned char auStack_a0 [128];
  
  param_1[1] = 1;
  *param_1 = &lbl_82015C34;
  param_1[2] = 0;
  param_1[3] = param_2;
  iVar2 = fn_82794B88(*(unsigned int *)(*(int *)(param_2 + 8) + 8));
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  param_1[4] = iVar2;
  uVar1 = fn_82794B88(*(unsigned int *)(*(int *)(param_2 + 8) + 8));
  fn_827949B0(param_1 + 5,uVar1);
  param_1[0xf] = 0;
  puVar5 = param_1 + 0x12;
  *(unsigned char *)(param_1 + 0x10) = 0;
  puVar6 = param_1 + 0x10;
  lVar7 = 5;
  do {
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 4;
    *(unsigned char *)puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  fn_826FDED0(auStack_d0,*(unsigned int *)(param_1[4] + 0x1c));
  puVar4 = *(unsigned char **)(*(int *)(*(int *)(param_2 + 8) + 8) + 0x1c);
  if (puVar4 == (unsigned char *)0x0) {
    puVar4 = auStack_d0;
  }
  uVar3 = fn_8278E7B0(param_1[4],puVar4);
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  param_1[2] = uVar3;
  fn_82795EE0(param_1 + 5,param_1[4],uVar3);
  uVar1 = fn_8279C588(*(unsigned int *)(param_1[3] + 8));
  puVar6 = param_1 + 0x25;
  lVar7 = 10;
  do {
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e0 = 0;
    uStack_e4 = 0;
    uStack_e8 = 0;
    uStack_dc = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_fc = 0;
    iVar2 = fn_827AFDE0(uVar1,&uStack_100);
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *puVar6 = *(unsigned int *)(iVar2 + 0x14);
  } while (lVar7 != 0);
  iVar2 = fn_827A3088(auStack_a0);
  puVar4 = (unsigned char *)(iVar2 + -4);
  lVar7 = 5;
  do {
    puVar5[-1] = *(unsigned int *)(puVar4 + 4);
    *puVar5 = *(unsigned int *)((iVar2 - (int)(param_1 + 0x11)) + (int)puVar5);
    puVar5[1] = *(unsigned int *)(puVar4 + 0xc);
    puVar4 = puVar4 + 0x10;
    *(unsigned char *)(puVar5 + 2) = *puVar4;
    puVar5 = puVar5 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(unsigned char *)(param_1 + 0x25) = *(unsigned char *)(iVar2 + 0x50);
  fn_826FDF58(auStack_d0);
  return param_1;
}

