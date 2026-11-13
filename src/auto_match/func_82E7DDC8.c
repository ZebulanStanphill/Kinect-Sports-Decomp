extern unsigned int *auStack_60;
extern int fn_82E44260();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E66D68();
extern int fn_82EF3B58();
extern int fn_82EF4418();
extern int fn_82EF4420();
extern int fn_82EF4428();
extern unsigned int uStack_70;


__int64 fn_82E7DDC8(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uStack_70;
  int *piStack_6c;
  int aiStack_68 [2];
  unsigned int auStack_60 [4];
  
  uVar1 = auStack_60[0];
  auStack_60[0] = auStack_60[0] & 0x81ffffff | 0x4000000;
  piStack_6c = (int *)0x0;
  lVar7 = 0;
  aiStack_68[0] = 0;
  uVar5 = 0;
  auStack_60[2] = 0;
  uVar4 = 0;
  auStack_60[3] = 0;
  uVar6 = 0;
  auStack_60[1] = 0;
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = (**(int (***)())(**(int **)(param_1 + 4) + 0x10))
                    (*(int **)(param_1 + 4),0xffffffff820ed068,0,&piStack_6c);
  if (-1 < iVar2) {
    uStack_70 = 0;
    lVar7 = fn_82EF4418(piStack_6c,0,0,&uStack_70);
    if ((-1 < lVar7) || ((int)lVar7 == -0x3ff2c94f)) {
      uVar5 = fn_82E50BE8(uStack_70,0,0,0,0);
      if (uVar5 != 0) {
        lVar7 = fn_82EF4418(piStack_6c,uStack_70,uVar5,&uStack_70);
        if (lVar7 < 0) goto LAB_82e7e154;
        uStack_70 = 0;
        lVar7 = fn_82EF4420(piStack_6c,0,0,&uStack_70);
        if ((lVar7 < 0) && ((int)lVar7 != -0x3ff2c94f)) goto LAB_82e7e154;
        uVar4 = fn_82E50BE8(uStack_70,0,0,0,0);
        if (uVar4 != 0) {
          lVar7 = fn_82EF4420(piStack_6c,uStack_70,uVar4,&uStack_70);
          if (lVar7 < 0) goto LAB_82e7e154;
          aiStack_68[0] = 0;
          lVar7 = fn_82EF3B58(piStack_6c,0,0,aiStack_68);
          if ((lVar7 < 0) && ((int)lVar7 != -0x3ff2c94f)) goto LAB_82e7e154;
          uVar6 = fn_82E50BE8(aiStack_68[0],0,0,0,0);
          if (uVar6 != 0) {
            lVar7 = fn_82EF3B58(piStack_6c,aiStack_68[0],uVar6,aiStack_68);
            if (lVar7 < 0) goto LAB_82e7e154;
            uStack_70 = 0;
            lVar7 = fn_82EF4428(piStack_6c,0,0,&uStack_70);
            if ((lVar7 < 0) && ((int)lVar7 != -0x3ff2c94f)) goto LAB_82e7e154;
            uVar3 = fn_82E50BE8(uStack_70,0,0,0,0);
            if (uVar3 != 0) {
              lVar7 = fn_82EF4428(piStack_6c,uStack_70,uVar3,&uStack_70);
              if (-1 < lVar7) {
                auStack_60[0] = uVar1 & 0x81ffffff | 0x4000000;
                auStack_60[1] = 0;
                lVar7 = fn_82E66D68(auStack_60,0,uVar5,0xffffffffffffffff);
                uVar1 = auStack_60[0];
                if ((-1 < lVar7) &&
                   (lVar7 = (**(int (***)())(*param_2 + 100))
                                      (param_2,0xffffffff8214c0e0,
                                       -(unsigned int)((auStack_60[0] & 0x8000000) == 0) & auStack_60[3]),
                   -1 < lVar7)) {
                  auStack_60[0] = uVar1 & 0xf7ffffff;
                  auStack_60[1] = 0;
                  lVar7 = fn_82E66D68(auStack_60,0,uVar4,0xffffffffffffffff);
                  uVar1 = auStack_60[0];
                  if (((-1 < lVar7) &&
                      (lVar7 = (**(int (***)())(*param_2 + 100))
                                         (param_2,0xffffffff8214c0f0,
                                          -(unsigned int)((auStack_60[0] & 0x8000000) == 0) & auStack_60[3])
                      , -1 < lVar7)) &&
                     ((aiStack_68[0] == 0 ||
                      (lVar7 = (**(int (***)())(*param_2 + 0x68))(param_2,0xffffffff8214c100,uVar6),
                      -1 < lVar7)))) {
                    auStack_60[0] = uVar1 & 0xf7ffffff;
                    auStack_60[1] = 0;
                    lVar7 = fn_82E66D68(auStack_60,0,uVar3,0xffffffffffffffff);
                    if (-1 < lVar7) {
                      lVar7 = (**(int (***)())(*param_2 + 100))
                                        (param_2,0xffffffff8214c110,
                                         -(unsigned int)((auStack_60[0] & 0x8000000) == 0) & auStack_60[3]);
                    }
                  }
                }
              }
              goto LAB_82e7e154;
            }
          }
        }
      }
      lVar7 = -0x7ff8fff2;
    }
  }
LAB_82e7e154:
  if (piStack_6c != (int *)0x0) {
    (**(int (***)())(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
  if ((uVar6 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar6);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  if (auStack_60[3] != 0) {
    fn_82E44260(auStack_60);
  }
  return lVar7;
}

