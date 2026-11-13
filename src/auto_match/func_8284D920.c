extern unsigned int *auStack_30;
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817A50();
extern int fn_8284FF60();
extern int fn_828505C0();


void fn_8284D920(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int auStack_30;
  
  fn_828176F0(*(unsigned int *)(param_1 + 0x124),".data",&auStack_30);
  fn_82817A50(auStack_30,*(unsigned int *)(param_4 + 8),param_2,param_3);
  if (*(void **)(param_1 + 0x90) != 0) {
    iVar1 = fn_82817868(auStack_30);
    *(unsigned int *)(param_3 + 4) = (iVar1 + 0xfU & 0xfffffff0) + param_3;
    fn_828505C0(param_1,param_3);
    fn_8284FF60(param_1,param_2,param_3);
  }
  return;
}

