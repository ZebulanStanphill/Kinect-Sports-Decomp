typedef unsigned char bool;
extern int fn_82A277E0();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BFB8C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (param_1 == 0) {
    uVar2 = fn_82A2A360();
    if (((param_3 & 0xffffffff) != 0) &&
       (lVar3 = fn_82A277E0(uVar2,0,param_2), 0 < (int)lVar3)) {
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*(unsigned int *)param_3 - lVar3,0,param_3);
          *(unsigned int *)param_3 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    uVar2 = fn_82A2A360();
    fn_82A28E60(uVar2,0,param_2);
  }
  else {
    (**(int (***)())(param_1 + 0xc))(*(unsigned int *)(param_1 + 4));
  }
  return;
}

