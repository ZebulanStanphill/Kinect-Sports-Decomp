extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82522DF8();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern int fn_82837D98();


unsigned int * fn_825B36E0(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  puVar2 = (unsigned int *)fn_82522DF8(0x30);
  fn_82520158(0xffffffff821c832c,auStack_30,0);
  fn_82520158(0xffffffff821c8340,auStack_2c,0);
  uVar1 = fn_8251F720(auStack_2c,0);
  uVar3 = fn_82631830();
  *puVar2 = uVar3;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[1] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c8354,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[2] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c836c,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[3] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c838c,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[4] = uVar3;
  fn_8251FA58(uVar1);
  fn_82520158(0xffffffff821c83ac,auStack_30,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar3 = fn_82631488();
  puVar2[5] = uVar3;
  fn_8251FA58(uVar1);
  auStack_2c[0] = 0x10;
  uVar1 = fn_82631BF8(0xffffffff831c0648);
  fn_826438C0(*puVar2,0,uVar1,auStack_2c,0);
  fn_8262FEC8(uVar1);
  fn_82520158(0xffffffff821c83d4,auStack_2c,0);
  iVar4 = fn_8251F720(auStack_2c,0);
  puVar2[7] = iVar4;
  fn_82837D98(*(unsigned int *)(iVar4 + 0x14),0,auStack_2c);
  puVar2[8] = auStack_2c[0];
  fn_82520158(0xffffffff821c83f4,auStack_2c,0);
  iVar4 = fn_8251F720(auStack_2c,0);
  puVar2[9] = iVar4;
  fn_82837D98(*(unsigned int *)(iVar4 + 0x14),0,auStack_2c);
  puVar2[10] = auStack_2c[0];
  puVar2[0xb] = *(unsigned int *)(param_1 + 0x828);
  *(unsigned int **)(param_1 + 0x938) = puVar2;
  return puVar2;
}

