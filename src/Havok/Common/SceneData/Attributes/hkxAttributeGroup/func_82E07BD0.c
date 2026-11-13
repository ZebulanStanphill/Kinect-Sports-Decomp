extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern int fn_82E07840();
extern int fn_82E08B00();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82E07BD0(unsigned __int64 param_1,unsigned __int64 param_2,char param_3,unsigned int *param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_240 [16];
  unsigned char auStack_230 [512];
  
  iVar2 = fn_82E07840(param_1,param_2,0xffffffff8323f8cc);
  if (iVar2 == 0) {
    iVar2 = fn_82E07840(param_1,param_2,0xffffffff8323f46c);
    if (iVar2 == 0) {
      if (param_3 != '\0') {
        fn_82CEE578(auStack_240,auStack_230,0x200);
        uVar1 = fn_82CEDB38(auStack_240,0xffffffff82149efc);
        uVar1 = fn_82CEDB38(uVar1,param_2);
        uVar1 = fn_82CEDB38(uVar1,0xffffffff82149ec8);
        uVar1 = fn_82CEE128(uVar1,param_1);
        fn_82CEDB38(uVar1,0xffffffff82149eb4);
        (**(int (***)())(*lbl_8323B464 + 0xc))
                  (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0x80);
                    /* WARNING: Subroutine does not return */
        fn_82CED958(auStack_240);
      }
      uVar1 = 1;
    }
    else {
      fn_82E08B00(*(unsigned int *)(iVar2 + 0x20),**(unsigned int **)(iVar2 + 8),param_4);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    *param_4 = **(unsigned int **)(iVar2 + 8) & 0xfffffffe;
  }
  return uVar1;
}

