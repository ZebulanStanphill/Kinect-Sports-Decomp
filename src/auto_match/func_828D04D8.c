extern unsigned int *auStack_60;
extern int fn_8265CA20();
extern int fn_828AC508();
extern int fn_828D0300();
extern int fn_828E9D28();
extern int fn_828E9D78();
extern int fn_82CE0730();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_828D04D8(int param_1,unsigned char param_2,unsigned char param_3,unsigned short param_4,
                  unsigned __int64 param_5,unsigned char param_6)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_60 [16];
  int iStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  iStack_50 = 0;
  uStack_4c = 0;
  fn_828E9D28(auStack_60,0,0);
  *(unsigned char *)(param_1 + 0x11) = param_2;
  *(unsigned char *)(param_1 + 0x12) = param_3;
  *(unsigned short *)(param_1 + 0x14) = param_4;
  fn_828AC508(param_1 + 0x18,param_5);
  *(unsigned char *)(param_1 + 0x30) = param_6;
  fn_828D0300(param_1 + 0x10,auStack_60);
  uVar1 = fn_828E9D78(auStack_60);
  iVar2 = iStack_50;
  if (iStack_50 == 0) {
    iVar2 = iStack_48;
  }
  fn_82CE0730(param_1,iVar2,uVar1,0,4);
  if (iStack_48 != 0) {
    fn_8265CA20();
  }
  return;
}

