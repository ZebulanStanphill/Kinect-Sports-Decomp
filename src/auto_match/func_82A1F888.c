extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


void fn_82A1F888(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_50 [2];
  unsigned char auStack_48 [8];
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [8];
  unsigned int uStack_30;
  unsigned char *puStack_2c;
  unsigned int uStack_28;
  
  RtlInitAnsiString(auStack_48,0xffffffff820892a4);
  uStack_30 = 0xfffffffd;
  puStack_2c = auStack_48;
  uStack_28 = 0x40;
  uStack_40 = 0x10000;
  if (param_2 == 0) {
    uVar2 = 0x120089;
  }
  else {
    uVar2 = 0x120116;
  }
  iVar1 = (**(int (***)())(lbl_83219B8C + 0xc))(auStack_50,uVar2,&uStack_30,auStack_38,&uStack_40,0,0,3)
  ;
  if (-1 < iVar1) {
    *param_1 = auStack_50[0];
  }
  return;
}

