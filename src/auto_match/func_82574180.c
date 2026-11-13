extern int fn_822315A0();
extern int fn_825B4F08();
extern int fn_827D5070();


void fn_82574180(unsigned int *param_1)

{
  int iVar1;
  unsigned char uVar2;
  
  iVar1 = fn_827D5070(*param_1);
  if (*(unsigned int *)(*(int *)(iVar1 + 0x10) + 0x48) != 0) {
    uVar2 = fn_825B4F08(*(unsigned int *)(*(int *)(iVar1 + 0x10) + 0x48),
                              *(unsigned int *)(*(int *)(iVar1 + 0x10) + 0x50));
    *(unsigned char *)(*(int *)(iVar1 + 0x10) + 0x5c) = uVar2;
  }
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  return;
}

