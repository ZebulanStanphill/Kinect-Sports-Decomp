extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern int fn_82CEA280();
extern int fn_82CED958();
extern int fn_82CED9E8();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82E0A208(int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_260 [16];
  unsigned char auStack_250 [592];
  
  if (0 < (int)param_2) {
    do {
      if ((*param_1 != 0) && (param_1[1] == 0)) {
        iVar2 = fn_82CEA280(param_3,*param_1,0);
        param_1[1] = iVar2;
        if (iVar2 == 0) {
          fn_82CEE578(auStack_260,auStack_250,0x200);
          iVar2 = *param_1;
          uVar1 = fn_82CEDB38(auStack_260,0xffffffff8214a6fc);
          uVar1 = fn_82CED9E8(uVar1,iVar2);
          uVar1 = fn_82CEDB38(uVar1,0xffffffff82132f70);
          fn_82CEDB38(uVar1,0xffffffff8214a730);
          (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0x67fde46,auStack_250,0xffffffff8214a7b0,0x5d);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_260);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 2;
    } while (param_2 != 0);
  }
  return;
}

