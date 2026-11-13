extern int fn_82FA5060();


unsigned __int64 fn_82FFE1C8(int param_1)

{
  unsigned int *puVar1;
  
  if (*(unsigned int *)(param_1 + 8) != 0) {
    return 1;
  }
  if ((*(unsigned int *)(param_1 + 0x14) < *(unsigned int *)(param_1 + 0x10)) &&
     (puVar1 = (unsigned int *)fn_82FA5060(*(unsigned int *)(param_1 + 0x1c),0x28),
     puVar1 != (unsigned int *)0x0)) {
    *puVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int **)(param_1 + 8) = puVar1;
    return 1;
  }
  return 0;
}

