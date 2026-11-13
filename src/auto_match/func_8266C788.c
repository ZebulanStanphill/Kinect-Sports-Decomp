extern unsigned int *auStack_40;
extern int fn_8251F718();
extern int fn_8251FB08();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82526B90();
extern int fn_82674108();
extern int fn_82674580();


void fn_8266C788(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char auStack_40 [1];

  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  uVar2 = *(unsigned int *)(param_1 + 0x20);
  fn_82520158(0xffffffff82002b44,auStack_40,0);
  lVar3 = fn_8251F718(auStack_40);
  uVar4 = fn_8251FBA8();
  uVar4 = (uVar4 & 0xffffffff) / 0x88;
  if ((int)uVar4 != 0) {
    lVar6 = lVar3 + 0x84;
    do {
      iVar5 = fn_82526B90(lVar6 + -0x84,0xffffffff82002b34);
      if (iVar5 == 0) {
        fn_82674580(uVar1,lVar6 + -4);
        fn_82674108(uVar2,lVar6);
      }
      uVar4 = uVar4 - 1;
      lVar6 = lVar6 + 0x88;
    } while (uVar4 != 0);
  }
  fn_8251FB08(lVar3);
  return;
}
