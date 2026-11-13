extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267B8F0();
extern int fn_826EA070();
extern int fn_826EA0C0();
extern int fn_826EA5C8();
extern int fn_826EA6A0();
extern int jpeg_std_error();
extern unsigned int lbl_8200D84C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned int * fn_826EA6F8(unsigned int *param_1)

{
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar4;
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned int uStack_48;
  
  *param_1 = &lbl_8200D84C;
  uVar2 = fn_8267B8F0(lbl_831E7E64,0x540,0x20,0);
  param_1[0xc1] = uVar2;
  *(unsigned char *)((int)param_1 + 0x309) = 0;
  puVar4 = param_1 + 0x6e;
  *(unsigned char *)(param_1 + 0xc2) = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar2 = jpeg_std_error(puVar4);
  param_1[0x6e] = fn_826EA5C8;
  param_1[2] = uVar2;
  iVar3 = fn_826EA070(param_1 + 2,puVar4);
  if (iVar3 != 0) {
    uVar1 = fn_8267B890(lbl_831E7E64,0x824,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_826EA6A0(uVar1,auStack_60);
    }
    param_1[8] = uVar2;
    fn_826EA0C0(param_1 + 2,puVar4,0);
  }
  return param_1;
}

