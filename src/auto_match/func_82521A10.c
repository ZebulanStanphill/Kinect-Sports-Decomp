extern int fn_82521AB0();
extern int fn_82522D98();
extern int fn_828EA610();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82521A10(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  
  if ((*(char *)(param_2 + 0xd8) == '\0') && (cVar2 = fn_828EA610(param_2), cVar2 == '\0')) {
    *(unsigned int *)(param_2 + 0x11c) = 1;
    puVar3 = (unsigned int *)(param_1 + 0xa0);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,param_1 + 0xa0);
      *puVar3 = uVar1;
    }
    fn_82521AB0(param_2);
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x14);
  }
  return;
}

