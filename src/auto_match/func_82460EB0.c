extern int fn_824EF658();
extern int fn_8266F580();
extern unsigned int lbl_832765BC;


void fn_82460EB0(void)

{
  int iVar1;
  unsigned int uVar2;
  
  if (lbl_832765BC != 0) {
    iVar1 = *(int *)(lbl_832765BC + 0x38);
    if ((*(int *)(*(int *)(iVar1 + 4) + 0x10) == 1) &&
       (*(int *)(*(int *)(iVar1 + 0x444) + 0x10) != 0)) {
      fn_8266F580(*(unsigned int *)(*(int *)(iVar1 + 0x444) + 4));
      fn_824EF658();
    }
    iVar1 = *(int *)(iVar1 + 4);
    if ((*(int *)(iVar1 + 0x28) == 1) && (*(int *)(iVar1 + 0x10) != 1)) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(iVar1 + 0x28) == 1) {
        return;
      }
      uVar2 = 1;
      if (*(int *)(iVar1 + 0x10) != 1) {
        return;
      }
    }
    *(unsigned int *)(iVar1 + 0xd58) = uVar2;
  }
  return;
}

