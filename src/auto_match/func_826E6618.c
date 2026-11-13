extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_826D7220();
extern int fn_826E5AE8();
extern int fn_826F5070();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;


unsigned __int64 fn_826E6618(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  unsigned char auStack_38 [8];
  
  uVar1 = fn_8267B890(lbl_831E7E64,0x54,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826F5070(uVar1,param_1,0,0);
  }
  if ((param_3 & 0x40) != 0) {
    *(unsigned char *)(iVar2 + 0x44) = 1;
  }
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar3 = 0;
  }
  else {
    uStack_40 = 0;
    fn_8268C510(auStack_3c,param_2);
    fn_8268B330(auStack_38);
    uVar3 = fn_826E5AE8(iVar2,&uStack_40,param_3,0,param_4);
    fn_826D7220(&uStack_40);
  }
  fn_8267C4F0(iVar2);
  return uVar3;
}

