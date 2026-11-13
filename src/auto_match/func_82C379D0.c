#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern int fn_82C37940();
extern unsigned int iStack00000018;


unsigned __int64 fn_82C379D0(int *param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iStack00000018;
  
  uVar3 = 0;
  iStack00000018 = (int)((unsigned __int64)param_2 >> 0x20);
  if (param_3 != 1) {
    _iStack00000018 = param_2;
    if (param_3 == 2) {
      uVar2 = 0x18 - param_4;
      if ((int)uVar2 < 0) {
        iVar1 = iStack00000018 >> (-uVar2 & 0x3f);
        iStack00000018 = fn_82C37940(0xffffffff820ee404,iVar1);
      }
      else {
        iVar1 = iStack00000018 << (uVar2 & 0x3f);
        iStack00000018 = fn_82C37940(0xffffffff820ee404,iVar1);
      }
    }
    else if (param_3 == 3) {
      iVar1 = iStack00000018 << 8;
      iStack00000018 = fn_82C37940(0xffffffff820ee404,iVar1);
    }
    else {
      uVar3 = 0xffffffff80070057;
      iStack00000018 = 0;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iStack00000018;
  }
  return uVar3;
}

