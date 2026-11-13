extern int fn_823838E0();
extern int fn_82383FB0();
extern int fn_8265C9E0();


void fn_823861F0(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar4 = 5;
    }
    else if (param_3 == 2) {
      uVar4 = 4;
    }
    else {
      if (param_3 != 3) {
        uVar1 = fn_8265C9E0(0xf0);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_823838E0(uVar1,1,param_7,param_8);
        }
        *(unsigned int *)(param_1 + 0x1fa0) = uVar2;
        uVar1 = fn_8265C9E0(0x290);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82383FB0(uVar1,0xffffffff831cb064,param_4,param_5,param_6,1,param_7,param_8
                                 );
        }
        *(unsigned int *)(param_1 + 0x1fa4) = uVar2;
        uVar1 = fn_8265C9E0(0x290);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82383FB0(uVar1,0xffffffff831cb014,param_4,param_5,param_6,0,param_7,param_8
                                 );
        }
        uVar3 = 0;
        *(unsigned int *)(param_1 + 0x1fa8) = uVar2;
        goto LAB_82386334;
      }
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 0;
  }
  uVar1 = fn_8265C9E0(0xf0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_823838E0(uVar1,uVar4,param_7,param_8);
  }
  uVar3 = 1;
  *(unsigned int *)(param_1 + 0x1fa0) = uVar2;
LAB_82386334:
  *(unsigned int *)(param_1 + 0x1fc8) = uVar3;
  return;
}

