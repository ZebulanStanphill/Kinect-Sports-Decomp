extern int iRam831bf70c;


void fn_82608D38(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  
  if (iRam831bf70c != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xb4)) {
      puVar1 = (unsigned int *)(param_2 + 0xb4);
      do {
        puVar1 = puVar1 + 1;
        (**(int (***)())(*(int *)*puVar1 + 4))(param_1,(int *)*puVar1,param_3,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0xb4));
    }
  }
  return;
}

