extern int fn_82FF3CF0();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


extern char lbl_831BC7D4[];
char fn_82FF3568(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_10;

  
  stack_pair_10.first = param_1;
  stack_pair_10.second = param_2;
  iVar1 = fn_82FF3CF0(lbl_831BC7D4,&stack_pair_10.first);
  return (iVar1 == 0) + '\x01';
}

