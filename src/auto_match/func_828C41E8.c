extern unsigned int *auStack_20;
extern int fn_828C3EF0();
extern int fn_828C4110();


void fn_828C41E8(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_828C3EF0(auStack_20,param_1 + 0x1b0,*(unsigned int *)(param_1 + 0x1b0),
                    *(unsigned int *)(param_1 + 0x1b4));
  fn_828C4110(param_1 + 0x1b0,param_2);
  return;
}

