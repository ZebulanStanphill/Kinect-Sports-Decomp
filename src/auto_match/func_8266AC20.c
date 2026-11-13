#define true 1
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern int fn_8265D3D0();
extern int fn_8265FA58();
extern int fn_82666560();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack_20;


void fn_8266AC20(unsigned int param_1,int param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int *piVar3;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [24];
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  puVar2 = (unsigned int *)fn_82668D40(auStack_1c,param_1);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,uStack00000014);
    cVar4 = fn_82668EA0(&uStack_20,uVar1);
    if (cVar4 == '\0') {
      fn_82666560(uStack00000014,&stack0x0000001c);
      return;
    }
    piVar3 = (int *)fn_8265FA58(&uStack_20,0);
    if (*piVar3 == iStack0000001c) break;
    fn_8265D3D0(&uStack_20);
  }
  return;
}

