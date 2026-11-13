void fn_82FE0660(unsigned param_1,int *param_2)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0xd8) != 0) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0xcc) != 0) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(unsigned char *)(param_1 + 0xcc));
    }
    (*(int (**)())(*param_2 + 8))(param_2,*(unsigned *)(param_1+0xd8));
    *(unsigned int *)(param_1 + 0xd8) = 0;
  }
  return;
}

