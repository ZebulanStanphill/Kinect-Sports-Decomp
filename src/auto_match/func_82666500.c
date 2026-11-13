extern unsigned int *auStack_10;
extern unsigned int *auStack_14;
extern unsigned int *auStack_1c;
extern int fn_82666C38();
extern int fn_82668D40();
extern int fn_82668D80();
extern unsigned int uStack00000014;
extern unsigned int uStack_18;


void fn_82666500(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uStack00000014;
  unsigned char auStack_1c [4];
  unsigned int uStack_18;
  unsigned char auStack_14 [1];
  unsigned char auStack_10 [1];

  uStack00000014 = param_1;
  puVar2 = (unsigned int *)fn_82668D80(auStack_1c,param_1);
  uVar1 = *puVar2;
  puVar2 = (unsigned int *)fn_82668D40(auStack_14,uStack00000014);
  uStack_18 = *puVar2;
  fn_82666C38(auStack_10,uStack00000014,uStack_18,uVar1);
  return;
}
