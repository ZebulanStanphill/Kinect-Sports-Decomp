extern unsigned int *auStack_820;
extern unsigned int *auStack_838;
extern unsigned int *auStack_840;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_82358FD8();
extern int fn_82672C20();
extern unsigned int iStack_834;
extern unsigned int iStack_83c;
extern unsigned int uStack_84c;
extern unsigned int uStack_850;
extern unsigned int uStack_85c;
extern unsigned int uStack_860;


void fn_823DBA60(int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_860;

  unsigned char *puStack_858;
  struct { unsigned int first; unsigned int second; } stack_pair_850;

  double dStack_848;
  unsigned char auStack_840 [4];
  int iStack_83c;
  unsigned char auStack_838 [4];
  int iStack_834;
  __int64 lStack_830;
  unsigned char auStack_820 [2080];

  iVar1 = *(int *)(*param_1 + 0xd4);
  fn_82358FD8(*(unsigned int *)(iVar1 + 0x1c),auStack_820,0x400,0xffffffff821aaefc);
  stack_pair_860.first = 0;
  stack_pair_860.second = 0;
  fn_82273CD8(&stack_pair_860.first,5);
  puStack_858 = auStack_820;
  puVar2 = (unsigned int *)fn_8229AE10(auStack_838,iVar1);
  fn_82672C20(*puVar2,0xffffffff821aaf0c,&stack_pair_860.first,1);
  if (iStack_834 != 0) {
    fn_822315A0();
  }
  stack_pair_850.first = 0;
  stack_pair_850.second = 0;
  fn_82273CD8(&stack_pair_850.first,3);
  lStack_830 = (__int64)param_2;
  dStack_848 = (double)lStack_830;
  puVar2 = (unsigned int *)fn_8229AE10(auStack_840,iVar1);
  fn_82672C20(*puVar2,0xffffffff821aaf14,&stack_pair_850.first,1);
  if (iStack_83c != 0) {
    fn_822315A0();
  }
  fn_82273C88(&stack_pair_850.first);
  fn_82273C88(&stack_pair_860.first);
  return;
}
