#define true 1
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82A1F2F8();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F91650();
extern int fn_82F918D8();
extern int fn_82F91960();
extern int fn_82F94750();
extern int fn_82F952E8();
extern int fn_82F95CC0();
extern unsigned int iStack00000014;


void fn_82F90EF8(int param_1)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  char cVar4;
  unsigned int *puVar3;
  int iStack00000014;
  unsigned char auStack_40 [1];
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [16];
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_40,param_1 + 0xc);
  uVar2 = fn_82A1F2F8();
  *(unsigned int *)(iStack00000014 + 0x5c) = uVar2;
  *(unsigned int *)(iStack00000014 + 0x58) = 0;
  fn_82F91650(auStack_30,iStack00000014 + 0x68);
  while( true ) {
    uVar1 = fn_82F94750(auStack_20,iStack00000014 + 0x68);
    cVar4 = fn_82F952E8(auStack_30,uVar1);
    if (cVar4 == '\0') break;
    puVar3 = (unsigned int *)fn_82F95CC0(auStack_30);
    (*(int (**)())**(unsigned int **)*puVar3)((unsigned int *)*puVar3);
    fn_82F91960(auStack_28,auStack_30,0);
  }
  fn_82F918D8(iStack00000014 + 0x68);
  fn_82F90680(auStack_40);
  return;
}

