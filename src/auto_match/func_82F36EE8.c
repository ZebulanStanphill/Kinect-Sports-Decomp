#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E59158();
extern int fn_82F68CC0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_78;
extern unsigned int uStack_7a;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82F36EE8(int param_1,int *param_2,int *param_3,unsigned __int64 param_4,int *param_5,
                      unsigned int *param_6)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  int aiStack_a0 [4];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned __int64 uStack_88;
  unsigned int uStack_80;
  unsigned short uStack_7c;
  unsigned short uStack_7a;
  unsigned __int64 uStack_78;
  
  if ((((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_5 == (int *)0x0)) ||
     (param_6 == (unsigned int *)0x0)) {
    return -0x7ff8ffa9;
  }
  piVar6 = (int *)(param_1 + 0x74);
  *param_5 = 0;
  *param_6 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    return -0x3ff2c94e;
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  uVar7 = 0;
  lVar2 = (**(int (***)())(*param_3 + 0x14))(param_3,&uStack_a8,&uStack_a4);
  if (lVar2 < 0) goto LAB_82f36fac;
  if (((unsigned __int64)uStack_a8 == 0) || (uVar4 = (unsigned __int64)uStack_a4, uVar4 == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    if (uVar4 < (param_4 & 0xffffffff)) {
      lVar2 = -0x7ff8ffa9;
      goto LAB_82f36fac;
    }
    piVar1 = *(int **)(param_1 + 0x88);
    uVar4 = uVar4 - param_4;
    uStack_ac = 0;
    lVar8 = uStack_a8 + param_4;
    uStack_b0 = 0;
    if (piVar1 == (int *)0x0) {
      lVar2 = -0x7ff8fff2;
      goto LAB_82f36fac;
    }
    lVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1,&uStack_ac,&uStack_b0);
    if (lVar2 < 0) goto LAB_82f36fac;
    if ((unsigned __int64)uStack_ac == 0) {
      lVar2 = -0x7fff0001;
      goto LAB_82f36fac;
    }
    uVar5 = (unsigned __int64)uStack_b0;
    if ((uVar5 == 0) && (0x17 < (uVar4 & 0xffffffff))) {
      uStack_ac = (unsigned int)lVar8;
    }
    else {
      uVar7 = 0x18 - uVar5;
      if ((uVar4 & 0xffffffff) < (0x18 - uVar5 & 0xffffffff)) {
        uVar7 = uVar4;
      }
      fn_82F68CC0(uVar5 + uStack_ac,lVar8,uVar7);
      uStack_b0 = (int)uVar7 + uStack_b0;
      lVar2 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
      if (lVar2 < 0) goto LAB_82f36fac;
      if (uStack_b0 < 0x18) {
        lVar2 = 0x400d3a98;
        goto LAB_82f3725c;
      }
    }
    uStack_90 = lbl_8202E618;
    uStack_8c = lbl_8202E61C;
    uStack_88 = CONCAT44(lbl_8202E620,lbl_8202E624);
    fn_82F68CC0(&uStack_80,uStack_ac,0x10);
    uStack_90 = uStack_80 << 0x18 |
                (uStack_80 & 0xff00) << 8 | uStack_80 >> 8 & 0xff00 | uStack_80 >> 0x18;
    uStack_8c = CONCAT22(uStack_7c << 8 | uStack_7c >> 8,uStack_7a << 8 | uStack_7a >> 8);
    uStack_88 = uStack_78;
    iVar3 = (**(int (***)())(*param_2 + 0x1c))(param_2,&uStack_90,piVar6);
    if ((iVar3 < 0) &&
       (((iVar3 == -0x7ffbfeac || (iVar3 == -0x3ff2c92b)) &&
        (lVar2 = (**(int (***)())(*param_2 + 0x1c))(param_2,0xffffffff821549c8,piVar6), lVar2 < 0))))
    goto LAB_82f36fac;
    piVar1 = *(int **)(param_1 + 0x88);
    aiStack_a0[0] = 0;
    if ((piVar1 != (int *)0x0) &&
       ((**(int (***)())(*piVar1 + 0x14))(piVar1,0,aiStack_a0), aiStack_a0[0] != 0)) {
      aiStack_a0[1] = 0;
      lVar2 = (**(int (***)())(*(int *)*piVar6 + 0x18))
                        ((int *)*piVar6,*(unsigned int *)(param_1 + 0x88),aiStack_a0 + 1);
      if (lVar2 < 0) goto LAB_82f36fac;
      (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))(*(int **)(param_1 + 0x88),0);
    }
    lVar2 = fn_82E59158(param_3,uVar7 + param_4,param_5);
    if (lVar2 < 0) goto LAB_82f36fac;
  }
  if (-1 < (int)lVar2) {
LAB_82f3725c:
    *param_6 = (int)uVar7;
    return lVar2;
  }
LAB_82f36fac:
  if ((int *)*param_5 != (int *)0x0) {
    (**(int (***)())(*(int *)*param_5 + 8))();
    *param_5 = 0;
  }
  if ((int *)*piVar6 != (int *)0x0) {
    (**(int (***)())(*(int *)*piVar6 + 8))();
    *piVar6 = 0;
  }
  return lVar2;
}

