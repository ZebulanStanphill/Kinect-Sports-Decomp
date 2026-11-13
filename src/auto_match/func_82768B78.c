#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_20 ((*(unsigned __int64*)&uStack_20))
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned short fn_82768B78(int param_1)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  unsigned int uStack_14;
  
  _uStack_20 = CONCAT44(lbl_821AAD20,lbl_821AAD20);
  uStack_18 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0xc) + 0xc))();
  if ((int)uVar1 == -1) {
    stack_pair_20.second = ((((unsigned __int64)(stack_pair_20.second)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFF)) << 16));
  }
  else {
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x30))(*(int **)(param_1 + 0xc),uVar1,&stack_pair_20.first);
    stack_pair_20.second = ((((unsigned __int64)(stack_pair_20.second)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((unsigned short)(__int64)-stack_pair_20.second)) & ((unsigned __int64)0xFFFF)) << 16));
  }
  return (((unsigned __int64)(stack_pair_20.second) >> 16) & 0xFFFF);
}

