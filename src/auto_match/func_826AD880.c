extern unsigned int *auStack_20;
extern int fn_826A9280();
extern int fn_826A9318();
extern int fn_826A9CB8();
extern int fn_826AA460();
extern int fn_826AA890();


void fn_826AD880(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int auStack_20 [2];
  
  fn_826A9280(param_1 + 0x14,"tag %d: DoActionLoader\n",*param_2);
  fn_826A9318(param_1 + 0x14,"-- actions in frame %d\n",*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x78));
  uVar1 = fn_826A9CB8(param_1);
  fn_826AA890(uVar1,param_1);
  auStack_20[0] = (unsigned int)uVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_20);
  return;
}

