extern int fn_8263AC58();
extern int fn_82AA7C38();
extern unsigned int lbl_821A7F10;
extern unsigned int stack0x00000044;
extern unsigned int stack0x0000004c;
extern unsigned int stack0x00000054;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82AA7DC0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  uVar11 = in_stack_0000005c;
  uVar2 = in_stack_0000005c & 0x3f;
  uStack0000004c = (unsigned int)param_8;
  uVar9 = (unsigned __int64)(unsigned char)(&lbl_821A7F10)[uVar2];
  uStack00000044 = param_7;
  if ((in_stack_0000005c & 0x100) != 0) {
    fn_8263AC58(&stack0x00000044,&stack0x0000004c,&stack0x00000054,uVar9,uVar2,
                      in_stack_00000064,1);
    param_8 = (unsigned __int64)uStack0000004c;
  }
  uVar6 = param_8;
  uVar5 = uStack00000044;
  if (uVar2 < 0x32) {
    if (uVar2 == 0x31) {
LAB_82aa7e98:
      uVar9 = uVar9 << 4;
      uVar6 = (param_8 + 3 & 0xffffffff) >> 2;
      uVar5 = uStack00000044 + 3 >> 2;
    }
    else if (10 < uVar2) {
      if (uVar2 < 0xd) {
        uVar9 = uVar9 << 1;
        uVar5 = uStack00000044 + 1 >> 1;
      }
      else if ((0x11 < uVar2) && (uVar2 < 0x15)) goto LAB_82aa7e98;
    }
  }
  else if ((0x32 < uVar2) && ((uVar2 < 0x36 || ((0x39 < uVar2 && (uVar2 < 0x3e))))))
  goto LAB_82aa7e98;
  uVar2 = (int)uVar11 >> 6 & 3;
  if (((int)uVar11 >> 6 & 3U) == 0) {
    uVar7 = (uVar9 & 0x7fff8) << 0xd;
  }
  else {
    if (uVar2 == 1) {
      uVar7 = 0x20000;
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          uVar7 = 0x40002;
        }
        else {
          uVar7 = 0;
        }
        goto LAB_82aa7ef8;
      }
      uVar7 = 0x40000;
    }
    uVar7 = uVar7 | 1;
  }
LAB_82aa7ef8:
  uVar1 = uVar7 >> 0x10;
  uVar4 = (uVar9 >> 3) - 1;
  trapWord(6,uVar9,0);
  uVar2 = (unsigned int)uVar9 >> (0x23U - (int)LZCOUNT((int)(uVar7 >> 0x10) + -1) & 0x3f);
  if (((((uVar4 & param_2) == 0) && ((param_2 & 0xffffffff) == (param_5 & 0xffffffff))) &&
      (0x10 < uStack00000044)) && (0x10 < (param_8 & 0xffffffff))) {
    iVar3 = (int)(((param_2 & 0x1fffffff) << 3) / uVar9);
    if (((in_stack_00000054 < 2) || ((uVar4 & param_3) != 0)) ||
       ((param_3 & 0xffffffff) != (param_6 & 0xffffffff))) {
      uVar11 = 0;
      if (in_stack_00000054 != 0) {
        do {
          fn_82AA7C38(param_1,param_4,uVar7,uVar1,
                        (__int64)(int)(uVar2 * iVar3) * (__int64)(int)uVar6);
          uVar11 = uVar11 + 1;
          param_1 = param_1 + param_3;
          param_4 = param_4 + param_6;
        } while (uVar11 < in_stack_00000054);
      }
    }
    else {
      fn_82AA7C38(param_1,param_4,uVar7,uVar1,
                    (__int64)(int)(uVar2 * iVar3 * (int)uVar6) * (__int64)(int)in_stack_00000054);
    }
  }
  else {
    uVar11 = 0;
    if (in_stack_00000054 != 0) {
      do {
        if ((uVar6 & 0xffffffff) != 0) {
          lVar8 = param_4;
          lVar10 = param_1;
          uVar9 = uVar6;
          do {
            fn_82AA7C38(lVar10,lVar8,uVar7,uVar1,(__int64)(int)uVar2 * (__int64)(int)uVar5);
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + param_2;
            lVar8 = lVar8 + param_5;
          } while (uVar9 != 0);
        }
        uVar11 = uVar11 + 1;
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
      } while (uVar11 < in_stack_00000054);
    }
  }
  return;
}

