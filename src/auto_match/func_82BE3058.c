extern int fn_82BE1C80();
extern int fn_82BE1D18();
extern int fn_82BE2008();
extern int fn_82BE5240();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA858();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1C8;


unsigned __int64 fn_82BE3058(char *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8e58);
  if (iVar1 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 == 0) {
    uVar2 = 200;
  }
  else {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      *(unsigned int *)(lbl_8322B130 + 0x10) = 0;
      fn_82BE5240(lbl_8322B130,300,0xffffffff82196582);
    }
    else {
      if ((*(int *)(lbl_8322B130 + 0x16c) == 0) ||
         (iVar1 = fn_82BE2008(lbl_8322B130,param_1), iVar1 != 0)) {
        iVar1 = fn_82BE1C80(lbl_8322B130,param_1);
        if ((iVar1 == 0) || (*(int *)(iVar1 + 0x10) == 0xe)) {
          fn_82BE1D18(lbl_8322B130,param_1,*(int *)(lbl_8322B130 + 0x16c) != 0);
          if (*(int *)(lbl_8322B130 + 0x10) == 5) {
            *(unsigned int *)(lbl_8322B130 + 0x10) = 8;
          }
          if ((lbl_8322B1C8 == 0) && (*(int *)(lbl_8322B130 + 0x10) == 0xb)) {
            *(unsigned int *)(lbl_8322B130 + 0x10) = 10;
          }
        }
        else {
          if (*(int *)(iVar1 + 0x10) == 0xf) {
            *(unsigned int *)(iVar1 + 0x10) = 2;
          }
          *(int *)(lbl_8322B130 + 0x180) = iVar1;
          fn_82BEA858();
        }
        uVar2 = 0;
        goto LAB_82be30ac;
      }
      fn_82BE5240(lbl_8322B130,300,0xffffffff820e8e40,param_1);
    }
    uVar2 = 300;
  }
LAB_82be30ac:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8e58);
  return uVar2;
}

