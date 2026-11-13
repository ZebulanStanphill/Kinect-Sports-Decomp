typedef unsigned char bool;


unsigned __int64
fn_82BE02D0(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0xe;
    uVar3 = 0;
    goto LAB_82be07f8;
  }
  if (param_1 == 1) {
    uVar2 = 0xe;
    if (param_2 != 16000) {
      if (param_2 == 24000) goto LAB_82be03ac;
      bVar1 = param_2 == 32000;
      uVar2 = 0xe;
LAB_82be07dc:
      if (!bVar1) {
        return 3;
      }
      goto LAB_82be03e8;
    }
  }
  else {
    if (2 < param_1) {
      if (param_1 != 3) {
        return 6;
      }
      uVar3 = 0x32;
      if (0x5140 < param_2) {
        if (param_2 < 0x68b1) {
          if (param_2 == 0x68b0) {
            uVar2 = 0x1a;
            uVar3 = 0x2f;
          }
          else if (param_2 < 0x5dc1) {
            if (param_2 == 24000) {
              uVar2 = 0x18;
              uVar3 = 7;
            }
            else if (param_2 == 0x52d0) {
              uVar2 = 0x14;
              uVar3 = 0x24;
            }
            else if (param_2 == 0x5460) {
              uVar2 = 0x16;
              uVar3 = 6;
            }
            else if (param_2 == 22000) {
              uVar2 = 0x16;
              uVar3 = 0x25;
            }
            else if (param_2 == 0x5780) {
              uVar2 = 0x16;
              uVar3 = 0x26;
            }
            else if (param_2 == 0x5910) {
              uVar2 = 0x16;
              uVar3 = 0x27;
            }
            else if (param_2 == 0x5aa0) {
              uVar2 = 0x16;
              uVar3 = 0x28;
            }
            else {
              if (param_2 != 0x5c30) {
                return 3;
              }
              uVar2 = 0x16;
              uVar3 = 0x29;
            }
          }
          else if (param_2 == 0x5f50) {
            uVar2 = 0x18;
            uVar3 = 0x2a;
          }
          else if (param_2 == 0x60e0) {
            uVar2 = 0x18;
            uVar3 = 0x2b;
          }
          else if (param_2 == 0x6270) {
            uVar2 = 0x18;
            uVar3 = 0x2c;
          }
          else if (param_2 == 0x6400) {
            uVar2 = 0x18;
            uVar3 = 0x2d;
          }
          else if (param_2 == 26000) {
            uVar2 = 0x18;
            uVar3 = 0x2e;
          }
          else {
            if (param_2 != 0x6720) {
              return 3;
            }
            uVar2 = 0x1a;
            uVar3 = 8;
          }
        }
        else if (param_2 < 0x73a1) {
          if (param_2 == 0x73a0) {
            uVar2 = 0x1c;
            uVar3 = 0x35;
          }
          else if (param_2 == 0x6a40) {
            uVar2 = 0x1a;
            uVar3 = 0x30;
          }
          else if (param_2 == 0x6bd0) {
            uVar2 = 0x1a;
            uVar3 = 0x31;
          }
          else if (param_2 == 28000) {
            uVar2 = 0x1a;
          }
          else if (param_2 == 0x6ef0) {
            uVar2 = 0x1a;
            uVar3 = 0x33;
          }
          else if (param_2 == 0x7080) {
            uVar2 = 0x1c;
            uVar3 = 9;
          }
          else {
            if (param_2 != 0x7210) {
              return 3;
            }
            uVar2 = 0x1c;
            uVar3 = 0x34;
          }
        }
        else if (param_2 == 30000) {
          uVar2 = 0x1c;
          uVar3 = 0x36;
        }
        else if (param_2 == 0x76c0) {
          uVar2 = 0x1c;
          uVar3 = 0x37;
        }
        else if (param_2 == 0x7850) {
          uVar2 = 0x1c;
          uVar3 = 0x38;
        }
        else if (param_2 == 0x79e0) {
          uVar2 = 0x1c;
          uVar3 = 10;
        }
        else if (param_2 == 0x7b70) {
          uVar2 = 0x1c;
          uVar3 = 0x39;
        }
        else {
          if (param_2 != 32000) {
            return 3;
          }
          uVar2 = 0x1c;
          uVar3 = 0x3a;
        }
        goto LAB_82be07f8;
      }
      if (param_2 == 0x5140) {
        uVar2 = 0x14;
        uVar3 = 0x23;
        goto LAB_82be07f8;
      }
      if (0x39d0 < param_2) {
        if (param_2 < 0x4651) {
          if (param_2 == 18000) {
            uVar2 = 0x12;
            uVar3 = 0x1d;
          }
          else if (param_2 == 0x3b60) {
            uVar2 = 0x10;
            uVar3 = 0x17;
          }
          else if (param_2 == 0x3cf0) {
            uVar2 = 0x10;
            uVar3 = 0x18;
          }
          else if (param_2 == 16000) {
            uVar2 = 0x10;
            uVar3 = 0x19;
          }
          else if (param_2 == 0x4010) {
            uVar2 = 0x10;
            uVar3 = 0x1a;
          }
          else if (param_2 == 0x41a0) {
            uVar2 = 0x12;
            uVar3 = 4;
          }
          else if (param_2 == 0x4330) {
            uVar2 = 0x12;
            uVar3 = 0x1b;
          }
          else {
            if (param_2 != 0x44c0) {
              return 3;
            }
            uVar2 = 0x12;
            uVar3 = 0x1c;
          }
        }
        else if (param_2 == 0x47e0) {
          uVar2 = 0x12;
          uVar3 = 0x1e;
        }
        else if (param_2 == 0x4970) {
          uVar2 = 0x12;
          uVar3 = 0x1f;
        }
        else if (param_2 == 0x4b00) {
          uVar2 = 0x14;
          uVar3 = 5;
        }
        else if (param_2 == 0x4c90) {
          uVar2 = 0x14;
          uVar3 = 0x20;
        }
        else if (param_2 == 20000) {
          uVar2 = 0x14;
          uVar3 = 0x21;
        }
        else {
          if (param_2 != 0x4fb0) {
            return 3;
          }
          uVar2 = 0x14;
          uVar3 = 0x22;
        }
        goto LAB_82be07f8;
      }
      if (param_2 == 0x39d0) {
        uVar2 = 0x10;
        uVar3 = 0x16;
        goto LAB_82be07f8;
      }
      if (param_2 < 0x2ee1) {
        if (param_2 == 12000) {
          uVar2 = 0xc;
          goto LAB_82be03ac;
        }
        if (param_2 == 0x2260) {
          uVar2 = 0xc;
          uVar3 = 0x3b;
          goto LAB_82be07f8;
        }
        if (param_2 != 0x2580) {
          if (param_2 == 10000) {
            uVar2 = 0xc;
            uVar3 = 0xc;
          }
          else if (param_2 == 0x28a0) {
            uVar2 = 0xc;
            uVar3 = 0xd;
          }
          else if (param_2 == 0x2a30) {
            uVar2 = 0xc;
            uVar3 = 0xe;
          }
          else if (param_2 == 0x2bc0) {
            uVar2 = 0xc;
            uVar3 = 0xf;
          }
          else {
            if (param_2 != 0x2d50) {
              return 3;
            }
            uVar2 = 0xc;
            uVar3 = 0x10;
          }
          goto LAB_82be07f8;
        }
        uVar2 = 0xc;
        goto LAB_82be0394;
      }
      if (param_2 == 0x3070) {
        uVar2 = 0xc;
        uVar3 = 0x11;
        goto LAB_82be07f8;
      }
      if (param_2 == 0x3200) {
        uVar2 = 0xc;
        uVar3 = 0x12;
        goto LAB_82be07f8;
      }
      if (param_2 == 0x3390) {
        uVar2 = 0xc;
        uVar3 = 0x13;
        goto LAB_82be07f8;
      }
      if (param_2 == 0x3520) {
        uVar2 = 0xc;
        uVar3 = 0x14;
        goto LAB_82be07f8;
      }
      if (param_2 == 14000) {
        uVar2 = 0xc;
        uVar3 = 0x15;
        goto LAB_82be07f8;
      }
      if (param_2 != 0x3840) {
        return 3;
      }
      uVar2 = 0x10;
LAB_82be03e8:
      uVar3 = 3;
      goto LAB_82be07f8;
    }
    uVar2 = 0x1c;
    if (param_2 != 24000) {
      if (param_2 != 32000) {
        bVar1 = param_2 == 48000;
        uVar2 = 0x1c;
        goto LAB_82be07dc;
      }
LAB_82be03ac:
      uVar3 = 2;
      goto LAB_82be07f8;
    }
  }
LAB_82be0394:
  uVar3 = 1;
LAB_82be07f8:
  *param_3 = uVar2;
  *param_4 = uVar3;
  *param_5 = param_2 / 0x32;
  return 0;
}

