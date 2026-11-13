#define true 1
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern int fn_82230110();
extern int fn_8265D3D0();
extern int fn_8265F0B0();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82663C10();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern unsigned int uStack00000014;
extern unsigned int uStack_40;


void fn_8265EFE0(unsigned int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int uStack00000014;
  unsigned int uStack_40;
  unsigned short *puStack_3c;
  unsigned char auStack_38 [4];
  unsigned char auStack_34 [4];
  unsigned char auStack_30 [12];
  unsigned char *puStack_14;
  
  uStack00000014 = param_1;
  fn_82663C10(&uStack_40);
  puVar2 = (unsigned int *)fn_82668D40(auStack_38,0xffffffff831e7a4c);
  uStack_40 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_34,0xffffffff831e7a4c);
    cVar3 = fn_82668EA0(&uStack_40,uVar1);
    if (cVar3 == '\0') break;
    puVar2 = (unsigned int *)fn_8265FA58(&uStack_40,0);
    puStack_3c = (unsigned short *)*puVar2;
    puStack_14 = auStack_30;
    uVar1 = fn_8265F570(puStack_3c + 2);
    uVar1 = fn_82230110(puStack_14,uVar1);
    fn_8265F0B0(uStack00000014,*puStack_3c,puStack_3c[1],uVar1);
    fn_8265D3D0(&uStack_40);
  }
  return;
}

