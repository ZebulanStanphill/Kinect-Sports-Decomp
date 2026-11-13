#define true 1
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE66A0();
extern int fn_82BEA200();
extern int fn_82BEA230();


unsigned __int64 fn_82BE7128(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(unsigned int *)(param_1 + 0x24) = 0;
  iVar1 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e9850);
  if (iVar1 == 0) {
    return 0x2c0;
  }
  iVar1 = param_1 + 0x14;
  do {
    fn_82BE5340(iVar1);
    while( true ) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        fn_82BEA230(param_1 + 0x2c,0xffffffff820e9850);
        return 0;
      }
      iVar2 = fn_82BE5378(iVar1);
      if ((*(int *)(iVar2 + 0x14) != 0x1065) && (*(int *)(iVar2 + 0x14) != 0x1073)) break;
      fn_82BE5350(iVar1);
    }
    fn_82BE66A0();
  } while( true );
}

