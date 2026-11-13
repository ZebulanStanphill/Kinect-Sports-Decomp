typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82359DB8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82373AC0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  fn_82359DB8(&uStack_20,param_2 + 0x40,*(unsigned int *)(param_2 + 0x54));
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = (unsigned __int64)uStack_1c;
  if (uVar3 != 0) {
    do {
      puVar2 = (unsigned int *)(uVar3 + 4);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,uVar3 + 4);
        *puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = uStack_1c;
  *param_1 = uStack_20;
  if (uVar3 != 0) {
    fn_822315A0(uVar3);
  }
  return param_1;
}

