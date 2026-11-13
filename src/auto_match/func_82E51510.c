#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E59440();
extern int fn_82E5C7D8();
extern int fn_82EE1A60();
extern int fn_82EE1B38();
extern int fn_82F6ADA8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x82e51798) */
/* WARNING: Removing unreachable block (ram,0x82e517c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E51510(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned short uStack_80;
  unsigned short uStack_7e;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int aiStack_6c [3];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  
  if (((param_2 == (int *)0x0) || (param_3 == (unsigned int *)0x0)) || (param_4 == (unsigned int *)0x0))
  {
    lVar2 = -0x7fffbffd;
  }
  else {
    piStack_78 = (int *)0x0;
    *param_3 = 1;
    uStack_58 = 0;
    uStack_50 = 0;
    piStack_74 = (int *)0x0;
    piStack_7c = (int *)0x0;
    *param_4 = 1;
    piStack_70 = (int *)0x0;
    uStack_80 = 0;
    uStack_7e = 0;
    lVar2 = fn_82E5C7D8(param_2,&uStack_80);
    if (((-1 < lVar2) && (lVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,&piStack_78), -1 < lVar2))
       && ((lVar2 = fn_82E59440(piStack_78,0xffffffff820ed018,0xffffffff82154c58,&piStack_74),
           -1 < lVar2 &&
           (lVar2 = (**(int (***)())*piStack_74)(piStack_74,0xffffffff82154c18,&piStack_7c), -1 < lVar2)
           ))) {
      aiStack_6c[0] = 0;
      lVar2 = (**(int (***)())(*piStack_7c + 0xc))(piStack_7c,0xffffffff820ed0b8,aiStack_6c);
      if (((-1 < lVar2) && (aiStack_6c[0] != 0)) &&
         ((lVar2 = (**(int (***)())(*piStack_7c + 0x10))(piStack_7c,0xffffffff820ed0b8,0,&piStack_70),
          piVar1 = piStack_70, -1 < lVar2 &&
          (((piStack_70 != (int *)0x0 &&
            (lVar2 = fn_82EE1A60(piStack_70,&uStack_80,0,&uStack_7e), -1 < lVar2)) &&
           (uVar4 = 0, uStack_7e != 0)))))) {
        do {
          if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
            fn_82E4FE40();
          }
          uStack_58 = uStack_58 & 0xffffffff00000000;
          if ((((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
            fn_82E4FE40();
          }
          uStack_58 = 0;
          uStack_50 = 0;
          lVar2 = fn_82EE1B38(piVar1,&uStack_80,0,uVar4,auStack_60);
          if (lVar2 < 0) break;
          lVar2 = (uStack_58 >> 0x31) << 1;
          if (0x7fffffff < uStack_58 >> 0x31) {
            lVar2 = -1;
          }
          iVar3 = fn_82E50BE8(lVar2,0,0,0,0);
          uStack_58 = CONCAT44((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF),iVar3);
          if (iVar3 == 0) {
LAB_82e517f0:
            lVar2 = -0x7ff8fff2;
            break;
          }
          iVar3 = fn_82E50BE8((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF),0,0,0,0);
          uStack_50 = CONCAT44((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF),iVar3);
          if (iVar3 == 0) goto LAB_82e517f0;
          lVar2 = fn_82EE1B38(piVar1,&uStack_80,0,uVar4,auStack_60);
          if (lVar2 < 0) break;
          fn_82F6ADA8(0xffffffff821546dc,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
          fn_82F6ADA8(0xffffffff821546f8,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7e);
      }
    }
    if (piStack_78 != (int *)0x0) {
      (**(int (***)())(*piStack_78 + 8))();
      piStack_78 = (int *)0x0;
    }
    if (piStack_74 != (int *)0x0) {
      (**(int (***)())(*piStack_74 + 8))();
      piStack_74 = (int *)0x0;
    }
    if (piStack_7c != (int *)0x0) {
      (**(int (***)())(*piStack_7c + 8))();
      piStack_7c = (int *)0x0;
    }
    if (piStack_70 != (int *)0x0) {
      (**(int (***)())(*piStack_70 + 8))();
      piStack_70 = (int *)0x0;
    }
    if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
    uStack_58 = uStack_58 & 0xffffffff00000000;
    if ((((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
  }
  return lVar2;
}

