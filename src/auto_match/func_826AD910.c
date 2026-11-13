extern unsigned int *auStack_30;
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826A9318();
extern int fn_826AA460();
extern int fn_826AA530();
extern int fn_826AA890();


void fn_826AD910(__int64 param_1,unsigned int *param_2)

{
  unsigned short uVar2;
  unsigned int uVar1;
  unsigned int auStack_30;
  
  uVar2 = fn_826A6A38();
  fn_826A9280(param_1 + 0x14,"  tag %d: DoInitActionLoader\n",*param_2);
  fn_826A9318(param_1 + 0x14,"  -- init actions for sprite %d\n",uVar2);
  uVar1 = fn_826AA530(param_1);
  fn_826AA890(uVar1,param_1);
  auStack_30 = (unsigned int)uVar1;
  fn_826AA460(param_1 + 0x308,&auStack_30);
  return;
}

