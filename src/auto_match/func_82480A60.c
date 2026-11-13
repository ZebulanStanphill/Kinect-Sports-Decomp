extern int fn_82281868();
extern int fn_822819E0();
extern int fn_8247DD58();
extern int fn_8247F240();
extern int fn_824809B0();
extern int fn_82484BF0();
extern int fn_82485850();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82486628();
extern int fn_8265CA20();


void fn_82480A60(int param_1)

{
  unsigned int iVar1; unsigned int object;
  
  fn_82485850((unsigned __int64)*(unsigned int *)(param_1 + 0x48),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x634);
  if (*(unsigned int *)(param_1 + 0xac) != 0) {
    *(int *)(*(int *)(param_1 + 0x48) + 4) = *(int *)(param_1 + 0xac);
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_8247DD58(iVar1);
    fn_8265CA20(iVar1);
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  fn_82484BF0(*(unsigned int *)(param_1 + 0x48));
  fn_82485AC8(*(unsigned int *)(param_1 + 0x48));
  fn_82486628(*(unsigned int *)(param_1 + 0x48));
  fn_82485BD8(*(unsigned int *)(param_1 + 0x48),1);
  fn_8247F240(param_1,1);
  fn_824809B0(param_1,param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x14);
  object = *(unsigned int *)(param_1 + 0x48);
  if (*(unsigned int *)(iVar1 + 0x10) != 0) {
    fn_82281868(iVar1,object,0);
  } else if (*(int *)(iVar1 + 8) != 0) {
    fn_822819E0(iVar1,object);
  }
  *(unsigned int *)(param_1 + 0x100) = 1;
  return;
}

