extern int fn_83024968();
extern unsigned int lbl_831BC774;


void fn_82FEC6E0(unsigned int param_1,unsigned char param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = lbl_831BC774; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x16c) == param_1) {
      fn_83024968(puVar1[2],0,param_2);
    }
  }
  return;
}

