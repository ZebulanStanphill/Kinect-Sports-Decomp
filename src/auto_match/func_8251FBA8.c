extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5088();
extern int fn_827D50A0();
extern int fn_827D5668();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int lbl_83265A24;


__int64 fn_8251FBA8(unsigned __int64 param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char auStack_30 [8];
  struct { int first; int second; } stack_pair_28;

  
  lVar3 = 0;
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  fn_827D5668(lbl_83265A24,param_1,auStack_30,&stack_pair_28.first);
  iVar1 = stack_pair_28.first;
  if (stack_pair_28.first != 0) {
    lVar3 = fn_827D50A0(stack_pair_28.first);
    lVar2 = fn_827D5088(iVar1);
    lVar3 = lVar3 + lVar2;
  }
  if (stack_pair_28.second != 0) {
    fn_822315A0();
  }
  return lVar3;
}

