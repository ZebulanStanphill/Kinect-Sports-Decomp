extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_82358058();
extern int fn_82359C18();
extern int fn_823C5078();
extern int fn_823C51D0();
extern int fn_823D3050();
extern int fn_823D5E98();
extern int fn_823DB2F8();
extern int fn_823EFE68();
extern int fn_824C5630();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_82554DA8();
extern int fn_82555148();
extern int fn_8256E980();
extern int fn_8265CA20();
extern unsigned int iStack_2c;
extern unsigned int lbl_821B2EC8;
extern unsigned int lbl_821CA460;


void fn_82368360(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int *piVar4;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  *param_1 = &lbl_821B2EC8;
  if (param_1[0x130] == 0) {
    fn_823C5078();
  }
  else {
    fn_823C51D0();
  }
  if (param_1[0x21] != 0) {
    puVar2 = (unsigned int *)fn_822EFBF0(auStack_30);
    fn_823EFE68(*(unsigned int *)*puVar2);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  iVar1 = param_1[300];
  if (iVar1 != 0) {
    fn_823DB2F8(iVar1);
    fn_8265CA20(iVar1);
    param_1[300] = 0;
  }
  if (param_1[0x4d1] != 0) {
    fn_82555148();
    fn_82554DA8(param_1[0x4d1]);
    param_1[0x4d1] = 0;
  }
  if (param_1[0xb2] != 0) {
    fn_82529320(param_1[0xb2],0);
  }
  if (param_1[0xb3] != 0) {
    fn_82529320(param_1[0xb3],0);
  }
  if (param_1[0xd3] != 0) {
    fn_8256E980(param_1[0xd3],param_1[0xcc]);
    fn_8256E980(param_1[0xd3],param_1[0xcd]);
    fn_8256E980(param_1[0xd3],param_1[0xce]);
    fn_8256E980(param_1[0xd3],param_1[0xcf]);
    fn_8256E980(param_1[0xd3],param_1[0xd0]);
    fn_8256E980(param_1[0xd3],param_1[0xd1]);
    param_1[0xd3] = 0;
  }
  piVar4 = param_1 + 0x385;
  lVar3 = 3;
  do {
    if (*piVar4 != 0) {
      fn_82529320(*piVar4,0);
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  iVar1 = param_1[0x388];
  if (iVar1 != 0) {
    fn_823D3050(iVar1);
    fn_8265CA20(iVar1);
  }
  if (param_1[0x12e] != 0) {
    fn_8265CA20();
  }
  param_1[0x12e] = 0;
  if (param_1[0x12f] != 0) {
    fn_8265CA20();
  }
  if (param_1[0x264] != 0) {
    fn_8265CA20();
  }
  param_1[0x264] = 0;
  *(unsigned int *)(param_1[0x4d8] + 4) = lbl_821CA460;
  piVar4 = (int *)param_1[0x12d];
  *(unsigned char *)(param_1 + 0x4d4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(int (***)())(*piVar4 + 8))(piVar4,1);
  }
  if (param_1[0x131] != 0) {
    fn_8265CA20();
  }
  puVar2 = (unsigned int *)param_1[0x127];
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  puVar2 = (unsigned int *)param_1[0x128];
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  piVar4 = param_1 + 0x545;
  lVar3 = 3;
  do {
    if (*piVar4 != 0) {
      fn_8251FA58();
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  fn_824C5630(param_1 + 0x532);
  fn_823D5E98(param_1 + 0x27e);
  fn_82359C18(param_1 + 0x25e);
  fn_82358058(param_1);
  return;
}

