#define true 1
extern unsigned int *auStack_20;
extern int fn_82FAE140();
extern unsigned int uStack_18;


unsigned __int64 fn_82FAA060(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned char auStack_20 [8];
  unsigned int uStack_18;
  int *piStack_14;
  
  uStack_18 = (**(int (***)())(**(int **)(param_1 + 8) + 0x18))();
  if (uStack_18 != 0) {
    piStack_14 = *(int **)(uStack_18 + 4);
    if (piStack_14 != (int *)0x0) {
      iVar3 = piStack_14[0x10];
      while( true ) {
        if (iVar3 != 0) {
          uVar1 = *(unsigned int *)(iVar3 + 0x5c);
          lVar2 = fn_82FAE140(*(unsigned int *)(iVar3 + 0x60));
          return lVar2 + (unsigned __int64)uVar1;
        }
        piStack_14 = (int *)(**(int (***)())(*piStack_14 + 0xc))
                                      (piStack_14,*(unsigned int *)(param_1 + 8),&uStack_18,auStack_20
                                      );
        if (piStack_14 == (int *)0x0) break;
        iVar3 = piStack_14[0x10];
      }
      iVar3 = (**(int (***)())(**(int **)(param_1 + 8) + 0x20))();
      return (unsigned __int64)*(unsigned int *)(iVar3 + 0xac);
    }
  }
  return 0;
}

