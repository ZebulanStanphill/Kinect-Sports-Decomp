extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828FAB00();
extern int fn_828FDE70();
extern int fn_82935220();
extern int fn_82935240();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_829354C0();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


__int64 fn_828FED80(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned int uVar7;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [4];
  unsigned char auStack_7c [4];
  unsigned __int64 uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  
  fn_82935220(auStack_90,0x47554244);
  uStack_78 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar3 = fn_829352D0(auStack_90,auStack_80,0x28,1,0,0);
  if (-1 < lVar3) {
    iVar5 = param_1[0xd];
    while ((iVar1 = 0, iVar5 != 0 &&
           ((iVar1 = *(int *)(iVar5 + 8), iVar1 == 0 || (*(int *)(iVar1 + 4) != 0x18))))) {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      uStack_6c = uStack_6c + 1;
    }
    if (uStack_6c == 0) {
      if ((((param_1[0x1e] == 0) ||
           (lVar3 = fn_829352D0(auStack_90,param_1[0x1e],0xffffffffffffffff,7,
                                      (int)&uStack_60 + 4,1), -1 < lVar3)) &&
          ((param_1[0x1c] == 0 ||
           ((iVar5 = fn_829352D0(auStack_90,param_1[0x1c],param_1[0x1d],5,&uStack_78,1),
            -1 < iVar5 &&
            (iVar5 = fn_829352D0(auStack_90,0xffffffff82196582,1,5,0,1), -1 < iVar5)))))) &&
         (iVar5 = fn_829352D0(auStack_90,0xffffffff8202cc4c,0xffffffffffffffff,5,auStack_7c,1)
         , -1 < iVar5)) {
        uVar4 = fn_82935240(auStack_90);
        if ((uVar4 & 0xffffffff) < 0x8001) {
          lVar3 = fn_828FDE70(param_1,uVar4);
          if (lVar3 < 0) goto LAB_828ff164;
          fn_82F63CA0((uVar4 + 1 & 0x3fffffff) * 4 + (unsigned __int64)(unsigned int)param_1[0x17],
                       (unsigned __int64)(unsigned int)param_1[0x17] + 4,
                       ((unsigned __int64)(unsigned int)param_1[0x18] - 1 & 0x3fffffff) << 2);
          uVar7 = 0;
          if (uStack_6c != 0) {
            piVar6 = (int *)0xfffffffc;
            do {
              uVar7 = uVar7 + 1;
              piVar2 = piVar6 + 2;
              piVar6 = piVar6 + 2;
              *piVar6 = (int)(((unsigned int)param_1[0x1b] + uVar4 & 0xffffffff) << 2) + *piVar2;
            } while (uVar7 < uStack_6c);
          }
          lVar3 = fn_829354C0(auStack_90,(unsigned __int64)(unsigned int)param_1[0x17] + 4,uVar4,
                                    param_1[0x15]);
          if (lVar3 < 0) goto LAB_828ff164;
          iVar5 = (int)uVar4 + param_1[0x18];
          param_1[0x18] = iVar5;
          param_1[0x1a] = iVar5;
          param_1[0x1b] = param_1[0x1b] + (int)uVar4;
        }
        else {
          fn_828FAB00(*param_1,param_1 + 4,0x7ee,0xffffffff8202cc80);
        }
        lVar3 = 0;
      }
    }
    else {
      lVar3 = fn_8265C940(uStack_6c << 2,0x24810000);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar3,0,uStack_6c << 2);
      }
      lVar3 = -0x7ff8fff2;
    }
  }
LAB_828ff164:
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_82935258(auStack_90);
  return lVar3;
}

