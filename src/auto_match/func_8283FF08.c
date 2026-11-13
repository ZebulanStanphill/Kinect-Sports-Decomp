extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_8283FF08(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iStack00000014;
  int iStack0000001c;
  int *piStack00000024;
  unsigned int uStack_20;
  unsigned int uStack_18;
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  piStack00000024 = param_3;
  for (uStack_20 = 0; uStack_20 < *(unsigned int *)(iStack00000014 + 0x20); uStack_20 = uStack_20 + 1) {
    piVar1 = (int *)(*(int *)(iStack00000014 + 0x24) + uStack_20 * 0xc);
    if (piStack00000024 != (int *)0x0) {
      for (uStack_18 = 0; uStack_18 < (int)(unsigned int)*(unsigned short *)(*(int *)(*piVar1 + 4) + 0x12);
          uStack_18 = uStack_18 + 1) {
        (**(int (***)())(*piStack00000024 + 8))
                  (piStack00000024,
                   iStack0000001c + *(int *)(*(int *)(*(int *)(*piVar1 + 4) + 4) + uStack_18 * 0x34)
                  );
      }
    }
  }
  return;
}

