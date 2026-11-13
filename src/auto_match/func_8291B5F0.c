extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82917920();
extern int fn_82917D90();
extern int fn_8291B958();


unsigned __int64 fn_8291B5F0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 8) & 0xffff0000;
  if (*(short *)(param_3 + 10) == 0) {
    if (uVar2 == 0x54580000) {
      if (*(short *)(param_2 + 4) == 2) {
        uVar1 = *(unsigned short *)(param_3 + 2);
        if (uVar1 == 0) {
          uVar5 = 0xffffffff82918610;
        }
        else if (uVar1 == 1) {
          uVar5 = 0xffffffff82918658;
        }
        else if (uVar1 < 3) {
          uVar5 = 0xffffffff829186e0;
        }
        else if (uVar1 == 3) {
          uVar5 = 0xffffffff82918610;
        }
      }
      goto LAB_8291b8e8;
    }
    if (uVar2 == 0xfffe0000) {
      uVar1 = *(unsigned short *)(param_2 + 4);
      if (uVar1 == 0) {
        uVar1 = *(unsigned short *)(param_3 + 2);
        if (uVar1 == 0) {
          uVar5 = 0xffffffff82917fd0;
          goto LAB_8291b8e8;
        }
        if (uVar1 != 1) {
          if (uVar1 < 3) {
            uVar5 = 0xffffffff82917ff8;
          }
          else if (uVar1 == 3) {
            uVar5 = 0xffffffff82918050;
          }
          goto LAB_8291b8e8;
        }
        goto LAB_8291b8e0;
      }
      if (uVar1 == 1) {
        uVar1 = *(unsigned short *)(param_3 + 2);
        if (uVar1 == 0) {
          uVar5 = 0xffffffff829180b8;
          goto LAB_8291b8e8;
        }
        if (uVar1 == 1) {
          uVar5 = 0xffffffff829180e0;
          goto LAB_8291b8e8;
        }
        if (2 < uVar1) {
          if (uVar1 == 3) {
            uVar5 = 0xffffffff82918138;
          }
          goto LAB_8291b8e8;
        }
        goto LAB_8291b8d4;
      }
      if (2 < uVar1) goto LAB_8291b8e8;
      uVar1 = *(unsigned short *)(param_3 + 2);
      if (uVar1 == 0) {
        uVar5 = 0xffffffff82918188;
        goto LAB_8291b8e8;
      }
      if (uVar1 == 1) {
        uVar5 = 0xffffffff829181d8;
        goto LAB_8291b8e8;
      }
      if (uVar1 < 3) {
        uVar5 = 0xffffffff82918268;
        goto LAB_8291b8e8;
      }
      if (uVar1 != 3) goto LAB_8291b8e8;
      goto LAB_8291b8c8;
    }
    if (uVar2 != 0xffff0000) goto LAB_8291b8e8;
    uVar1 = *(unsigned short *)(param_2 + 4);
    if (uVar1 == 0) {
      uVar1 = *(unsigned short *)(param_3 + 2);
      if (uVar1 == 0) {
        uVar5 = 0xffffffff829182f0;
        goto LAB_8291b8e8;
      }
      if (uVar1 != 1) {
        if (uVar1 < 3) {
          uVar5 = 0xffffffff82918318;
        }
        else if (uVar1 == 3) {
          uVar5 = 0xffffffff82918370;
        }
        goto LAB_8291b8e8;
      }
      goto LAB_8291b8a4;
    }
    if (uVar1 == 1) {
      uVar1 = *(unsigned short *)(param_3 + 2);
      if (uVar1 == 0) {
        uVar5 = 0xffffffff82918430;
        goto LAB_8291b8e8;
      }
      if (uVar1 == 1) {
        uVar5 = 0xffffffff829183d8;
        goto LAB_8291b8e8;
      }
      if (2 < uVar1) {
        if (uVar1 == 3) {
          uVar5 = 0xffffffff82918458;
        }
        goto LAB_8291b8e8;
      }
      goto LAB_8291b6d8;
    }
    if (2 < uVar1) goto LAB_8291b8e8;
    uVar1 = *(unsigned short *)(param_3 + 2);
    if (uVar1 == 0) {
      uVar5 = 0xffffffff829184a8;
      goto LAB_8291b8e8;
    }
    if (uVar1 == 1) {
      uVar5 = 0xffffffff829184f8;
      goto LAB_8291b8e8;
    }
    if (uVar1 < 3) {
      uVar5 = 0xffffffff82918588;
      goto LAB_8291b8e8;
    }
    if (uVar1 != 3) goto LAB_8291b8e8;
  }
  else {
    if (uVar2 == 0xfffe0000) {
      uVar1 = *(unsigned short *)(param_2 + 4);
      if (uVar1 == 0) {
LAB_8291b8e0:
        uVar5 = 0xffffffff82917fd0;
        goto LAB_8291b8e8;
      }
      if (uVar1 == 1) {
LAB_8291b8d4:
        uVar5 = 0xffffffff829180b8;
        goto LAB_8291b8e8;
      }
      if (2 < uVar1) goto LAB_8291b8e8;
LAB_8291b8c8:
      uVar5 = 0xffffffff82918188;
      goto LAB_8291b8e8;
    }
    if (uVar2 != 0xffff0000) goto LAB_8291b8e8;
    uVar1 = *(unsigned short *)(param_2 + 4);
    if (uVar1 == 0) {
LAB_8291b8a4:
      uVar5 = 0xffffffff829182f0;
      goto LAB_8291b8e8;
    }
    if (uVar1 == 1) {
LAB_8291b6d8:
      uVar5 = 0xffffffff82918430;
      goto LAB_8291b8e8;
    }
    if (2 < uVar1) goto LAB_8291b8e8;
  }
  uVar5 = 0xffffffff829184a8;
LAB_8291b8e8:
  uVar3 = fn_8265C940(0x44,0x24810000);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82917920(uVar3,param_1,param_2,param_3,uVar5,param_4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    iVar4 = fn_8291B958(uVar3);
    if (-1 < iVar4) {
      return uVar3;
    }
    fn_82917D90(uVar3);
    fn_8265C990(uVar3,0x24810000);
  }
  return 0;
}

