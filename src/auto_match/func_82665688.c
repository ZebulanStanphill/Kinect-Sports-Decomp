#define true 1
extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern int fn_8265D3D0();
extern int fn_8265FA58();
extern int fn_82663C10();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82665688(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int *piVar3;
  int iStack00000014;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char auStack_18 [4];
  unsigned char auStack_14 [20];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x363,0xffffffff82001eb0);
  }
  uStack_1c = 0;
  fn_82663C10(&uStack_20);
  puVar2 = (unsigned int *)fn_82668D40(auStack_18,0xffffffff831e7a60);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_14,0xffffffff831e7a60);
    cVar4 = fn_82668EA0(&uStack_20,uVar1);
    if (cVar4 == '\0') {
      return 0xffffffffffffffff;
    }
    piVar3 = (int *)fn_8265FA58(&uStack_20,0);
    if (*piVar3 == iStack00000014) break;
    fn_8265D3D0(&uStack_20);
    uStack_1c = uStack_1c + 1;
  }
  return (unsigned __int64)uStack_1c;
}

