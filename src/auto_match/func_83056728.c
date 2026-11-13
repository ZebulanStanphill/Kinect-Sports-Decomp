extern int fn_83056560();
extern int fn_83056970();
extern int fn_830571B0();
extern int fn_830572B0();
extern int fn_830584F0();
extern int fn_830596F8();
extern int fn_8305ADB0();
extern int fn_8305B3F0();
extern int fn_8305B5E0();


unsigned __int64
fn_83056728(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,int *param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar1 = (unsigned int)param_5[1] >> 0xe;
  if (((uVar1 == 4) || (uVar1 == 3)) || (uVar1 == 0x3f)) {
    uVar2 = fn_83056560();
    fn_8305B3F0(uVar2,param_2);
    fn_830571B0(uVar2);
    *(unsigned int *)(param_1 + 4) = param_4;
    iVar3 = fn_830572B0(0x78);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8305B5E0();
    }
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0x34;
    }
    else {
      if (*param_5 != *(int *)(iVar3 + 4)) {
        *(int *)(iVar3 + 4) = *param_5;
      }
      uVar2 = fn_83056970(*(unsigned int *)(param_1 + 8),uVar1);
      iVar3 = *(int *)(param_1 + 8);
      *(unsigned char *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x10) = 0;
      uVar4 = 0;
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (*(int *)(iVar3 + 0xc) == 0) {
          if (*(int *)(iVar3 + 8) != 0) {
            uVar4 = fn_830596F8(*(int *)(iVar3 + 8),*param_5);
          }
          *(unsigned int *)(param_1 + 0xc) = uVar4;
        }
        else {
          uVar4 = fn_830584F0(*(int *)(iVar3 + 0xc));
          *(unsigned int *)(param_1 + 0xc) = uVar4;
        }
      }
      else {
        uVar4 = fn_8305ADB0(*(int *)(iVar3 + 0x10));
        *(unsigned int *)(param_1 + 0xc) = uVar4;
      }
    }
  }
  else {
    uVar2 = 0x4e;
  }
  return uVar2;
}

