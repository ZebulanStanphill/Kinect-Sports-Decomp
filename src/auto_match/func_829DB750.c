extern int fn_829E37D0();
extern int fn_829E37E0();
extern int fn_829E3800();
extern int fn_829E3C40();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B18;
extern unsigned int lbl_83217B30;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_829DB750(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned __int64 uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  fn_829E37D0(0xffffffff83217b50,param_1);
  fn_829E37E0(0xffffffff83217b50,param_3);
  fn_829E3800(0xffffffff83217b50,param_6);
  *param_4 = (((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF);
  uVar1 = lbl_821AAD20;
  *param_5 = (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF);
  *param_2 = uVar1;
  if ((((unsigned __int64)(lbl_83217B30) >> 32) & 0xFFFFFFFF) != 0) {
    uStack_68 = 1;
    uStack_64 = 1;
    uStack_70 = lbl_82005748;
    uStack_60 = 4;
    uStack_6c = lbl_82005748;
    uStack_58 = 1;
    uStack_4c = lbl_8201EBA4;
    uStack_50 = 0;
    uStack_48 = lbl_8201FBB0;
    fn_829E3C40((((unsigned __int64)(lbl_83217B30) >> 32) & 0xFFFFFFFF),&uStack_70);
    *param_2 = uStack_4c;
  }
  return;
}

