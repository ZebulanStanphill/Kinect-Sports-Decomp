extern void fn_82E1EAE0(void);
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82A1E5B8();


void fn_82E1EB30(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_82A1E0C0(0,0,fn_82E1EAE0,param_1,4,0);
  *(unsigned int *)(param_1 + 0x1c) = uVar1;
  if (5 < (int)param_2) {
    param_2 = -1;
  }
  if ((int)param_2 < 0) {
    param_2 = fn_82A1E5B8();
  }
  fn_82A1E508(*(unsigned int *)(param_1 + 0x1c),param_2);
  fn_82A1E2C0(*(unsigned int *)(param_1 + 0x1c));
  return;
}

