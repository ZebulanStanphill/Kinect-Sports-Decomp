typedef unsigned char bool;
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_8268C510();
extern int fn_8268CAB0();
extern unsigned int lbl_82014EF8;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_8276A6E8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar6;
  unsigned int uStack_40;
  unsigned int auStack_3c [15];
  
  param_1[1] = 1;
  *param_1 = &lbl_82014EF8;
  param_1[2] = 0;
  fn_8268B330(param_1 + 3);
  uVar2 = fn_8268C510(auStack_3c,param_2);
  uVar2 = fn_8268CAB0(&uStack_40,uVar2);
  fn_8268BA10(param_1 + 3,uVar2);
  lVar3 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar5 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar6 = (uVar5 == 1) << 1;
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  lVar3 = ((unsigned __int64)auStack_3c[0] & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar5 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  param_1[4] = param_3 & 3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  param_1[2] = (int)param_4;
  return param_1;
}

