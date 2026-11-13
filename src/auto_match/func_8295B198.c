#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82935220();
extern int fn_82935240();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_829355B8();
extern int fn_82958950();
extern int fn_82975BB8();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


__int64 fn_8295B198(int param_1)

{
  int *piVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  unsigned int uVar6;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [4];
  unsigned char auStack_bc [4];
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  
  fn_82935220(auStack_d0,0x47554244);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lVar2 = fn_829352D0(auStack_d0,auStack_c0,0x28,1,0,9);
  if (-1 < lVar2) {
    iVar4 = *(int *)(param_1 + 300);
    uStack_b0 = CONCAT44((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFFFFFF),iVar4);
    if (iVar4 == 0) {
      if (((*(int *)(param_1 + 0xd0) == 0) ||
          (lVar2 = fn_829352D0(auStack_d0,*(int *)(param_1 + 0xd0),0xffffffffffffffff,7,
                                     (int)&uStack_a0 + 4,1), -1 < lVar2)) &&
         ((*(int *)(param_1 + 0x134) == 0 ||
          ((iVar4 = fn_829352D0(auStack_d0,*(int *)(param_1 + 0x134),
                                      *(unsigned int *)(param_1 + 0x138),5,&uStack_b8,1), -1 < iVar4
           && (iVar4 = fn_829352D0(auStack_d0,0xffffffff82196582,1,5,0,1), -1 < iVar4)))))) {
        iVar4 = fn_829352D0(auStack_d0,0xffffffff82196582,0xffffffffffffffff,5,auStack_bc,1);
        if (-1 < iVar4) {
          uVar3 = fn_82935240(auStack_d0);
          if ((uVar3 & 0xffffffff) < 0x8001) {
            lVar2 = fn_82958950(param_1,uVar3);
            if (lVar2 < 0) goto LAB_8295b960;
            fn_82F63CA0((uVar3 + 1 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x110),
                         (unsigned __int64)*(unsigned int *)(param_1 + 0x110) + 4,
                         ((unsigned __int64)*(unsigned int *)(param_1 + 0x114) - 1 & 0x3fffffff) << 2);
            uVar6 = 0;
            if ((((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) != 0) {
              piVar5 = (int *)0xfffffffc;
              do {
                uVar6 = uVar6 + 1;
                piVar1 = piVar5 + 2;
                piVar5 = piVar5 + 2;
                *piVar5 = (int)((uVar3 + *(unsigned int *)(param_1 + 0x124) & 0xffffffff) << 2) + *piVar1;
              } while (uVar6 < (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF));
            }
            lVar2 = fn_829355B8(auStack_d0,(unsigned __int64)*(unsigned int *)(param_1 + 0x110) + 4,uVar3);
            if (lVar2 < 0) goto LAB_8295b960;
            iVar4 = *(int *)(param_1 + 0x114) + (int)uVar3;
            *(int *)(param_1 + 0x114) = iVar4;
            *(int *)(param_1 + 0x120) = iVar4;
            *(int *)(param_1 + 0x124) = (int)uVar3 + *(int *)(param_1 + 0x124);
          }
          else {
            fn_82975BB8(param_1,0,0x11c3,0xffffffff8202cc80);
          }
          lVar2 = 0;
        }
      }
    }
    else {
      lVar2 = fn_8265C940(iVar4 << 2,0x24810000);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar2,0,(((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) << 2);
      }
      lVar2 = -0x7ff8fff2;
    }
  }
LAB_8295b960:
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_82935258(auStack_d0);
  return lVar2;
}

