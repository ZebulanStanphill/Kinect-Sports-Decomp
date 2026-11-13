extern int fn_82BE19A0();
extern int fn_82BE1A10();
extern int fn_82BE2958();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82F691F0();
extern unsigned int lbl_8322B174;


void fn_82BE4D60(int param_1,char *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  *(unsigned int *)(param_1 + 100) = param_3;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x68) = lbl_8322B174;
  lbl_8322B174 = lbl_8322B174 + 1;
  iVar1 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e9210);
  if (iVar1 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 0x69;
  }
  else {
    iVar1 = fn_82BE1A10();
    if (iVar1 == 0) {
      uVar2 = 200;
    }
    else {
      fn_82BE2958(0xffffffff820e91d4);
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
        uVar2 = 500;
      }
      else {
        iVar1 = fn_82BE19A0(param_2);
        *(int *)(param_1 + 4) = iVar1;
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1 + 0x18,0,0x24);
        }
        uVar2 = 0x65;
      }
    }
    *(unsigned int *)(param_1 + 0xc) = uVar2;
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e9210);
  }
  return;
}

