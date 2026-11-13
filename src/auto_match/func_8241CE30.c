extern unsigned int fStack_30;
extern int fn_823B65F8();
extern int fn_823B6A20();
extern int fn_823B6C60();
extern unsigned int iStack_34;
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8241CE30(double param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  float fStack_30;
  
  uVar1 = *(unsigned int *)(*param_2 + 0x8c);
  iVar2 = fn_823B6C60(uVar1);
  iVar3 = fn_823B6A20(uVar1);
  if (((iVar3 != 0) && (3 < iVar2)) && (iVar2 < 0x18)) {
    fStack_30 = (float)param_1;
    uStack_3c = 2;
    ppuStack_40 = &lbl_821B9BC8;
    uStack_38 = param_4;
    iStack_34 = iVar2;
    fn_823B65F8(uVar1,&ppuStack_40);
  }
  return;
}

