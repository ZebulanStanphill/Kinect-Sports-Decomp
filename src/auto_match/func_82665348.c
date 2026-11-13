extern unsigned int *auStack_14;
extern int fn_8265CF50();
extern int fn_8265CF70();
extern int fn_8265DED8();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82668D40();
extern int fn_8266C340();
extern int fn_82F664B0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


__int64 fn_82665348(int param_1,int param_2)

{
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iStack00000014;
  int iStack0000001c;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  int iStack_18;
  unsigned char auStack_14 [20];
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iVar3 = fn_8265CF70(0xffffffff831e7a74);
  if (iVar3 == 0) {
    thunk_FUN_82a2b748(0x15);
    return -1;
  }
  puVar4 = (unsigned int *)fn_82668D40(auStack_14,0xffffffff831e7b08);
  stack_pair_20.first = *puVar4;
  puVar4 = (unsigned int *)fn_8265FA58(&stack_pair_20.first,0);
  puVar4 = (unsigned int *)fn_8265CF50(0xffffffff831e7a74,*puVar4);
  stack_pair_20.second = *puVar4;
  if (iStack00000014 != 0) {
    iVar3 = fn_8265DED8(stack_pair_20.second);
    if (iStack0000001c <= iVar3) {
      thunk_FUN_82a2b748(0x7a);
      return -1;
    }
    uVar1 = fn_8265F570(stack_pair_20.second);
    iStack_18 = fn_82F664B0(iStack00000014,iStack0000001c,uVar1);
    if (iStack_18 != 0) {
      if (iStack_18 != 0) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x30e,0xffffffff82002420);
      }
      thunk_FUN_82a2b748(0x54f);
      return -1;
    }
  }
  lVar2 = fn_8265DED8(stack_pair_20.second);
  return lVar2 + 1;
}

