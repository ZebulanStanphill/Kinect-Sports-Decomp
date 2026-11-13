extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D97698();
extern int fn_82D97748();
extern int fn_82D977A8();
extern unsigned int *lbl_8323B464;


unsigned __int64 fn_82DED570(int *param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_240 [16];
  unsigned char auStack_230 [512];
  
  iVar1 = (**(int (***)())(*param_1 + 0x20))();
  if (iVar1 == 2) {
    *param_2 = param_1[0x2c];
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    if (iVar1 != 7) {
      *param_4 = 0;
      *param_3 = 0;
      *param_2 = 0;
      fn_82CEE578(auStack_240,auStack_230,0x200);
      fn_82CEDB38(auStack_240,0xffffffff821453ec);
      (**(int (***)())(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbae233,auStack_230,0xffffffff82145380,0x104);
                    /* WARNING: Subroutine does not return */
      fn_82CED958(auStack_240);
    }
    iVar1 = fn_82D97698(param_1);
    *param_2 = iVar1;
    uVar2 = fn_82D97748(param_1);
    *param_3 = uVar2;
    uVar2 = fn_82D977A8(param_1);
    *param_4 = uVar2;
  }
  return 0;
}

