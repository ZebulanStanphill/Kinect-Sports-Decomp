#define true 1
extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern int fn_8265F598();
extern int fn_8265FA58();
extern int fn_82663C10();
extern int fn_826666C8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


unsigned int fn_82665770(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int iVar3;
  int iStack00000014;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [4];
  unsigned char auStack_14 [4];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x375,0xffffffff820021c4);
  }
  fn_82663C10(&uStack_20);
  puVar2 = (unsigned int *)fn_82668D40(auStack_1c,0xffffffff831e7a88);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_14,0xffffffff831e7a88);
    cVar4 = fn_82668EA0(&uStack_20,uVar1);
    iVar3 = iStack00000014;
    if (cVar4 == '\0') {
      return 0;
    }
    puVar2 = (unsigned int *)fn_8265FA58(&uStack_20,0);
    iVar3 = fn_8265F598(*puVar2,iVar3);
    if (iVar3 == 0) break;
    fn_826666C8(auStack_18,&uStack_20,0);
  }
  puVar2 = (unsigned int *)fn_8265FA58(&uStack_20,0);
  return *puVar2;
}

