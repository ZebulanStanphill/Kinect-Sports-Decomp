#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_20 ((*(unsigned __int64*)&uStack_20))
extern unsigned int *auStack_28;
extern int fn_82A2F3F0();
extern int fn_82A2F578();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A2F770(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  int iStack_30;
  int iStack_2c;
  unsigned char auStack_28 [8];
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  *(unsigned char *)(param_1 + 0xcc) = 1;
  _uStack_20 = CONCAT44(param_3,param_4);
  if (*(char *)(param_1 + 0xca) == '\0') {
    fn_82A2F3F0(param_1,param_2,&iStack_30,&iStack_2c,auStack_28,&uStack_20);
  }
  else {
    fn_82A2F578(param_1,param_2,*(char *)(param_1 + 0xca),&iStack_30,&iStack_2c,auStack_28,
                  &uStack_20);
  }
  uVar3 = (unsigned __int64)*(unsigned char *)(param_1 + 200);
  *(unsigned char *)(param_1 + 0xcc) = 0;
  if (uVar3 != 0) {
    pbVar2 = (unsigned char *)(*(int *)(param_1 + 0x30) + -1);
    do {
      pbVar1 = pbVar2 + 8;
      pbVar2 = pbVar2 + 8;
      *pbVar2 = *pbVar1 & 0xf7;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(int *)(param_1 + 0xa4) = iStack_30 + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0xa0) = iStack_2c + *(int *)(param_1 + 0xa0);
  return;
}

