extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82544528();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263B758();
extern int fn_826438C0();
extern int fn_82A93C18();
extern int fn_82A93F08();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_825C8418(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char auStack_60 [4];
  unsigned char auStack_5c [4];
  unsigned int auStack_58 [2];
  unsigned char auStack_50 [24];
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  fn_82520158(0xffffffff821c915c,auStack_60,0);
  fn_82520158(0xffffffff821c9174,auStack_5c,0);
  fn_82520158(0xffffffff821c918c,auStack_58,0);
  uVar2 = fn_8251F720(auStack_60,0);
  uVar3 = fn_82631830();
  *param_1 = uVar3;
  fn_8251FA58(uVar2);
  uVar2 = fn_8251F720(auStack_5c,0);
  uVar3 = fn_82631488();
  param_1[1] = uVar3;
  fn_8251FA58(uVar2);
  uVar3 = fn_8251F720(auStack_58,0);
  param_1[2] = uVar3;
  auStack_58[0] = 8;
  uVar2 = fn_82631BF8(0xffffffff831c02e0);
  fn_826438C0(*param_1,0,uVar2,auStack_58,0);
  fn_8262FEC8(uVar2);
  iVar4 = fn_82544528();
  fn_8263B758(iVar4,0,auStack_50);
  uVar1 = *(unsigned int *)(iVar4 + 0x20);
  fn_82A93C18(uStack_38,uStack_34,1,0,0x18280186,0,0,0);
  fn_82A93F08(0xffffffff8327009c,uVar1 & 0xfffff000,0);
  puVar5 = param_1 + 4;
  lVar6 = 2;
  do {
    puVar5[-1] = 0;
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    uVar3 = ltcg_pool_0_0f;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[7] = ltcg_pool_0_0f;
  param_1[8] = uVar3;
  return;
}

