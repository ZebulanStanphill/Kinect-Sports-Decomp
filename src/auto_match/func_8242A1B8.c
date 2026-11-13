extern unsigned int *auStack_60;
extern int fn_8223C478();
extern int fn_82429A78();
extern int fn_828ABF58();
extern int fn_828AC330();
extern int fn_828E9DB8();
extern unsigned int lbl_821B8BDC;
extern unsigned int lbl_821B8C30;
extern unsigned int uStack_3c;
extern unsigned int uStack_6c;


void fn_8242A1B8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned char **ppuStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_60 [32];
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [14];
  
  uStack_3c = 0;
  ppuStack_40 = &lbl_821B8C30;
  fn_828ABF58(aiStack_38,0,0,7);
  ppuStack_70 = *(unsigned char ***)(param_3 + 8);
  (**(int (***)())(aiStack_38[0] + 0x10))(aiStack_38,param_2,&ppuStack_70);
  fn_828ABF58(auStack_60,0,4,0x18);
  fn_828AC330(auStack_60,param_2,param_3 + 0xc);
  if (*(int *)(param_3 + 0x10) == 0) {
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,0,1);
  }
  else {
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,1,1);
    uStack_6c = 0;
    ppuStack_70 = &lbl_821B8BDC;
    fn_82429A78(&ppuStack_70,param_2,(int *)(param_3 + 0x10));
  }
  return;
}

