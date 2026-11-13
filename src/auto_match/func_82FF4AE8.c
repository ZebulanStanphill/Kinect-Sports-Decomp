extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82FF4AE8(double param_1,double param_2,int param_3,unsigned __int64 param_4)

{
  int (**pcVar1)();
  int iVar2;
  int iVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  float fStack_40;
  float fStack_3c;
  
  iVar3 = param_3 + 0x88;
  RtlEnterCriticalSection(iVar3);
  iVar2 = fn_82FF5200(param_3 + 4,param_4);
  if ((iVar2 == 0) || ((*(unsigned int *)(iVar2 + 0x28) & 8) == 0)) {
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    stack_pair_50.first = *(unsigned int *)(iVar2 + 0x24);
    fStack_40 = (float)param_1;
    stack_pair_50.second = *(unsigned int *)(iVar2 + 0xc);
    fStack_3c = (float)param_2;
    uStack_44 = *(unsigned int *)(iVar2 + 8);
    uStack_48 = (unsigned int)param_4;
    pcVar1 = *(int (***)())(iVar2 + 0x20);
    fn_82A1E7D8(*(unsigned int *)(param_3 + 0xa4));
    RtlLeaveCriticalSection(iVar3);
    (*pcVar1)(8,&stack_pair_50.first);
    fn_82A1E810(*(unsigned int *)(param_3 + 0xa4));
  }
  return;
}

