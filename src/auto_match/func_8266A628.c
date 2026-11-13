#define true 1
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_8265F598();
extern int fn_82663BE8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266AAC8();
extern int fn_8266C340();
extern unsigned int iStack00000014;


unsigned __int64 fn_8266A628(int param_1)

{
  unsigned __int64 uVar1;
  char cVar4;
  unsigned int *puVar2;
  int iVar3;
  int iStack00000014;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [8];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x131,0xffffffff8200251c);
  }
  fn_82668D40(auStack_20,0xffffffff831e7af8);
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,0xffffffff831e7af8);
    cVar4 = fn_82668EA0(auStack_20,uVar1);
    iVar3 = iStack00000014;
    if (cVar4 == '\0') {
      return 0;
    }
    puVar2 = (unsigned int *)fn_82663BE8(auStack_20);
    iVar3 = fn_8265F598(*puVar2,iVar3);
    if (iVar3 == 0) break;
    fn_8266AAC8(auStack_1c,auStack_20,0);
  }
  return 1;
}

