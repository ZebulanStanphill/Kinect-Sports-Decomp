#define true 1
extern int fn_82791560();


void fn_82791850(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  do {
    iVar2 = 0;
    while( true ) {
      while( true ) {
        if ((iVar1 == 0) || (iVar2 == 3)) {
          if ((*(unsigned int *)(param_1 + 8) < *(unsigned int *)(param_1 + 0x10)) && (iVar2 == 3)) {
            fn_82791560(param_1 + 8);
          }
          return;
        }
        fn_82791560(param_1 + 8);
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 != 0x2d) break;
        if (iVar2 < 2) {
          iVar2 = iVar2 + 1;
        }
      }
      if (iVar1 != 0x3e) break;
      if (iVar2 == 2) {
        iVar2 = 3;
      }
    }
  } while( true );
}

