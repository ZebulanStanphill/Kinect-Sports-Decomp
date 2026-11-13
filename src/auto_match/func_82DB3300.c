extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_83084210();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82141F30;
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;


void fn_82DB3300(int param_1,__int64 param_2,int param_3,unsigned int param_4)

{
  unsigned char auStack_a0 [16];
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  int iStack_84;
  unsigned char *puStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_50;
  unsigned int uStack_30;
  unsigned int uStack_20;
  
  uStack_8c = (unsigned int)param_2;
  ppuStack_90 = &lbl_82141F30;
  if (param_3 == 0) {
    iStack_88 = 0;
    iStack_84 = 0;
  }
  else {
    iStack_88 = param_3 + 0x14;
    iStack_84 = param_3 + 0x10;
  }
  uStack_30 = 0;
  uStack_20 = 0;
  puStack_80 = auStack_70;
  uStack_5c = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_60 = lbl_82002AE0;
  uStack_7c = param_4;
  fn_83084210(auStack_a0,*(unsigned int *)(param_1 + 0x10),param_2,param_2 + 0x10,&ppuStack_90);
  return;
}

