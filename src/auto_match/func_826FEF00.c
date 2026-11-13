typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826F5070();
extern int fn_826F7480();
extern int fn_826FC880();
extern unsigned int lbl_8200DDD4;
extern unsigned int lbl_831E7E64;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_826FEF00(unsigned int *param_1,__int64 param_2,unsigned int param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  int *piVar9;
  unsigned int *puVar10;
  char in_RESERVE;
  unsigned char bVar11;
  unsigned int auStack_40 [16];
  
  param_1[3] = param_3;
  uVar8 = 0;
  param_1[4] = (int)param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8200DDD4;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar4 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    iVar2 = param_1[3];
    uVar7 = *(unsigned int *)(*(int *)(iVar2 + 0x6c) + 0x14);
    uVar5 = (*(int (**)())**(unsigned int **)(iVar2 + 8))(iVar2 + 8);
    uVar7 = fn_826F5070(lVar4,uVar7,uVar5,0);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = uVar7;
  fn_8268B330(auStack_40);
  fn_826F7480(param_1[3],auStack_40);
  uVar6 = fn_8267B890(lbl_831E7E64,0x2c,0);
  bVar1 = (uVar6 & 0xffffffff) == 0;
  bVar11 = bVar1 << 1;
  if (!bVar1) {
    uVar8 = fn_826FC880(uVar6,param_1[6],auStack_40,param_2 + 0xc);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = uVar8;
  piVar9 = (int *)(**(int (***)())(*(int *)(param_1[3] + 8) + 0xc))(param_1[3] + 8,0x17);
  (**(int (***)())(*piVar9 + 4))(piVar9,param_1[5]);
  fn_8267C4F0(piVar9);
  lVar4 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
  do {
    puVar10 = (unsigned int *)lVar4;
    uVar6 = (unsigned __int64)*puVar10;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
      *puVar10 = uVar3;
      bVar11 = 2;
    }
  } while (!(bool)(bVar11 >> 1 & 1));
  if (uVar6 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

