extern int fn_8267BE38();
extern int fn_82759498();
extern unsigned int lbl_820145C0;


void fn_8275A210(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &lbl_820145C0;
  if (iVar1 != 0) {
    fn_82759498(iVar1);
    fn_8267BE38(iVar1);
  }
  return;
}

