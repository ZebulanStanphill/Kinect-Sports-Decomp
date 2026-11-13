extern int fn_822315A0();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_82512B70();
extern int fn_82554DA8();
extern int fn_82BFEDD8();
extern int fn_82F4EC30();
extern int fn_82F52C20();
extern unsigned int lbl_821BCE54;
extern unsigned int lbl_821BE838;


void fn_824736B0(unsigned int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  *param_1 = &lbl_821BCE54;
  iVar2 = fn_8249ABC0();
  uVar3 = 0xffffffff;
  if (param_1[0x20] != -1) {
    uVar3 = 0xffffffff;
    fn_8249D980(*(unsigned int *)(iVar2 + 0x110));
    param_1[0x20] = uVar3;
  }
  if (param_1[0x21] != -1) {
    fn_8249DA08();
    param_1[0x21] = uVar3;
  }
  if (param_1[0x27] != 0) {
    fn_8229E090(param_1[0x27],0,0);
    param_1[0x27] = 0;
  }
  if (param_1[0x14] != 0) {
    iVar2 = param_1[0x15];
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    if (iVar2 != 0) {
      fn_822315A0();
    }
  }
  if (param_1[0x22] != 0) {
    iVar2 = *(int *)(param_1[0x22] + 0x18);
    if (iVar2 != 0) {
      fn_82BFEDD8(iVar2,0);
    }
    fn_82554DA8(param_1[0x22]);
    param_1[0x22] = 0;
  }
  if (param_1[0x28] != 0) {
    fn_82512B70();
  }
  if (param_1[0x26] != 0) {
    fn_822848B8();
    param_1[0x26] = 0;
  }
  if (param_1[0x15] != 0) {
    fn_822315A0();
  }
  uVar4 = 0;
  piVar5 = param_1 + 0xb;
  do {
    if (*piVar5 != 0) {
      uVar1 = fn_82F4EC30(uVar4);
      fn_82F52C20(uVar1,*piVar5,1);
      *piVar5 = 0;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 2;
  } while ((uVar4 & 0xffffffff) < 2);
  *param_1 = &lbl_821BE838;
  return;
}

