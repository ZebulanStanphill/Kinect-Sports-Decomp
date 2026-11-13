extern int fn_82CFFFC8();
extern int fn_82D00000();
extern int fn_82D00020();
extern int fn_82D000A0();
extern int fn_82D002F0();


void fn_82E1ABA8(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char acStack_40;
  
  uVar1 = fn_82CFFFC8(param_2);
  fn_82D002F0(&acStack_40,param_2,uVar1);
  if (acStack_40 != '\0') {
    do {
      uVar2 = fn_82D00000(param_2,uVar1);
      uVar3 = fn_82D00020(param_2,uVar1);
      fn_82D000A0(param_1 + 0x2c,uVar2,uVar3);
      fn_82D000A0(param_1 + 0x3c,uVar3,uVar2);
      fn_82D002F0(&acStack_40,param_2,uVar1);
    } while (acStack_40 != '\0');
  }
  return;
}

