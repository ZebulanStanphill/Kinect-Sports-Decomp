#define true 1
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_c;
extern int fn_8265CA20();
extern int fn_826638B0();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668E70();
extern int fn_82668EA0();
extern int fn_8266A420();
extern unsigned int uStack00000014;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_20;


void fn_8265D948(unsigned int param_1,char param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int uStack00000014;
  char cStack0000001f;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  unsigned char auStack_18 [4];
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned char auStack_c [12];
  
  uStack00000014 = param_1;
  cStack0000001f = param_2;
  fn_82668E70(&uStack_20);
  puVar2 = (unsigned int *)fn_82668D40(auStack_1c,(unsigned __int64)uStack00000014 + 4);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,(unsigned __int64)uStack00000014 + 4);
    cVar3 = fn_82668EA0(&uStack_20,uVar1);
    if (cVar3 == '\0') break;
    if (cStack0000001f != '\0') {
      puVar2 = (unsigned int *)fn_826638B0(&uStack_20,0);
      uStack_14 = *puVar2;
      fn_8265CA20(uStack_14);
    }
    uStack_10 = uStack_20;
    puVar2 = (unsigned int *)fn_8266A420(auStack_c,(unsigned __int64)uStack00000014 + 4,uStack_20);
    uStack_20 = *puVar2;
  }
  return;
}

