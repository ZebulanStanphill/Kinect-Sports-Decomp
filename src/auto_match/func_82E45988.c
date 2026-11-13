#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82E27D58();
extern int fn_82E44260();
extern int fn_82E450D0();
extern int fn_82E45160();
extern int fn_82E50330();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


/* WARNING: Removing unreachable block (ram,0x82e45be8) */
/* WARNING: Removing unreachable block (ram,0x82e45bf4) */
/* WARNING: Removing unreachable block (ram,0x82e45c1c) */
/* WARNING: Removing unreachable block (ram,0x82e45c3c) */
/* WARNING: Removing unreachable block (ram,0x82e45c5c) */
/* WARNING: Removing unreachable block (ram,0x82e45c6c) */
/* WARNING: Removing unreachable block (ram,0x82e45c7c) */
/* WARNING: Removing unreachable block (ram,0x82e45c9c) */
/* WARNING: Removing unreachable block (ram,0x82e45ca0) */
/* WARNING: Removing unreachable block (ram,0x82e45cac) */
/* WARNING: Removing unreachable block (ram,0x82e45cb8) */
/* WARNING: Removing unreachable block (ram,0x82e45cf8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E45988(int *param_1)

{
  __int64 lVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned short auStack_b0 [2];
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [8];
  __int64 lStack_78;
  unsigned int auStack_70 [5];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  uStack_98 = 0;
  piStack_a8 = (int *)0x0;
  lStack_78 = 0;
  auStack_70[0] = auStack_70[0] & 0x81ffffff | 0x4000000;
  auStack_70[4] = lbl_8202E618;
  auStack_b0[0] = 0;
  uStack_5c = lbl_8202E61C;
  uStack_58 = lbl_8202E620;
  piStack_a4 = (int *)0x0;
  piStack_a0 = (int *)0x0;
  piStack_ac = (int *)0x0;
  piStack_9c = (int *)0x0;
  uStack_54 = lbl_8202E624;
  auStack_70[3] = 0;
  auStack_70[2] = 0;
  auStack_70[1] = 0;
  lVar1 = (**(int (***)())(*(int *)param_1[0x1e] + 0x84))((int *)param_1[0x1e],&uStack_98);
  if (-1 < lVar1) {
    piVar3 = param_1 + 1;
    lVar1 = (**(int (***)())(param_1[1] + 0xc))(piVar3,0,0,0,&piStack_a0);
    if (-1 < lVar1) {
      (**(int (***)())(*piStack_a0 + 0x20))(piStack_a0,0xffffffff82152ff8);
      uVar4 = 0;
      if (uStack_98 != 0) {
        do {
          if (piStack_a8 != (int *)0x0) {
            (**(int (***)())(*piStack_a8 + 8))();
            piStack_a8 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*(int *)param_1[0x1e] + 0x88))
                            ((int *)param_1[0x1e],uVar4,auStack_b0,&piStack_a8);
          if (lVar1 < 0) goto LAB_82e45fb8;
          if (piStack_ac != (int *)0x0) {
            (**(int (***)())(*piStack_ac + 8))();
            piStack_ac = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piVar3 + 0xc))(piVar3,0,auStack_b0[0],0,&piStack_ac);
          if (lVar1 < 0) goto LAB_82e45fb8;
          (**(int (***)())(*piStack_ac + 0x20))(piStack_ac,0xffffffff82152ff8);
          (**(int (***)())(*piStack_ac + 0x20))(piStack_ac,0xffffffff82153004);
          if (piStack_a4 != (int *)0x0) {
            (**(int (***)())(*piStack_a4 + 8))();
            piStack_a4 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*param_1 + 0x24))(param_1,auStack_b0[0],&piStack_a4);
          if (lVar1 < 0) goto LAB_82e45fb8;
          fn_82E50330(auStack_80);
          lStack_78 = 0;
          (**(int (***)())(*piStack_a4 + 0x14))(piStack_a4,0xffffffff8215309c,auStack_80);
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (unsigned __int64)uStack_98);
      }
      uVar4 = 0;
      if (uStack_98 != 0) {
        do {
          uStack_94 = 0;
          auStack_90[0] = 0;
          if (piStack_a8 != (int *)0x0) {
            (**(int (***)())(*piStack_a8 + 8))();
            piStack_a8 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*(int *)param_1[0x1e] + 0x88))
                            ((int *)param_1[0x1e],uVar4,auStack_b0,&piStack_a8);
          if (lVar1 < 0) goto LAB_82e45fb8;
          if (piStack_ac != (int *)0x0) {
            (**(int (***)())(*piStack_ac + 8))();
            piStack_ac = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piVar3 + 0xc))(piVar3,0,auStack_b0[0],0,&piStack_ac);
          if (lVar1 < 0) goto LAB_82e45fb8;
          (**(int (***)())(*piStack_ac + 0x20))(piStack_ac,0xffffffff82153050);
          (**(int (***)())(*piStack_ac + 0x20))(piStack_ac,0xffffffff8215306c);
          if (piStack_9c != (int *)0x0) {
            (**(int (***)())(*piStack_9c + 8))();
            piStack_9c = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piStack_a8 + 0x90))(piStack_a8,&piStack_9c);
          if (lVar1 < 0) goto LAB_82e45fb8;
          iVar2 = fn_82E27D58(piStack_9c,0xffffffff82153598,&uStack_94,auStack_90);
          if (-1 < iVar2) {
            fn_82E50330(auStack_80);
            lStack_78 = (unsigned __int64)uStack_94 << 0x20;
            lVar1 = (**(int (***)())(*piStack_ac + 0x18))(piStack_ac,0xffffffff82153050,auStack_80);
            if (lVar1 < 0) goto LAB_82e45fb8;
            lStack_78 = CONCAT44(auStack_90[0],(((unsigned __int64)(lStack_78) >> 32) & 0xFFFFFFFF));
            lVar1 = (**(int (***)())(*piStack_ac + 0x18))(piStack_ac,0xffffffff8215306c,auStack_80);
            if (lVar1 < 0) goto LAB_82e45fb8;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (unsigned __int64)uStack_98);
      }
      fn_82E50330(auStack_80);
      lStack_78 = 0;
      lVar1 = fn_82E450D0(auStack_70,1,10);
      if (((-1 < lVar1) &&
          (lVar1 = fn_82E45160(auStack_70,0,0xffffffff82153174,0xffffffffffffffff), -1 < lVar1))
         && (lVar1 = fn_82E450D0(auStack_70,0x70,10), -1 < lVar1)) {
        lStack_78 = ((((unsigned __int64)(lStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(-(unsigned int)((auStack_70[0] & 0x8000000) == 0) & auStack_70[3])) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        lVar1 = (**(int (***)())(*piStack_a0 + 0x18))(piStack_a0,0xffffffff82153020,auStack_80);
        lStack_78 = CONCAT44((int)lVar1 >> 0x1f & (((unsigned __int64)(lStack_78) >> 0) & 0xFFFFFFFF),(((unsigned __int64)(lStack_78) >> 32) & 0xFFFFFFFF));
      }
    }
  }
LAB_82e45fb8:
  if (piStack_a8 != (int *)0x0) {
    (**(int (***)())(*piStack_a8 + 8))();
    piStack_a8 = (int *)0x0;
  }
  if (piStack_a4 != (int *)0x0) {
    (**(int (***)())(*piStack_a4 + 8))();
    piStack_a4 = (int *)0x0;
  }
  if (piStack_a0 != (int *)0x0) {
    (**(int (***)())(*piStack_a0 + 8))();
    piStack_a0 = (int *)0x0;
  }
  if (piStack_ac != (int *)0x0) {
    (**(int (***)())(*piStack_ac + 8))();
    piStack_ac = (int *)0x0;
  }
  if (piStack_9c != (int *)0x0) {
    (**(int (***)())(*piStack_9c + 8))();
    piStack_9c = (int *)0x0;
  }
  fn_82E50330(auStack_80);
  if (auStack_70[3] != 0) {
    fn_82E44260(auStack_70);
  }
  return lVar1;
}

