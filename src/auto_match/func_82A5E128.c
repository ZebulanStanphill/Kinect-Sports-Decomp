extern int fn_828F6FA8();
extern int fn_82A5DAC0();


void fn_82A5E128(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  short sVar1;
  short sVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  sVar2 = fn_82A5DAC0();
  if (sVar2 == 0x165) {
    fn_828F6FA8(param_2,param_3,0xffffffff82089b98);
  }
  else {
    sVar1 = *(short *)(param_1 + 2);
    if (sVar1 == 1) {
      uVar4 = 0xffffffff82089b90;
    }
    else if (sVar1 == 2) {
      uVar4 = 0xffffffff82089b88;
    }
    else if (sVar1 == 3) {
      uVar4 = 0xffffffff82089b84;
    }
    else if (sVar1 == 4) {
      uVar4 = 0xffffffff82089b7c;
    }
    else if (sVar1 == 5) {
      uVar4 = 0xffffffff82089b78;
    }
    else if (sVar1 == 6) {
      uVar4 = 0xffffffff82089b74;
    }
    else if (sVar1 == 7) {
      uVar4 = 0xffffffff82089b70;
    }
    else if (sVar1 == 8) {
      uVar4 = 0xffffffff82089b6c;
    }
    else {
      uVar4 = 0xffffffff82089b5c;
    }
    if (sVar2 == 3) {
      uVar3 = 0xffffffff82089b54;
    }
    else if (sVar2 == 2) {
      uVar3 = 0xffffffff82089b4c;
    }
    else if (sVar2 == 0x166) {
      uVar3 = 0xffffffff82089b44;
    }
    else if (sVar2 == 0x161) {
      uVar3 = 0xffffffff82089b3c;
    }
    else if (sVar2 == 0x162) {
      uVar3 = 0xffffffff82089b34;
    }
    else if (sVar2 == 0x164) {
      uVar3 = 0xffffffff82089b28;
    }
    else if (sVar2 == 0x92) {
      uVar3 = 0xffffffff82089b1c;
    }
    else if (sVar2 == 1) {
      sVar2 = *(short *)(param_1 + 0xe);
      if (sVar2 == 8) {
        uVar3 = 0xffffffff82089b14;
      }
      else if (sVar2 == 0x10) {
        uVar3 = 0xffffffff82089b08;
      }
      else if (sVar2 == 0x18) {
        uVar3 = 0xffffffff82089afc;
      }
      else if (sVar2 == 0x20) {
        uVar3 = 0xffffffff82089af0;
      }
      else {
        uVar3 = 0xffffffff82089adc;
      }
    }
    else {
      uVar3 = 0xffffffff821a6774;
    }
    fn_828F6FA8(param_2,param_3,0xffffffff82089ad0,(unsigned __int64)*(unsigned int *)(param_1 + 4) / 1000,
                      uVar3,uVar4);
  }
  return;
}

