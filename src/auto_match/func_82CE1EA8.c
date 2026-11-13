extern unsigned int *auStack_20;
extern int fn_82F6DDE0();
extern unsigned int lbl_8323A918;
extern unsigned int lbl_8323A91C;


unsigned __int64 fn_82CE1EA8(unsigned short param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned short auStack_20 [8];
  
  if (lbl_8323A91C == 0) {
    uVar1 = 0xffffffff80150005;
  }
  else {
    auStack_20[0] = param_1;
    iVar2 = fn_82F6DDE0(auStack_20,lbl_8323A91C,lbl_8323A918,4,0xffffffff82ce1e00);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff8015000e;
    }
    else {
      uVar1 = 0;
      *param_2 = (unsigned int)*(unsigned short *)(iVar2 + 2);
    }
  }
  return uVar1;
}

