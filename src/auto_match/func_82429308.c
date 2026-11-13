extern unsigned int *auStack_80;
extern int fn_8223C478();
extern int fn_822CB7F8();
extern int fn_82429A78();
extern int fn_828ABF58();
extern int fn_828AC330();
extern int fn_828E9DB8();
extern unsigned int lbl_821B8BAC;
extern unsigned int lbl_821B8BC4;
extern unsigned int lbl_821B8BDC;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;
extern unsigned int uStack_8c;


void fn_82429308(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_80 [32];
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  int aiStack_58;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [14];
  
  uStack_5c = 0;
  ppuStack_60 = &lbl_821B8BAC;
  fn_828ABF58(&aiStack_58,0,0,3);
  ppuStack_90 = *(unsigned char ***)(param_3 + 8);
  (**(int (***)())(aiStack_58 + 0x10))(&aiStack_58,param_2,&ppuStack_90);
  fn_828ABF58(auStack_80,0,0xe,0x18);
  fn_828AC330(auStack_80,param_2,param_3 + 0xc);
  if (*(int *)(param_3 + 8) == 1) {
    fn_822CB7F8(param_2,param_3 + 0x10,3,8,3,8,3,8);
    fn_822CB7F8(param_2,param_3 + 0x20,10,3,10,3,10,3);
    uStack_3c = 0;
    ppuStack_40 = &lbl_821B8BC4;
    fn_828ABF58(aiStack_38,0,0,2);
    ppuStack_90 = *(unsigned char ***)(param_3 + 0x40);
    (**(int (***)())(aiStack_38[0] + 0x10))(aiStack_38,param_2,&ppuStack_90);
    iVar1 = *(int *)(param_3 + 0x38);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
    iVar1 = *(int *)(param_3 + 0x34);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
  }
  else if (*(int *)(param_3 + 8) == 2) {
    uStack_8c = 0;
    ppuStack_90 = &lbl_821B8BDC;
    fn_82429A78(&ppuStack_90,param_2,param_3 + 0x68);
  }
  return;
}

