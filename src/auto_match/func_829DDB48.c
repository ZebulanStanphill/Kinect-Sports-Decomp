typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_829DD678();
extern int fn_829DD700();
extern int fn_829DD980();
extern unsigned int lbl_821AAD20;


void fn_829DDB48(__int64 param_1,int param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  int in_r0;
  char cVar3;
  __int64 lVar4;
  char *pcVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  altv207_13(in_vs32,in_vs36);
  puVar1 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  if ((fStack_30 == lbl_821AAD20) && (fStack_2c == lbl_821AAD20)) {
    bVar2 = true;
    if (fStack_28 == lbl_821AAD20) goto LAB_829ddb9c;
  }
  bVar2 = false;
LAB_829ddb9c:
  if (bVar2) {
    fn_829DD678(&fStack_30,param_1);
    altv207_13(in_vs32,in_vs35);
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
  }
  fn_829DD678(&fStack_30,param_1);
  cVar3 = fn_829DD700();
  if (cVar3 != '\0') {
    param_1 = param_1 + 0x18;
    pcVar5 = (char *)(param_2 + 0x10);
    lVar4 = 8;
    do {
      if (*pcVar5 == '\0') {
        fn_829DD980(param_1,pcVar5);
      }
      lVar4 = lVar4 + -1;
      pcVar5 = pcVar5 + 0xc;
      param_1 = param_1 + 0x260;
    } while (lVar4 != 0);
  }
  return;
}

