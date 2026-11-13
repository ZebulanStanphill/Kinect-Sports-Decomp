void fn_82DA5F98(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(char *)(iVar1 + 4) == '\x02') {
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
    (*(int (**)())(*(int *)(*(char *)(iVar1 + 0x10) + iVar1) + 0x1c))
              (*(char *)(iVar1 + 0x10) + iVar1,(int)*(char *)(param_2[1] + 5) + param_2[1]);
  }
  iVar1 = param_2[1];
  if (*(char *)(iVar1 + 4) == '\x02') {
    iVar1 = *(char *)(iVar1 + 5) + iVar1;
    (*(int (**)())(*(int *)(*(char *)(iVar1 + 0x10) + iVar1) + 0x1c))
              (*(char *)(iVar1 + 0x10) + iVar1,(int)*(char *)(*param_2 + 5) + *param_2);
  }
  return;
}

