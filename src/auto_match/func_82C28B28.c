extern int fn_82C28A68();


void fn_82C28B28(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(__int64 *)(iVar1 + 0x28) == *(__int64 *)(iVar1 + 0x20)) ||
     (iVar1 = (*(int (**)())**(unsigned int **)(iVar1 + 0x4c))(*(unsigned int **)(iVar1 + 0x4c)), -1 < iVar1
     )) {
    fn_82C28A68(param_1,param_2);
  }
  return;
}

