extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_824E3740();


void fn_824E4058(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_824E3740();
  if (*(int *)(iVar2 + 0x10) != 0) {
    fn_8226D6A0();
    *(unsigned int *)(iVar2 + 0x10) = 0;
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    iVar1 = *(int *)(iVar2 + 0x1c);
    *(unsigned int *)(iVar2 + 0x1c) = 0;
    *(unsigned int *)(iVar2 + 0x18) = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  return;
}

