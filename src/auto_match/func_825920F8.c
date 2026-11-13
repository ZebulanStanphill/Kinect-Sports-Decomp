extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C7F0();
extern int fn_826438C0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_825920F8(int param_1)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  iVar4 = 0;
  puVar3 = (unsigned int *)(param_1 + 0x2c);
  lVar5 = 2;
  do {
    *(unsigned char *)(param_1 + 0x2c + iVar4) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar2 = fn_8263C7F0(lbl_8326B430,lbl_8326B434,1,1,0,0x18280186,0,3);
  *(unsigned int *)(param_1 + 0x28) = uVar2;
  fn_82520158(0xffffffff821c65e0,auStack_30,0);
  fn_82520158(0xffffffff821c65fc,auStack_2c,0);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = fn_8251F720(auStack_30,0);
    uVar2 = fn_82631830();
    *(unsigned int *)(param_1 + 0x20) = uVar2;
    fn_8251FA58(uVar1);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = fn_8251F720(auStack_2c,0);
    uVar2 = fn_82631488();
    *(unsigned int *)(param_1 + 0x24) = uVar2;
    fn_8251FA58(uVar1);
  }
  auStack_2c[0] = 8;
  uVar1 = fn_82631BF8(0xffffffff831c0b78);
  fn_826438C0(*(unsigned int *)(param_1 + 0x20),0,uVar1,auStack_2c,0);
  fn_8262FEC8(uVar1);
  *(unsigned char *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x3c) = ltcg_pool_0_0f;
  return;
}

