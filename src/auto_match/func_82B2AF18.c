typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int INFINITY;
extern unsigned int fStack_e0;
extern int fn_82ACA920();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AF49A8();
extern int fn_82AF7710();
extern int fn_82B16720();
extern int fn_82B16ED0();
extern int fn_82B1A7E8();
extern int fn_82B1AF10();
extern int fn_82B25248();
extern int fn_82B28530();
extern int fn_82B471E8();
extern int fn_82B80EF8();
extern int fn_82B82D28();
extern int fn_82B8A3A0();
extern int fn_82B8A3E8();
extern int fn_82F6E018();
extern unsigned int iStack_90;
extern unsigned int iStack_a8;
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


unsigned __int64
fn_82B2AF18(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8,unsigned __int64 param_9)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  bool bVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  char cVar10;
  float fVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  double dVar16;
  double dVar17;
  double extraout_f1;
  double dVar18;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int in_stack_00000064;
  float fStack_e0;
  unsigned int uStack_d0;
  int iStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  struct { unsigned int first; unsigned int second; } stack_pair_a4;

  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  
  uVar13 = (unsigned __int64)in_stack_00000054;
  dVar18 = (double)lbl_821AAD20;
  if ((*(unsigned int *)(param_8 + 8) & 0x3f80) != 16000) goto LAB_82b2b398;
  if ((*(unsigned int *)(param_5 + 8) & 0x3f80) == 16000) {
    dVar18 = (double)fn_82B80EF8(param_5,param_6,param_7);
    dVar16 = (double)fn_82B80EF8(param_8,param_9,in_stack_00000054);
    lVar4 = fn_82B16ED0(param_5,param_6);
    if (lVar4 != 0) {
      fn_82B16ED0(param_8,param_9);
    }
    dVar17 = lbl_82005710;
    if ((dVar18 != lbl_82005710) && (dVar16 != lbl_82005710)) {
      dVar17 = (double)fn_82B16720(dVar16 * dVar18);
    }
    param_5 = fn_82B8A3E8(dVar17,param_2);
    if (in_stack_0000005c != (unsigned int *)0x0) {
      uVar5 = fn_82AD1918(param_2,*in_stack_0000005c,in_stack_0000005c[1],in_stack_0000005c[2]
                               );
      uVar6 = fn_82AD18C0(param_2,param_5,0);
      param_5 = fn_82B1A7E8(param_2,0,param_3,uVar6,uVar5);
      if ((((double)(__int64)(int)dVar16 == dVar16) &&
          ((*(unsigned short *)(in_stack_0000005c[3] + 0xe) >> ((in_stack_0000005c[4] & 0xf) << 2) & 4) != 0
          )) && ((*(unsigned int *)(param_5 + 0xc) & 4) != 4)) {
        *(unsigned short *)(param_5 + 0xe) = (unsigned short)*(unsigned int *)(param_5 + 0xc) | 4;
      }
    }
    goto LAB_82b2b0b8;
  }
  param_1 = (double)fn_82B80EF8(param_8,param_9,uVar13);
  if ((param_1 == lbl_82005758) && (in_stack_0000005c == (unsigned int *)0x0)) goto LAB_82b2b0c0;
  if (param_1 == lbl_82002C40) {
    if (in_stack_0000005c == (unsigned int *)0x0) {
      uVar6 = fn_82AD1918(param_2,param_5,param_6,param_7);
      uVar5 = uVar6;
LAB_82b2b148:
      param_5 = fn_82AF7710(param_2,0,param_3,uVar6,uVar5);
    }
    else {
LAB_82b2b398:
      if (((param_5 != param_8) || ((int)param_6 != (int)param_9)) ||
         ((param_7 & 0xffffffff) != uVar13)) {
LAB_82b2b47c:
        bVar3 = false;
        if ((*(unsigned int *)(param_5 + 8) & 0x3f80) != 0x1980) goto LAB_82b2b4ac;
        uVar7 = uVar13;
        uVar14 = param_9;
        uVar12 = param_5;
        uVar15 = param_8;
        if ((param_7 & 0xffffffff) != 0) goto LAB_82b2b4ac;
        while ((((param_1 = (double)fn_82B82D28(param_1,*(unsigned int *)(uVar12 + 0x2c),0,
                                                      &uStack_ac,&iStack_a8,&stack_pair_a4.first,0,param_3,0),
                 uStack_ac != uVar15 || (iStack_a8 != (int)uVar14)) ||
                ((unsigned __int64)stack_pair_a4.first != (uVar7 & 0xffffffff))) ||
               (in_stack_0000005c != (unsigned int *)0x0))) {
LAB_82b2b4ac:
          if (((bVar3) || ((*(unsigned int *)(param_8 + 8) & 0x3f80) != 0x1980)) || (uVar13 != 0)) {
            if (((in_stack_0000005c != (unsigned int *)0x0) || ((param_7 & 0xffffffff) != 0)) ||
               (((*(unsigned int *)(param_5 + 8) & 0x3f80) != 0x100 ||
                (((*(unsigned int *)(*(int *)(param_3 + 0x1c) + 0x4c) ^
                  *(unsigned int *)(*(int *)(param_5 + 0x1c) + 0x4c)) & 0x7ffff) != 0)))) {
              return 0;
            }
            fn_82B82D28(param_1,*(unsigned int *)(param_5 + 0x2c),param_6,&uStack_c0,&uStack_c8,
                              &uStack_c4,0,param_3,0);
            fn_82B82D28(*(unsigned int *)(param_5 + 0x30),param_6,&uStack_b4,&uStack_b8,
                              &uStack_bc,0,param_3,0);
            stack_pair_a4.second = uStack_b4;
            uStack_9c = uStack_b8;
            uStack_98 = uStack_bc;
            uStack_94 = param_5;
            iStack_90 = (int)param_6;
            cVar10 = ((int (*)())fn_82B2AF18)(param_2,param_3,param_4,uStack_c0,uStack_c8,uStack_c4,param_8,
                                   param_9);
            if (cVar10 != '\0') {
              return 1;
            }
            uStack_9c = uStack_c8;
            uStack_98 = uStack_c4;
            stack_pair_a4.second = uStack_c0;
            cVar10 = ((int (*)())fn_82B2AF18)(param_2,param_3,param_4,uStack_b4,uStack_b8,uStack_bc,param_8,
                                   param_9);
            if (cVar10 == '\0') {
              return 0;
            }
            return 1;
          }
          bVar3 = true;
          uVar7 = param_7;
          uVar14 = param_6;
          uVar12 = param_8;
          uVar15 = param_5;
        }
        param_1 = (double)lbl_82002AE0;
        goto LAB_82b2b204;
      }
      if (((param_7 & 0xffffffff) == 0) && ((*(unsigned int *)(param_5 + 8) & 0x3f80) == 0x2400)) {
        puVar2 = *(unsigned int **)(param_5 + 0x2c);
        if (in_stack_0000005c == (unsigned int *)0x0) {
          param_5 = puVar2[3];
          param_7 = (unsigned __int64)*puVar2 & 0x1f;
          param_6 = (unsigned __int64)(*puVar2 >> 5) & 3;
          goto LAB_82b2b0c0;
        }
        uVar5 = fn_82B471E8(param_2,puVar2,param_6);
        uVar6 = fn_82AD1918(param_2,*in_stack_0000005c,in_stack_0000005c[1],
                                  in_stack_0000005c[2]);
        param_5 = fn_82B1A7E8(param_2,0,param_3,uVar5,uVar6);
      }
      else {
        if ((((param_7 & 0xffffffff) != uVar13) ||
            (((param_7 & 0xffffffff) != 0 || ((*(unsigned int *)(param_5 + 8) & 0x3f80) != 0x1b00)))) ||
           (in_stack_0000005c != (unsigned int *)0x0)) goto LAB_82b2b47c;
        uVar5 = fn_82ACA920(param_2,*(int *)(param_5 + 0x2c),
                                  *(unsigned int *)(*(int *)(param_5 + 0x2c) + 0xc));
        param_5 = fn_82B1AF10(param_2,0,param_3,uVar5);
      }
    }
  }
  else {
    if (in_stack_0000005c != (unsigned int *)0x0) goto LAB_82b2b398;
    iVar9 = fn_82F6E018();
    if (iVar9 != 4) {
      if (iVar9 == 0x20) {
        fStack_e0 = (float)dVar18;
        fVar11 = -0.0;
        goto LAB_82b2b1c8;
      }
      if (iVar9 == 0x40) {
        fVar11 = (float)dVar18;
        fStack_e0 = -0.0;
        goto LAB_82b2b1c8;
      }
      param_1 = extraout_f1;
      if (iVar9 == 0x200) {
        fVar11 = INFINITY;
        fStack_e0 = -INFINITY;
        goto LAB_82b2b1c8;
      }
LAB_82b2b220:
      if ((((param_7 & 0xffffffff) == 0) && ((*(unsigned int *)(param_5 + 8) & 0x3f80) == 0x80)) &&
         (param_1 = (double)fn_82B82D28(param_1,*(unsigned int *)(param_5 + 0x30),param_6,
                                              &iStack_cc,&uStack_d0,&uStack_b0,0,param_3,0),
         (*(unsigned int *)(iStack_cc + 8) & 0x3f80) == 16000)) {
        dVar18 = (double)fn_82B80EF8(iStack_cc,uStack_d0,uStack_b0);
        dVar16 = (double)fn_82B80EF8(param_8,param_9,uVar13);
        fn_82B16ED0(param_8,param_9);
        uVar5 = fn_82B8A3E8(param_2);
        lVar4 = fn_82B16ED0(iStack_cc,uStack_d0);
        if (lVar4 != 0) {
          fn_82B16ED0(param_8,param_9);
        }
        dVar17 = lbl_82005710;
        if ((dVar18 != lbl_82005710) && (dVar16 != lbl_82005710)) {
          dVar17 = (double)fn_82B16720(dVar16 * dVar18);
        }
        uVar6 = fn_82B8A3E8(dVar17,param_2);
        uVar1 = *(unsigned int *)(param_5 + 0x2c);
        uVar5 = fn_82AD18C0(param_2,uVar5,0);
        uVar8 = fn_82B471E8(param_2,uVar1,param_6);
        uVar8 = fn_82B1A7E8(param_2,0,param_3,uVar8,uVar5);
        fn_82B25248(param_2,uVar8,*(unsigned int *)(param_2 + 0x28c));
        uVar5 = fn_82AD18C0(param_2,uVar6,0);
        uVar6 = fn_82AD18C0(param_2,uVar8,0);
        goto LAB_82b2b148;
      }
      goto LAB_82b2b398;
    }
    fVar11 = -INFINITY;
    fStack_e0 = INFINITY;
LAB_82b2b1c8:
    uVar14 = 2;
    uVar7 = fn_82AF49A8(*(unsigned short *)(param_5 + 0xe) >> ((unsigned int)((param_6 & 0xffffffff) << 2) & 0x3c)
                         & 0xf,param_7);
    if ((uVar7 & 2) == 0) {
      uVar14 = 1;
      fVar11 = fStack_e0;
    }
    param_1 = (double)fVar11;
    if ((uVar7 & uVar14) == 0) goto LAB_82b2b220;
LAB_82b2b204:
    param_5 = fn_82B8A3A0(param_1,dVar18,dVar18,dVar18,param_2,1);
  }
LAB_82b2b0b8:
  param_7 = 0;
  param_6 = 0;
LAB_82b2b0c0:
  fn_82B28530(param_2,param_3,param_4,param_5,param_6,param_7,*(unsigned int *)(param_2 + 0x28c),
                in_stack_00000064);
  return 1;
}

