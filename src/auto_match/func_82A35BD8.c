typedef unsigned char bool;
extern unsigned int *auStack_70;
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


bool fn_82A35BD8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned char auStack_70 [8];
  unsigned int uStack_68;
  unsigned char *puStack_64;
  unsigned int uStack_60;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  RtlInitAnsiString(auStack_70,param_1);
  puStack_64 = auStack_70;
  uStack_68 = 0xfffffffd;
  uStack_60 = 0x40;
  iVar1 = (**(int (***)())(lbl_8315D3D0 + 0x2c))(&uStack_68,&uStack_50);
  if (iVar1 < 0) {
    fn_82A2B760();
  }
  else {
    *param_3 = uStack_20;
    *(unsigned __int64 *)(param_3 + 1) = uStack_50;
    *(unsigned __int64 *)(param_3 + 3) = uStack_48;
    *(unsigned __int64 *)(param_3 + 5) = uStack_40;
    param_3[7] = uStack_28;
    param_3[8] = uStack_24;
  }
  return iVar1 >= 0;
}

