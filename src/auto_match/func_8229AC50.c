extern unsigned int *auStack_210;
extern int fn_8229EC50();
extern int fn_82358FD8();


void fn_8229AC50(int param_1)

{
  unsigned char auStack_210 [512];
  
  fn_82358FD8(*(unsigned int *)(param_1 + 0x1c),auStack_210,0x100,"replay");
  fn_8229EC50(*(unsigned int *)(param_1 + 0x10),auStack_210);
  return;
}

