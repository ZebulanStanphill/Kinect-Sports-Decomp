typedef unsigned char bool;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826F5070();
extern int fn_826F6D78();
extern int fn_826F7480();
extern int fn_826FCB18();
extern unsigned int lbl_8200DDEC;
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_826FF2E8(unsigned int *param_1,__int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [80];
  
  param_1[3] = param_3;
  uVar6 = 0;
  param_1[4] = (int)param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8200DDEC;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar3 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = param_1[3];
    uVar5 = *(unsigned int *)(*(int *)(iVar1 + 0x6c) + 0x14);
    uVar4 = (*(int (**)())**(unsigned int **)(iVar1 + 8))(iVar1 + 8);
    uVar5 = fn_826F5070(lVar3,uVar5,uVar4,0);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = uVar5;
  fn_8268B330(auStack_60);
  fn_826F7480(param_1[3],auStack_60);
  lVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
  bVar10 = (lVar3 == 0) << 1;
  if (lVar3 != 0) {
    uVar6 = param_1[6];
    uVar4 = fn_826F6D78(auStack_50,param_2 + 0x60);
    uVar6 = fn_826FCB18(lVar3,uVar6,auStack_60,param_2 + 0xc,uVar4);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = uVar6;
  piVar7 = (int *)(**(int (***)())(*(int *)(param_1[3] + 8) + 0xc))(param_1[3] + 8,0x17);
  (**(int (***)())(*piVar7 + 4))(piVar7,param_1[5]);
  fn_8267C4F0(piVar7);
  lVar3 = ((unsigned __int64)auStack_60[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (unsigned int *)lVar3;
    uVar9 = (unsigned __int64)*puVar8;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar3);
      *puVar8 = uVar2;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (uVar9 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

