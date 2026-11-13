extern int fn_822315A0();
extern int fn_827D50C0();
extern int fn_827E3768();
extern int fn_827E4200();
extern int fn_82F664B0();


unsigned __int64
fn_827DA9F8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
             unsigned int *param_6)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puStack0000003c;
  
  iVar5 = param_4 * 0x28 + param_1;
  puStack0000003c = param_6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    piVar6 = *(int **)(param_1 + 4);
    piVar1 = *(int **)(param_1 + 8);
    if (piVar6 != piVar1) {
      do {
        iVar2 = *piVar6;
        uVar4 = fn_827E3768(iVar2);
        if ((uVar4 & 0xff) == param_5) {
          fn_827E4200(param_2,iVar2);
          break;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar1);
      if (iVar2 != 0) {
        if ((param_3 & 0xffffffff) != 0) {
          fn_82F664B0(iVar5 + 0x54,0x20,param_3);
        }
        *(int *)(iVar5 + 0x74) = (int)param_2;
        if (param_6[1] != 0) {
          fn_822315A0();
        }
        return 0;
      }
    }
    fn_827D50C0(*param_6,0x4b0);
    if (param_6[1] != 0) {
      fn_822315A0();
    }
    uVar3 = 0x4b0;
  }
  else {
    fn_827D50C0(*param_6,0x57);
    if (param_6[1] != 0) {
      fn_822315A0();
    }
    uVar3 = 0x57;
  }
  return uVar3;
}

