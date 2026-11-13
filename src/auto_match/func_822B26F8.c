extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_38;
extern unsigned int lbl_821AC8D4;
extern unsigned int lbl_821AC910;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


unsigned __int64 fn_822B26F8(int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char *puStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uVar1 = *(unsigned int *)(&lbl_821AC910 + param_2 * 4);
  if (param_3 == 0) {
    (**(int (***)())(*param_1 + 0x40))(param_1,auStack_60);
  }
  else {
    (**(int (***)())(*param_1 + 0x38))();
  }
  uVar2 = 0;
  puStack_40 = auStack_60 + (uVar1 >> 3);
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 5;
  fn_828E9D28(auStack_50,puStack_40,5);
  if ((uVar1 & 7) != 0) {
    fn_8223C610(auStack_50,uVar1 & 7,0,0);
  }
  if (*(int *)(&lbl_821AC8D4 + param_2 * 4) != 0) {
    uVar2 = fn_8223C610(auStack_50,*(int *)(&lbl_821AC8D4 + param_2 * 4),0,0);
  }
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return uVar2;
}

