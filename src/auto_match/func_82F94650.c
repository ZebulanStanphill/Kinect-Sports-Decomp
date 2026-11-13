typedef unsigned char bool;
extern int fn_82F94268();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82F94650(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  
  do {
    puVar3 = (unsigned int *)((unsigned __int64)param_1 + 8);
    lVar2 = (unsigned __int64)*puVar3 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar2,0,(unsigned __int64)param_1 + 8);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)lVar2 == 0) {
    uStack00000014 = param_1;
    uStack0000001c = param_2;
    fn_82F94268(param_1);
  }
  return;
}

