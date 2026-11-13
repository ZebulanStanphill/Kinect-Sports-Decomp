extern int fn_822315A0();
extern int fn_8251FBA8();
extern int fn_82522D98();
extern int fn_827D5070();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82520360(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  
  lVar2 = fn_827D5070(*param_1);
  if (lVar2 == 0) {
    puVar3 = (unsigned int *)(param_2 + 4);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 - 1,0,param_2 + 4);
      *puVar3 = uVar1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    return;
  }
  fn_8251FBA8(lVar2);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x10);
}

