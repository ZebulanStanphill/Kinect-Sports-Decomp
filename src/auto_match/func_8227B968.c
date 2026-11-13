extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82526C70();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;


void fn_8227B968(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [48];

  lVar4 = 0;
  do {
    fn_82526C70(auStack_40,0x10,0xffffffff821a84f0,lVar4);
    puVar3 = (unsigned int *)fn_82279C58(auStack_50,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,auStack_40,uVar2);
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 8);
  puVar3 = (unsigned int *)fn_82279C58(auStack_48,param_1);
  uVar1 = *puVar3;
  uVar2 = fn_8266F6B8();
  fn_826728E8(uVar1,0xffffffff821a84fc,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}
