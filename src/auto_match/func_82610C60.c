extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827DEA50();
extern int fn_82816F98();
extern int fn_828171A0();


unsigned __int64 fn_82610C60(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int auStack_30 [12];
  
  iVar3 = fn_827D50B8(*(unsigned int *)(param_1 + 0x2c));
  if ((iVar3 == 0x3e5) || (iVar3 == 0x3e4)) {
    fn_827D50C0(*param_3,0x3e5);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0x3e5;
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    fn_827D5078(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 2;
  }
  else {
    fn_827DEA50(*(unsigned int *)(param_1 + 0x10));
    fn_82816F98(*(unsigned int *)(param_1 + 0x1c),1,auStack_30);
    uVar1 = *param_3;
    uVar2 = fn_828171A0(*(unsigned int *)(param_1 + 0x1c),0xffffffff821c7b34);
    fn_827D5090(uVar1,uVar2);
    uVar1 = *param_3;
    uVar2 = fn_828171A0(*(unsigned int *)(param_1 + 0x1c),0xffffffff821c7b44);
    fn_827D50A8(uVar1,uVar2);
    fn_827D5078(*param_3,auStack_30[0]);
    fn_827D50C0(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

