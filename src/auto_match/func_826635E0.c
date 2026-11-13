#define true 1
extern unsigned int *auStack_18;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_826636C0();
extern int fn_826638B0();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668E70();
extern int fn_82668EA0();
extern int fn_8266A420();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;
extern unsigned int uStack_30;


void fn_826635E0(unsigned int param_1,char param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int *piVar3;
  unsigned int uStack00000014;
  char cStack0000001f;
  unsigned int uStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  int iStack_24;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned char auStack_18 [4];
  unsigned int uStack_14;
  
  uStack00000014 = param_1;
  cStack0000001f = param_2;
  fn_82668E70(&uStack_30);
  puVar2 = (unsigned int *)fn_82668D40(auStack_2c,(unsigned __int64)uStack00000014 + 4);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_28,(unsigned __int64)uStack00000014 + 4);
    cVar4 = fn_82668EA0(&uStack_30,uVar1);
    if (cVar4 == '\0') break;
    if (cStack0000001f != '\0') {
      piVar3 = (int *)fn_826638B0(&uStack_30,0);
      iStack_24 = *piVar3;
      iStack_20 = iStack_24;
      if (iStack_24 == 0) {
        uStack_14 = 0;
      }
      else {
        uStack_14 = fn_826636C0(iStack_24,1);
      }
    }
    uStack_1c = uStack_30;
    puVar2 = (unsigned int *)fn_8266A420(auStack_18,(unsigned __int64)uStack00000014 + 4,uStack_30);
    uStack_30 = *puVar2;
  }
  return;
}

