extern unsigned int *auStack_50;
extern int fn_82299AC8();
extern int fn_82358FD8();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82398480();
extern int fn_82508078();
extern float lbl_821917A8[];


void fn_823A3998(int param_1)

{
  int iVar1;
  unsigned char auStack_50 [64];
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
    fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),"prematch_start_match",0);
  }
  fn_823598B0(*(unsigned int *)(param_1 + 8),0);
  fn_82359928(*(unsigned int *)(param_1 + 8),0);
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x90) + 0x510) = 1;
  fn_82398480(*(unsigned int *)(param_1 + 8));
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
    fn_82358FD8(*(unsigned int *)(iVar1 + 0x1c),auStack_50,0x20,"go_prompt");
    iVar1 = *(int *)(iVar1 + 0x38);
    if (*(int *)(iVar1 + 0x1220) == 0) {
      fn_82299AC8(iVar1,auStack_50);
      *(float *)(iVar1 + 0x121c) = lbl_821917A8[2];
    }
  }
  return;
}

