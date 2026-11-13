#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_823B3808();
extern int fn_82D7E470();
extern unsigned int lbl_821B0908;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int *
fn_8232ECE0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned char auStack_90 [8];
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [8];
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned char auStack_50 [80];
  
  uStack_88 = CONCAT44(param_1,(((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF));
  param_1[2] = param_3;
  param_1[3] = param_2;
  uStack_68 = uStack_88;
  uStack_60 = uStack_80;
  param_1[5] = 0;
  param_1[1] = 3;
  *param_1 = &lbl_821B0908;
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x12] = param_4;
  cVar3 = fn_82D7E470(auStack_70);
  if (cVar3 == '\0') {
    uStack_80 = uStack_68;
    uStack_78 = uStack_60;
  }
  uVar1 = *(unsigned int *)(param_1[2] + 0x3c);
  uVar2 = fn_823B3808(auStack_50,auStack_90);
  fn_822C9BF8(uVar1,param_1 + 8,uVar2);
  fn_822DBD60(auStack_90);
  return param_1;
}

