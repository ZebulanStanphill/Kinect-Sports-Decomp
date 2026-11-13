#define true 1
extern int fn_826738F0();
extern unsigned int iStack_c;
extern unsigned int uStack_10;


unsigned __int64 fn_82673C58(int param_1,unsigned int param_2,int param_3,int param_4)

{
  int iVar1;
  struct { unsigned int first; int second; } stack_pair_10;

  
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != *(int *)(param_1 + 0x38); iVar1 = iVar1 + 8) {
    if (*(int *)(iVar1 + 4) == param_3) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x44);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x48)) {
      iVar1 = param_1 + 0x34;
      if (param_4 == 0) {
        iVar1 = param_1 + 0x44;
      }
      stack_pair_10.first = param_2;
      stack_pair_10.second = param_3;
      fn_826738F0(iVar1,&stack_pair_10.first);
      return 1;
    }
    if (*(int *)(iVar1 + 4) == param_3) break;
    iVar1 = iVar1 + 8;
  }
  return 0;
}

