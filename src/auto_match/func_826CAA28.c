extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826C8590();
extern int fn_827583E8();
extern int fn_827585F0();
extern int fn_827586A8();
extern int fn_82758A28();
extern int fn_82758AC8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;


void fn_826CAA28(double param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  double dVar4;
  
  if (*(int *)(param_3 + 0x1b8) == 0) {
    iVar1 = fn_8267B890(*(unsigned int *)(*(int *)(param_3 + 0xa0) + 0x14),0x88,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82758A28();
    }
    if (*(int *)(param_3 + 0x1b8) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(param_3 + 0x1b8) = uVar2;
  }
  if ((param_5 & 0xff000000) == 0) {
    cVar3 = fn_827586A8(*(unsigned int *)(param_3 + 0x1b8));
    if (cVar3 == '\0') {
      fn_826C8590(param_3,0);
      fn_827583E8(*(unsigned int *)(param_3 + 0x1b8));
    }
  }
  else {
    if (param_1 <= (double)lbl_821AAD20) {
      param_1 = (double)lbl_82005718;
    }
    dVar4 = (double)(float)(param_1 * (double)lbl_8200571C);
    cVar3 = fn_827585F0(dVar4,param_2,*(unsigned int *)(param_3 + 0x1b8));
    if (cVar3 == '\0') {
      fn_826C8590(param_3,0);
      fn_82758AC8(dVar4,param_2,*(unsigned int *)(param_3 + 0x1b8));
    }
  }
  return;
}

