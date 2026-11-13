extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEA420();


void fn_82BEFCE8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar4 = param_1 + 0x4c;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x54) != 0) {
      puVar1 = (unsigned int *)fn_82BE5378(iVar4);
      iVar2 = fn_82BEA420(*(unsigned int *)(param_1 + 0x18),*puVar1);
      if (iVar2 != 0) {
        iVar5 = iVar2 + 0x3c;
        fn_82BE5340(iVar5);
        while (*(int *)(iVar2 + 0x44) != 0) {
          iVar3 = fn_82BE5378(iVar5);
          *(unsigned __int64 *)(iVar3 + 0xd0) = 0;
          iVar3 = fn_82BE5378(iVar5);
          *(unsigned __int64 *)(iVar3 + 0x70) = 0;
          fn_82BE5350(iVar5);
        }
      }
      fn_82BE5350(iVar4);
    }
  }
  *(unsigned char *)(param_1 + 0x40) = 0;
  return;
}

