extern unsigned int *auStack_40;
extern int fn_82A29DE8();
extern int fn_82A2B4B8();


unsigned __int64
fn_82C04F60(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 auStack_40 [8];
  
  uVar1 = (**(int (***)())(*param_1 + 0x30))();
  if (-1 < (int)uVar1) {
    iVar2 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x60000080,0);
    param_1[0xb] = iVar2;
    if (iVar2 == -1) {
      uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = 0;
    }
    iVar2 = fn_82A2B4B8(param_1[0xb],auStack_40);
    if (iVar2 == 0) {
      uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
    }
    else {
      *(unsigned __int64 *)(param_1 + 0x10) = auStack_40[0];
    }
    if (-1 < (int)uVar1) {
      uVar1 = (**(int (***)())(*param_1 + 0x74))(param_1,param_4,param_5,param_6,param_7);
    }
  }
  return uVar1;
}

