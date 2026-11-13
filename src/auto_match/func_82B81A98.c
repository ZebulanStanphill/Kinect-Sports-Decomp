#define true 1
extern int fn_82AD17B0();


unsigned int * fn_82B81A98(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  do {
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)fn_82AD17B0();
      *puVar2 = ((param_3 & 7) << 0x14 | param_5 & 0xff) << 5 | *puVar2 & 0xf1ffe000 |
                param_4 & 0x1f;
      return puVar2;
    }
    if (puVar2[4] != 0) {
      uVar1 = *puVar2;
      if (((((uVar1 >> 0x19 & 7) != 0) && ((uVar1 & 0x1f) == param_4)) &&
          ((uVar1 >> 0x19 & 7) == param_3)) && ((uVar1 >> 5 & 0xff) == param_5)) {
        return puVar2;
      }
    }
    puVar2 = (unsigned int *)puVar2[2];
  } while( true );
}

