extern int fn_8265CAA0();
extern int fn_82E1F690();
extern int fn_82E20380();


void fn_82E205F8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8265CAA0(*(unsigned *)(param_1 + 0xc));
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (param_2 != 0) { uVar1 = fn_82E1F690(param_2); } else { uVar1 = fn_82E20380(); }
  *(unsigned int *)(param_1 + 0xc) = uVar1;
  return;
}

