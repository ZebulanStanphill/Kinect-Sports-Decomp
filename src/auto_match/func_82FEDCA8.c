extern int fn_82FECBF0();
extern int fn_82FED848();
extern int fn_82FEF228();
extern int fn_8301DF28();
extern int fn_83024E30();
extern unsigned int lbl_832643D8;


unsigned __int64 fn_82FEDCA8(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar2 = fn_8301DF28(param_2 + 2,param_1);
  if ((int)uVar2 != 0x3f) {
    fn_82FEF228(0xffffffff83264400,param_2);
    if ((int)uVar2 == 1) {
      uVar3 = fn_82FED848(param_1);
      *param_3 = uVar3;
      if (uVar3 == 0) {
        fn_82FECBF0(param_2);
        uVar2 = 2;
      }
      else {
        param_2[1] = lbl_832643D8;
        lbl_832643D8 = lbl_832643D8 + 1;
        puVar1 = (unsigned int *)*param_3;
        *param_2 = 0;
        if ((unsigned int *)puVar1[1] == (unsigned int *)0x0) {
          *puVar1 = param_2;
        }
        else {
          *(unsigned int *)puVar1[1] = param_2;
        }
        puVar1[1] = param_2;
        puVar1[2] = puVar1[2] + 1;
        fn_83024E30((unsigned __int64)*param_3 + 0x10);
      }
    }
    else {
      fn_82FECBF0(param_2);
      uVar2 = 2;
    }
  }
  return uVar2;
}

