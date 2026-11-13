#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern int fn_82A36AE8();
extern int fn_82A396F0();


unsigned __int64
fn_82A36B70(int param_1,__int64 param_2,unsigned int *param_3,char *param_4,unsigned int param_5)

{
  unsigned short uVar1;
  __int64 lVar2;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int auStack_50;
  unsigned int uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  iVar5 = param_5 - 5;
  if (param_5 < 6) {
    iVar5 = 0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
    fn_82A36AE8();
  }
  while (iVar5 != 0) {
    auStack_50 = 0;
    if (*param_4 == -1) {
      uVar1 = *(unsigned short *)(param_4 + 1);
      uVar6 = (unsigned int)*(unsigned short *)(param_4 + 3);
      param_4 = param_4 + 5;
      uVar4 = iVar5 - 5U;
      if (uVar6 < iVar5 - 5U) {
        uVar4 = uVar6;
      }
    }
    else {
      uVar6 = (unsigned int)CONCAT11(*param_4,param_4[1]);
      uVar1 = 0x8000;
      param_4 = param_4 + 2;
      uVar4 = iVar5 - 2;
    }
    fn_82A396F0(param_1 + 0x14,uVar1,param_4,uVar6,param_2,uVar1,&auStack_50);
    param_4 = param_4 + uVar6;
    param_2 = (unsigned __int64)auStack_50 + param_2;
    lVar2 = (unsigned __int64)auStack_50 + lVar2;
    uVar3 = (unsigned int)lVar2;
    iVar5 = uVar4 - uVar6;
  }
  *param_3 = uVar3;
  return 0;
}

