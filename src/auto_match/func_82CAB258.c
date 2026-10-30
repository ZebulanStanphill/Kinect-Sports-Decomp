extern void fn_82C53970(unsigned int p);

void fn_82CAB258(unsigned int *param_1)
{
  unsigned int iVar1;

  if ((param_1 != (unsigned int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    if (*(unsigned int *)(iVar1 + 0x24) != 0) {
      fn_82C53970(*(unsigned int *)(iVar1 + 0x24));
      *(unsigned int *)(iVar1 + 0x24) = 0;
    }
    if (*(unsigned int *)(iVar1 + 0x30) != 0) {
      fn_82C53970(*(unsigned int *)(iVar1 + 0x30));
      *(unsigned int *)(iVar1 + 0x30) = 0;
    }
    if (*(unsigned int *)(iVar1 + 0x1c) != 0) {
      fn_82C53970(*(unsigned int *)(iVar1 + 0x1c));
      *(unsigned int *)(iVar1 + 0x1c) = 0;
    }
    if (*param_1 != 0) {
      fn_82C53970(*param_1);
      *param_1 = 0;
    }
  }
}
