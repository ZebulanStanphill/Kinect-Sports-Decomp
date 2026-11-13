#define true 1
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8265EF70();
extern int fn_8265EF98();
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_8265F918();
extern int fn_8265FA90();
extern int fn_826666A0();
extern int fn_82668E70();
extern int fn_82669B20();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_2c;
extern unsigned int uStack00000014;
extern unsigned int uStack_18;
extern unsigned int uStack_30;


void fn_8265EEA0(unsigned int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int iVar3;
  unsigned int uStack00000014;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  int iStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  
  uStack00000014 = param_1;
  fn_82668E70(&uStack_30);
  puVar2 = (unsigned int *)fn_8265F888(auStack_28,uStack00000014);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_8265F8D8(auStack_24,uStack00000014);
    cVar4 = fn_8265FA90(&uStack_30,uVar1);
    if (cVar4 == '\0') break;
    iVar3 = fn_826666A0(&uStack_30);
    iStack_2c = *(int *)(iVar3 + 4);
    if (iStack_2c != 0) {
      iStack_20 = iStack_2c;
      iStack_1c = iStack_2c;
      if (iStack_2c == 0) {
        uStack_18 = 0;
      }
      else {
        uStack_18 = fn_8265EF98(iStack_2c,1);
      }
    }
    fn_82669B20(&uStack_30);
  }
  fn_8265F918(uStack00000014);
  fn_8265EF70(uStack00000014);
  return;
}

