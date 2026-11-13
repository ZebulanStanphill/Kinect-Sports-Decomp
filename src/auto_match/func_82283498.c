extern unsigned int *auStack_40;
extern int fn_8225F160();
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82279AF0();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_8249ABC0();
extern int fn_8249B450();
extern int fn_8249D128();
extern int fn_8249D278();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F64020();
extern unsigned int lbl_821A8B24;
extern unsigned int lbl_8329618C;


void fn_82283498(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  double dVar10;
  unsigned char auStack_40 [40];
  
  *param_1 = &lbl_821A8B24;
  if (lbl_8329618C == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar5 != 0) {
    iVar1 = *(int *)(*(int *)(iVar5 + 0xd54) + 0x14);
    if (((iVar1 != 0) && (*(int *)(*(int *)(iVar5 + 0xd54) + 0x18) == 0)) &&
       (piVar2 = *(int **)(iVar1 + 0x18), piVar2 != (int *)0x0)) {
      (**(int (***)())(*piVar2 + 0x8c))();
    }
  }
  if (param_1[0x52] != 0) {
    fn_822848B8();
    param_1[0x52] = 0;
  }
  if (param_1[0x51] != 0) {
    fn_8229E090(param_1[0x51],1,0);
    param_1[0x51] = 0;
  }
  iVar5 = fn_8249ABC0();
  if (param_1[0x53] != -1) {
    fn_8249D980(*(unsigned int *)(iVar5 + 0x110));
    param_1[0x53] = 0xffffffff;
  }
  if (param_1[0x54] != -1) {
    fn_8249DA08();
    param_1[0x54] = 0xffffffff;
  }
  iVar5 = fn_8249ABC0();
  if (param_1[0x55] != -1) {
    fn_8249D128(*(unsigned int *)(iVar5 + 0xec));
    param_1[0x55] = 0xffffffff;
  }
  if (param_1[0x56] != -1) {
    fn_8249D278();
    param_1[0x56] = 0xffffffff;
  }
  iVar5 = fn_8225F160();
  lVar9 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x54) - 1;
  *(int *)(iVar5 + 0x54) = (int)lVar9;
  if (lVar9 == 0) {
    *(unsigned int *)(iVar5 + 0x50) = 0xffffffff;
  }
  fn_8249ABC0();
  fn_8249B450();
  uVar3 = param_1[0x58];
  if (uVar3 == 0) {
    uVar8 = 0xffffffff821a8ae0;
  }
  else if (uVar3 == 1) {
    uVar8 = 0xffffffff821a8ae8;
  }
  else if (uVar3 < 3) {
    uVar8 = 0xffffffff821a8af8;
  }
  else if (uVar3 == 3) {
    uVar8 = 0xffffffff821a8b04;
  }
  else if (uVar3 < 5) {
    uVar8 = 0xffffffff821a8b0c;
  }
  else if (uVar3 == 5) {
    uVar8 = 0xffffffff821a8b14;
  }
  else {
    uVar8 = 0xffffffff821a6774;
  }
  fn_82F64020(auStack_40,0x14,uVar8);
  uVar4 = param_1[0x59];
  dVar10 = (double)(float)param_1[0x57];
  pcVar6 = (char *)fn_8225F670();
  if (((*pcVar6 != '\0') && (iVar5 = fn_8225FDE0(100,1), iVar5 == 0)) &&
     (cVar7 = fn_82E1CAD0(100), cVar7 != '\0')) {
    fn_82E1CC60(dVar10,0xffffffff821a6d44);
    fn_82E1CB08(0xffffffff821a79d8,auStack_40,0);
    fn_82E1CB88(0xffffffff821a79ec,uVar4);
    fn_82E1CCA8();
  }
  fn_82279AF0(param_1);
  return;
}

