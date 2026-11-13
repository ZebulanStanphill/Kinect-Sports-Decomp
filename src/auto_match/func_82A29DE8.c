typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82A2B760();
extern unsigned int iStack_4c;
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64 fn_82A29DE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       int param_5,unsigned __int64 param_6)

{
  bool bVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_60 [2];
  unsigned short auStack_58 [4];
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned int uStack_48;
  unsigned short *puStack_44;
  unsigned int uStack_40;
  
  if (param_5 == 1) {
    uVar3 = 2;
  }
  else if (param_5 == 2) {
    uVar3 = 5;
  }
  else if (param_5 == 3) {
    uVar3 = 1;
  }
  else if (param_5 == 4) {
    uVar3 = 3;
  }
  else if ((param_5 != 5) || (uVar3 = 4, (param_2 & 0x40000000) == 0)) {
    fn_82A2B760(0xffffffffc000000d);
    return 0xffffffffffffffff;
  }
  RtlInitAnsiString(auStack_58,param_1);
  if ((auStack_58[0] < 2) || (bVar1 = true, *(char *)((unsigned int)auStack_58[0] + param_1 + -1) != '\\'))
  {
    bVar1 = false;
  }
  uStack_48 = 0xfffffffd;
  puStack_44 = auStack_58;
  uStack_40 = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    param_2 = param_2 | 0x10000;
  }
  lVar2 = (**(int (***)())(lbl_8315D3D0 + 0xc))
                    (auStack_60,param_2 | 0x100080,&uStack_48,auStack_50,0,param_6 & 0x7fa7,param_3,
                     uVar3);
  if (lVar2 < 0) {
    fn_82A2B760(lVar2);
    if ((int)lVar2 == -0x3fffffcb) {
      uVar3 = 0x50;
    }
    else {
      if ((int)lVar2 != -0x3fffff46) {
        return 0xffffffffffffffff;
      }
      uVar3 = 3;
      if (!bVar1) {
        uVar3 = 5;
      }
    }
    thunk_FUN_82a2b748(uVar3);
    return 0xffffffffffffffff;
  }
  if (((param_5 == 2) && (iStack_4c == 3)) || ((param_5 == 4 && (iStack_4c == 1)))) {
    uVar3 = 0xb7;
  }
  else {
    uVar3 = 0;
  }
  thunk_FUN_82a2b748(uVar3);
  return (unsigned __int64)auStack_60[0];
}

