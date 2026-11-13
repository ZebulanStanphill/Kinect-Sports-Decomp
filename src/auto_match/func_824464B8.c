extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82440B28();
extern int fn_82440D08();
extern int fn_82440E68();
extern int fn_82441F88();
extern int fn_8252A1B0();


void fn_824464B8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 auStack_40 [2];
  unsigned char auStack_30 [32];
  
  uVar1 = fn_82440E68(**(unsigned int **)(param_1 + 8),
                            (*(unsigned int **)(param_1 + 8))[1] + 0xff & 0xff);
  auStack_40[0] = (unsigned __int64)(unsigned int)(*(unsigned int **)(param_1 + 8))[1] + 0xff & 0xff;
  fn_82440B28(uVar1,(double)((float)auStack_40[0] *
                                  *(float *)(*(int *)**(unsigned int **)(param_1 + 8) + 4)),auStack_30
                   );
  fn_82440D08(uVar1,auStack_40,**(unsigned int **)(param_1 + 8));
  fn_82441F88(param_1);
  if (**(int **)(param_1 + 4) != 0) {
    fn_8252A1B0(**(int **)(param_1 + 4),auStack_40,0);
  }
  return;
}

