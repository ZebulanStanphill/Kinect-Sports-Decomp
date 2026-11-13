extern int free();
extern unsigned int lbl_8329F620;


void fn_82F7F2A0(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = &lbl_8329F620;
  do {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar2 = uVar1;
      if (uVar1 < uVar1 + 0x900) {
        do {
          uVar2 = uVar2 + 0x48;
        } while (uVar2 < uVar1 + 0x900);
      }
      free();
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < -0x7cd608e0);
  return;
}

