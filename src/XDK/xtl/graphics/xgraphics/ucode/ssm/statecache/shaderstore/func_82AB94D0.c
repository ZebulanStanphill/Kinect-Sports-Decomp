extern int fn_82AB15D0();
extern int fn_82AB9358();
extern int fn_82B6B0C8();
extern int fn_82B6E2F8();
extern int fn_82B6E520();
extern int fn_82B6E6D0();
extern int fn_82B6E928();


unsigned __int64 fn_82AB94D0(int *param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x185);
  }
  if (((param_1[5] != 0) && (param_1[6] != 0)) && (uVar3 = 1, 1 < (unsigned int)param_1[4])) {
    do {
      iVar2 = fn_82B6E520(param_1[5],uVar3);
      if (iVar2 != 0) {
        lVar1 = fn_82B6E928(param_1[6],*(unsigned int *)(iVar2 + 4),*(unsigned int *)(iVar2 + 8));
        if (lVar1 == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,0x1a7);
        }
        fn_82AB9358(param_1,lVar1);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[4]);
  }
  if (param_1[5] != 0) {
    fn_82B6E2F8();
  }
  if (param_1[6] != 0) {
    fn_82B6E6D0();
  }
  if (*param_1 != 0) {
    fn_82B6B0C8();
  }
  (*(int (**)())param_1[3])(param_1[1],param_1);
  return 0;
}

