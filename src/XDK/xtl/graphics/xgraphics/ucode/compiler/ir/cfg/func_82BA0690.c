extern int fn_82BC0088();


void fn_82BA0690(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)
           fn_82BC0088(*(int *)(param_1 + 0x814),
                             *(unsigned int *)(*(int *)(param_1 + 0x814) + 4));
  *puVar1 = param_2;
  return;
}

