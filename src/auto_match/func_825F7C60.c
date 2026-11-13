#define true 1
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8262F8D8();
extern int fn_82630040();


void fn_825F7C60(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  param_1 = (int *)*param_1;
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98((unsigned __int64)(unsigned int)param_1[0xc] * 0x50);
      }
      iVar2 = fn_82630040(param_1[0xc] << 7,0,0);
      *param_1 = iVar2;
      if (iVar2 != 0) {
        uVar1 = *(unsigned int *)(iVar2 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
        fn_8262F8D8(iVar2,10,0,uVar1,0,uVar1,*(unsigned int *)(iVar2 + 0x1c) & 0x3fffffc,0);
      }
      fn_82522ED8(param_1[0xb]);
      param_1[0xb] = 0;
    }
    param_1 = (int *)param_1[0x13];
  } while( true );
}

