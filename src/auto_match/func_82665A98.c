#define true 1
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8265F598();
extern int fn_8265FA58();
extern int fn_826666C8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82665A98(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  char cVar4;
  int iVar3;
  int iStack00000014;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  unsigned char auStack_20 [16];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3b8,0xffffffff8200251c);
  }
  stack_pair_30.second = 0;
  puVar2 = (unsigned int *)fn_82668D40(auStack_28,0xffffffff831e7a74);
  stack_pair_30.first = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_20,0xffffffff831e7a74);
    cVar4 = fn_82668EA0(&stack_pair_30.first,uVar1);
    iVar3 = iStack00000014;
    if (cVar4 == '\0') {
      return 0xffffffffffffffff;
    }
    puVar2 = (unsigned int *)fn_8265FA58(&stack_pair_30.first,0);
    iVar3 = fn_8265F598(*puVar2,iVar3);
    if (iVar3 == 0) break;
    fn_826666C8(auStack_24,&stack_pair_30.first,0);
    stack_pair_30.second = stack_pair_30.second + 1;
  }
  return (unsigned __int64)stack_pair_30.second;
}

