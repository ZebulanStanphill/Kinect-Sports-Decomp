extern unsigned int *auStack_90;
extern unsigned int *auStack_9c;
extern int fn_82635A30();
extern int fn_82635CC8();
extern int fn_82635F08();
extern int fn_82636758();
extern int fn_82AA0BB8();
extern int fn_82AA10A0();
extern int fn_82AA1398();
extern int fn_82AA14F8();
extern int fn_82AA1608();
extern int fn_82AB14E0();
extern int fn_82AB7198();
extern unsigned int uStack_a0;


__int64 fn_82AA18C8(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,
                      unsigned int *param_5,__int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar3;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uStack_a0;
  unsigned int auStack_9c [3];
  unsigned char auStack_90 [144];
  
  lVar2 = fn_82AB7198(param_4);
  puVar4 = (unsigned int *)lVar2;
  uVar10 = lVar2 + 8;
  uVar8 = ((unsigned __int64)*puVar4 & 0x3fffffff) * 4;
  uVar11 = uVar10 + uVar8;
  uVar7 = uVar10;
  if ((uVar10 & 0xffffffff) < (uVar11 & 0xffffffff)) {
    do {
      iVar5 = fn_82AB14E0(uVar7,0x2d,4);
      if ((0 < iVar5) && (iVar5 < 3)) {
        uVar8 = fn_82AB14E0(uVar7,1,0xc);
        goto LAB_82aa1950;
      }
      uVar7 = uVar7 + 6;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar8 = uVar8 / 0xc;
LAB_82aa1950:
  uVar7 = (uVar8 * 0xc & 0xffffffff) >> 2;
  if (uVar7 != 0) {
    lVar2 = lVar2 + 4;
    do {
      uVar1 = *(unsigned int *)((int)lVar2 + 4);
      lVar2 = lVar2 + 4;
      *(unsigned int *)lVar2 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00 | uVar1 >> 0x18;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar2 = fn_82636758();
  if (lVar2 == 0) {
    lVar9 = -0x7ff8fff2;
  }
  else {
    *param_5 = (int)lVar2;
    uVar6 = 0x32;
    if ((int)param_6 != 0) {
      uVar6 = 0x36;
    }
    fn_82635A30(lVar2,uVar6);
    fn_82AA10A0(param_4,lVar2,param_6);
    lVar9 = fn_82AA14F8(param_1,param_2,uVar10,*puVar4 << 2,param_3,lVar2,param_4,1);
    if (-1 < lVar9) {
      lVar9 = fn_82AA1608(param_1,param_2,param_6,lVar2,auStack_90);
      if (-1 < lVar9) {
        if (param_3 != (int *)0x0) {
          lVar3 = (**(int (***)())(*param_3 + 0x10))(param_3);
          if (lVar3 != 0) {
            uVar6 = (**(int (***)())(*param_3 + 0xc))(param_3);
            fn_82635CC8(lVar2,uVar6,lVar3);
          }
        }
        fn_82AA0BB8(param_4,lVar2,auStack_9c,&uStack_a0,param_6 != 0);
        fn_82AA1398(uVar10,*puVar4 << 2,param_7,auStack_9c[0],uStack_a0,lVar2,auStack_90);
        if (param_8 != (unsigned int *)0x0) {
          fn_82635F08(lVar2,*param_8,param_8[1]);
        }
      }
    }
  }
  return lVar9;
}

