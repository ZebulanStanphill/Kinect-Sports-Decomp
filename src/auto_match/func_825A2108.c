extern int fn_825FF9D0();
extern int fn_8265C9E0();
extern int fn_827F0F58();
extern int fn_827F0FB8();
extern int fn_827F46E8();
extern int fn_827F5C20();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int fn_825A2108(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0x7b8);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  uVar2 = fn_8265C9E0(0x160);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_825FF9D0(uVar2,param_1,*(unsigned int *)(param_1 + 0x7b0),param_3);
  }
  *(int *)(param_1 + 0x7b8) = (int)uVar3;
  fn_827F0FB8(param_2,uVar3,1);
  uVar2 = fn_827F46E8(0xe8);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F5C20((double)lbl_821CA460,(double)lbl_821CA460,(double)ltcg_pool_0_0f,uVar2,0
                              ,*(unsigned int *)(param_1 + 0x7b8),param_3,
                              *(unsigned int *)(param_1 + 0x7b8),0);
  }
  fn_827F0F58(param_2,uVar3,1);
  return *(unsigned int *)(param_1 + 0x7b8);
}

