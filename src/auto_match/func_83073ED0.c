extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern int fn_8306E7E8();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EE38();
extern int fn_83075D90();
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_8208DDCC;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_83073ED0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs59 [16];
  unsigned char in_vs61 [16];
  
  dVar1 = (double)fn_82F6DA24();
  altv207_13(in_vs36,in_vs43);
  altv207_13(in_vs36,in_vs42);
  dVar2 = (double)fn_8306EE38();
  dVar5 = (double)lbl_821AAD20;
  if (((double)lbl_82196080 < dVar2) &&
     (dVar2 = (double)fn_8306EE38(), (double)lbl_82196080 < dVar2)) {
    fn_8306EDB0();
    fn_8306EDB0();
    dVar2 = (double)fn_8306ED98();
    if ((double)lbl_82186E6C <= dVar2) {
      fn_8306EDB0();
      fn_8306EDB0();
      fn_8306EDB0();
      fn_8306EDB0();
      uVar3 = fn_8306ED98();
      uVar4 = fn_8306ED98();
      dVar2 = (double)fn_8306E7E8(uVar4,uVar3);
      if (dVar2 <= (double)lbl_8208DDCC) goto LAB_83074008;
    }
    fn_83075D90(dVar5,param_3,3);
  }
LAB_83074008:
  altv207_13(in_vs32,in_vs61);
  altv207_13(in_vs59,in_vs43);
  dVar2 = (double)fn_8306EE38();
  if (lbl_8201FBC0 < (float)(dVar2 / dVar1)) {
    fn_83075D90(dVar5,param_3,3);
  }
  fn_82F6DCBC();
  return;
}

