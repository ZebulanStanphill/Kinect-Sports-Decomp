extern unsigned int *auStack_810;
extern int fn_82299AC8();
extern int fn_82358FD8();
extern unsigned int lbl_821939A4;


void fn_822942C8(int param_1,int param_2)

{
  unsigned char auStack_810 [2048];
  
  fn_82358FD8(*(unsigned int *)(param_1 + 0x1c),auStack_810,0x400,
                    (&lbl_821939A4)[param_2]);
  fn_82299AC8(param_1 + 0x68,auStack_810);
  return;
}

