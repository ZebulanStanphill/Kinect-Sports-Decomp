extern int fn_82A1FEB8();
extern int fn_82A1FF98();
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B90;


unsigned __int64
fn_82A20210(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  iVar3 = fn_82A1FEB8(lbl_83219B90,param_1);
  if (iVar3 != 0) {
    uVar1 = *(unsigned int *)(iVar3 + 0xc);
    if (uVar1 == 0xffffffff) {
      uVar1 = *(unsigned int *)(iVar3 + 8);
    }
    param_1 = (unsigned __int64)uVar1;
    fn_82A1FF98(lbl_83219B90);
  }
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if ((int)param_1 == -1) {
    uVar2 = 0xffffffffc0000008;
  }
  else {
    uVar2 = (**(int (***)())(lbl_83219B8C + 0x24))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

