typedef unsigned char bool;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_8268C750();
extern int fn_826F5070();
extern int fn_826F6CC0();
extern int fn_826F7480();
extern unsigned int lbl_8200DD64;
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int *
fn_826FC4C0(unsigned int *param_1,int param_2,unsigned __int64 param_3,char param_4,char param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int auStack_60;
  
  uVar4 = 0;
  param_1[1] = 1;
  param_1[3] = 0;
  *param_1 = &lbl_8200DD64;
  param_1[2] = 0x20001;
  param_1[4] = 0;
  fn_8268B330(param_1 + 6);
  fn_8268C750(param_1 + 7,param_3);
  fn_8268B330(param_1 + 8);
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar2 != 0) {
    uVar4 = *(unsigned int *)(*(int *)(param_2 + 0x6c) + 0x14);
    uVar3 = (*(int (**)())**(unsigned int **)(param_2 + 8))(param_2 + 8);
    uVar4 = fn_826F5070(lVar2,uVar4,uVar3,0);
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = uVar4;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1c) + 0x14) & 0xfffffffc;
  param_1[5] = uVar1 | 0x10000;
  if (param_5 != '\0') {
    param_1[5] = uVar1 | 0x210000;
  }
  fn_826F7480(param_2,param_1 + 6);
  bVar7 = (param_4 == '\0') << 1;
  if (param_4 != '\0') {
    uVar3 = fn_826F6CC0(&auStack_60,param_1 + 7);
    fn_8268BA10(param_1 + 8,uVar3);
    lVar2 = ((unsigned __int64)auStack_60 & 0xfffffffc) + 4;
    do {
      puVar5 = (unsigned int *)lVar2;
      uVar6 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar2);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if (uVar6 == 1) {
      fn_8267BE38();
    }
  }
  return param_1;
}

