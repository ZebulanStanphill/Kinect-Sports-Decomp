extern int fn_82FA5060();
extern unsigned int lbl_831BC978;


unsigned __int64 fn_8304FED0(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) & 0xfbffffff;
  iVar2 = fn_82FA5060(lbl_831BC978,0x24);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    *(unsigned int *)(iVar2 + 0x1c) = *(unsigned int *)(iVar2 + 0x1c) & 0x7fffffff;
    if (param_3 == 0) {
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
    }
    else {
      puVar4 = (unsigned int *)(param_3 + -4);
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = 1;
      lVar5 = 5;
      puVar3 = *(unsigned int **)(param_1 + 0x10);
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar1 = 1;
    **(unsigned int **)(param_1 + 0x10) = param_2;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x18) = param_4;
  }
  return uVar1;
}

