extern int fn_82F1FD80();
extern int fn_82F434B0();


void fn_82F0E340(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar2 = *(unsigned int *)(param_2 + 0x10c);
  if ((iVar1 == 0) || (iVar1 == 4)) {
    (**(int (***)())(param_1 + 0x1ff8))
              (param_1,*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 0x108),uVar2,0,0,0,
               *(unsigned int *)(param_2 + 0x288));
  }
  else if ((*(int *)(param_1 + 0x84c) == 0) || (iVar1 == 1)) {
    fn_82F434B0(param_1,*(unsigned int *)(param_2 + 0x108),uVar2,*(unsigned int *)(param_2 + 0x118),
                    *(unsigned int *)(param_2 + 0x288),*(unsigned int *)(param_2 + 0x28c),
                    *(unsigned int *)(param_2 + 0x290),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + (unsigned __int64)*(unsigned int *)(param_2 + 0x25c));
  }
  else if (iVar1 == 2) {
    fn_82F1FD80(param_1,*(unsigned int *)(param_2 + 0x108),uVar2,
                      *(unsigned int *)(param_2 + 0x118),0,0,0,*(unsigned int *)(param_2 + 0x288));
  }
  return;
}

