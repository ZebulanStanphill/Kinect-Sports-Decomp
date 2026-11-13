extern int fn_82529D38();
extern unsigned int lbl_832978C8;
extern unsigned int lbl_832978CC;
extern unsigned int lbl_832978D0;
extern unsigned int lbl_832978D4;
extern unsigned int lbl_832978D8;
extern unsigned int lbl_832978DC;
extern unsigned int lbl_832978E0;
extern unsigned int lbl_832978F4;
extern unsigned int lbl_832978FC;
extern unsigned int lbl_83297A40;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned __int64 storeVectorElementWordIndexed();


unsigned __int64 fn_825BC4F8(int param_1,unsigned int param_2)

{
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  if ((lbl_83297A40 & 1) == 0) {
    lbl_83297A40 = lbl_83297A40 | 1;
  }
  lbl_832978C8 = 0;
  fn_82529D38(param_1,&uStack_58);
  lbl_832978FC = param_2;
  lbl_832978CC = storeVectorElementWordIndexed(in_vs32,0xffffffff832978c8,4);
  lbl_832978D0 = storeVectorElementWordIndexed(in_vs45,0xffffffff832978cc,4);
  lbl_832978D4 = storeVectorElementWordIndexed(in_vs44,0xffffffff832978cc,8);
  lbl_832978D8 = uStack_58;
  lbl_832978E0 = uStack_50;
  lbl_832978DC = uStack_54;
  lbl_832978C8 = lbl_832978C8 | 0x4d;
  lbl_832978F4 = *(unsigned int *)(param_1 + 0xa8);
  return 0xffffffff832978c8;
}

