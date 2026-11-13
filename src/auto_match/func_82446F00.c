extern unsigned int *auStack_70;
extern int fn_8223C478();
extern int fn_822CB7F8();
extern int fn_828ABF58();
extern int fn_828E5660();
extern int fn_828E9DB8();
extern unsigned int lbl_821B9BCC;
extern unsigned int lbl_821B9BE4;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;


void fn_82446F00(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int auStack_70 [4];
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  int aiStack_58 [6];
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [10];
  
  uStack_5c = 0;
  ppuStack_60 = &lbl_821B9BCC;
  fn_828ABF58(aiStack_58,0,0,3);
  auStack_70[0] = *(unsigned int *)(param_3 + 8);
  (**(int (***)())(aiStack_58[0] + 0x10))(aiStack_58,param_2,auStack_70);
  if (*(unsigned int *)(param_3 + 8) == 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,iVar1 != 0,1);
  }
  else if (*(unsigned int *)(param_3 + 8) < 3) {
    fn_822CB7F8(param_2,param_3 + 0x10,9,8,9,8,9,8);
    if (*(int *)(param_3 + 8) == 1) {
      fn_828E5660((double)*(float *)(param_3 + 0x20),param_2);
    }
    else {
      uStack_3c = 0;
      ppuStack_40 = &lbl_821B9BE4;
      fn_828ABF58(aiStack_38,0,0,8);
      auStack_70[0] = (unsigned int)*(unsigned char *)(param_3 + 0x24);
      (**(int (***)())(aiStack_38[0] + 0x10))(aiStack_38,param_2,auStack_70);
    }
  }
  return;
}

