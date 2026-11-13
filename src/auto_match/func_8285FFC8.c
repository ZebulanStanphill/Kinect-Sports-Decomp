extern int fn_8285FF30();
extern unsigned int uRam832115d0;


void fn_8285FFC8(int param_1,int *param_2,int *param_3)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  puVar2 = *(unsigned int **)(param_1 + 0x34);
  if (puVar2 != (unsigned int *)0x0) {
    if ((*puVar2 & 0x40000000) == 0) {
      puVar2 = puVar2 + 7;
      lVar1 = 8;
      *param_3 = *param_3 + 1;
      do {
        if ((unsigned __int64)*(unsigned short *)puVar2 != 0) {
          fn_8285FF30((unsigned __int64)*(unsigned short *)puVar2 * 0x2c + (unsigned __int64)uRam832115d0,param_2,
                        param_3);
        }
        lVar1 = lVar1 + -1;
        puVar2 = (unsigned int *)((int)puVar2 + 2);
      } while (lVar1 != 0);
    }
    else if ((*puVar2 & 0x40000000) == 0x40000000) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

