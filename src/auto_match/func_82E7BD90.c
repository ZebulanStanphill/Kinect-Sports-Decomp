extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7E7E0();
extern int fn_82E7F0F8();
extern int fn_82E7F108();
extern int fn_82E7F6C0();
extern int fn_82E80530();
extern int fn_82EEE588();
extern int fn_82EEE8D8();
extern unsigned int uStack_70;


__int64 fn_82E7BD90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  unsigned short uStack_70;
  short sStack_6e;
  unsigned short auStack_6c [6];
  unsigned char auStack_60 [96];
  
  auStack_6c[0] = 0;
  uStack_70 = 0;
  sStack_6e = 0;
  uVar3 = 0;
  lVar1 = fn_82EEE588(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                          *(int *)(param_1 + 0x20) + 8,param_2,auStack_6c,1);
  if (-1 < lVar1) {
    uVar2 = 0;
    if (auStack_6c[0] != 0) {
      do {
        fn_82E7F0F8(auStack_60);
        if ((uVar3 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar3);
        }
        uVar3 = 0;
        lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                  *(int *)(param_1 + 0x20) + 8,param_2,uVar2,0,&uStack_70,0,
                                  &sStack_6e,0);
        if (lVar1 < 0) {
LAB_82e7bf44:
          fn_82E7E7E0(auStack_60);
          break;
        }
        if (sStack_6e == 0) {
          uVar3 = fn_82E50BE8((unsigned __int64)uStack_70 << 1,0,0,0,0);
          if (uVar3 == 0) {
            fn_82E7E7E0(auStack_60);
            return -0x7ff8fff2;
          }
          lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                    *(int *)(param_1 + 0x20) + 8,param_2,uVar2,uVar3,&uStack_70,0,
                                    &sStack_6e,0);
          if (((lVar1 < 0) ||
              (lVar1 = fn_82E7F108(auStack_60,0x1f,uVar3,(unsigned __int64)uStack_70 << 1), lVar1 < 0
              )) || (lVar1 = fn_82E80530(param_3,auStack_60), lVar1 < 0)) goto LAB_82e7bf44;
        }
        fn_82E7E7E0(auStack_60);
        uVar2 = uVar2 + 1;
      } while (uVar2 < auStack_6c[0]);
    }
    if (-1 < (int)lVar1) {
      lVar1 = fn_82E7F6C0(param_3);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82E4FE40(uVar3);
    }
  }
  return lVar1;
}

