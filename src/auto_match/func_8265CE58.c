extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_34;
extern unsigned int *auStack_3c;
extern int fn_8265CF70();
extern int fn_8265CF90();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82669838();
extern int fn_8266AB18();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_8265CE58(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned char auStack_3c [4];
  unsigned int uStack_38;
  unsigned char auStack_34 [4];
  unsigned int uStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  unsigned char *puStack_20;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar4 = fn_8265CF70(param_1);
  if (uVar4 < uStack0000001c) {
    puVar5 = (unsigned int *)fn_82668D80(auStack_3c,uStack00000014);
    uVar1 = *puVar5;
    puStack_20 = (unsigned char *)&stack0x00000024;
    lVar2 = fn_8265CF70(uStack00000014);
    fn_8265CF90(uStack00000014,uVar1,(unsigned __int64)uStack0000001c - lVar2,puStack_20);
  }
  else {
    uVar4 = fn_8265CF70(uStack00000014);
    if (uStack0000001c < uVar4) {
      puVar5 = (unsigned int *)fn_82668D80(auStack_34,uStack00000014);
      uVar4 = uStack0000001c;
      uStack_38 = *puVar5;
      uVar3 = fn_82668D40(auStack_2c,uStack00000014);
      puVar5 = (unsigned int *)fn_82669838(auStack_28,uVar3,uVar4);
      uStack_30 = *puVar5;
      fn_8266AB18(auStack_24,uStack00000014,uStack_30,uStack_38);
    }
  }
  return;
}

