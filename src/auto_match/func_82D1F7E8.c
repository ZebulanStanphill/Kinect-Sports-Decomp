#define true 1


unsigned __int64 fn_82D1F7E8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  
  puVar1 = *(unsigned int **)(param_1 + 0x2c);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      return 1;
    }
    iVar3 = 0;
    puVar2 = puVar1 + 5;
    do {
      if ((*puVar2 & 0xfffffffc) == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 3);
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

