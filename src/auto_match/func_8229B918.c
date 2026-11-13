extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F658();
extern int fn_8266F660();
extern int fn_82673A28();
extern int fn_82673BC0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int iStack_44;
extern unsigned int ltcg_pool_0_0f;


void fn_8229B918(unsigned int *param_1)

{
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [40];
  
  uVar2 = ltcg_pool_0_0f;
  puVar4 = param_1 + 0xe;
  lVar5 = 2;
  do {
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x2e] = 1;
  param_1[0x2f] = 1;
  fn_82864988(auStack_40,0xffffffff821a7cd8);
  uVar2 = fn_828647D8();
  param_1[0xb] = uVar2;
  fn_82864898(auStack_40);
  fn_82864988(auStack_40,0xffffffff821a7cfc);
  uVar2 = fn_828647D8();
  param_1[0xc] = uVar2;
  fn_82864898(auStack_40);
  fn_82520158(0xffffffff821aade0,auStack_50,0);
  iVar3 = fn_8251F720(auStack_50,0);
  param_1[10] = *(unsigned int *)(iVar3 + 4);
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266EE08(auStack_48,uVar1,iVar3,0,1,0);
  fn_823F2E20(param_1,uVar1);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_8266F660(*param_1,1);
  fn_8266F658(*param_1,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673BC0(*param_1,0xffffffff8229c8a0,param_1);
  fn_82673A28(*param_1,0xffffffff822a13c8,param_1);
  fn_8251FA58(iVar3);
  return;
}

