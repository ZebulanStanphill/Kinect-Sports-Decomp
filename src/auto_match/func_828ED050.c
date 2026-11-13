extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E658();
extern int fn_82CE14C8();


void fn_828ED050(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 2) && (iVar1 != 4)) {
    if (iVar1 != 0) {
      return;
    }
    *(unsigned char *)(param_1 + 0x1e0) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    *(unsigned char *)(param_1 + 0x184) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    fn_82A1C0F0(param_1 + 0x10c);
    *(unsigned char *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x1ac) == 1) {
    fn_82A1C0F0(param_1 + 0x1c0);
  }
  fn_8265CA20(*(unsigned int *)(param_1 + 0x1b4));
  *(unsigned int *)(param_1 + 0x1b4) = 0;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  if (*(char *)(param_1 + 0x164) != '\0') {
    fn_82A1C0F0(param_1 + 0x168);
    *(unsigned char *)(param_1 + 0x164) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (unsigned int *)(param_1 + 0x58);
    lVar3 = 7;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    iVar1 = fn_82CE14C8(*(unsigned int *)(param_1 + 0x58));
    if (iVar1 == 0x3e5) {
      *(unsigned int *)(param_1 + 8) = 5;
      goto LAB_828ed184;
    }
    fn_82A1E658(*(unsigned int *)(param_1 + 0x58));
  }
  *(unsigned int *)(param_1 + 0x188) = 0;
  *(unsigned char *)(param_1 + 0x1a8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x224) = 3;
  *(unsigned int *)(param_1 + 0x58) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x184) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
LAB_828ed184:
  *(unsigned char *)(param_1 + 0x1e0) = 0;
  return;
}

