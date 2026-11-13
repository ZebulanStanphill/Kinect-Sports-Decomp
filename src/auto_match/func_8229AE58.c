extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_82672660();
extern int fn_826728E8();


void fn_8229AE58(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_50 [80];
  
  puVar1 = (unsigned int *)*param_1;
  if (puVar1 != (unsigned int *)0x0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      fn_82526C70(auStack_50,0x20,0xffffffff821ab74c,uVar4);
      uVar2 = *puVar1;
      uVar3 = fn_8266F6B8();
      fn_826728E8(uVar2,auStack_50,uVar3);
    } while ((uVar4 & 0xffffffff) < 4);
    fn_82672660(*puVar1,puVar1);
    fn_82359C18(puVar1 + 0x48);
    if (puVar1[1] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(puVar1);
  }
  return;
}

