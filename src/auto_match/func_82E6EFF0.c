extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E50BE8();


__int64 fn_82E6EFF0(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int auStack_50 [2];
  unsigned __int64 auStack_48;
  
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    auStack_48 = 0;
    lVar2 = (**(int (***)())(*param_2 + 0x14))(param_2,&auStack_48,0);
    if (-1 < lVar2) {
      if (auStack_48 < 0x100000000) {
        uVar1 = auStack_48 & 0xffffffff;
        lVar3 = fn_82E50BE8(uVar1,0,0,0,0);
        if (lVar3 == 0) {
          lVar2 = -0x7ff8fff2;
        }
        else {
          auStack_50[0] = 0;
          lVar2 = (**(int (***)())(*param_2 + 0x1c))(param_2,lVar3,uVar1,auStack_50);
          if ((-1 < lVar2) &&
             ((uVar1 != auStack_50[0] ||
              (((lVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x1c))
                                   (*(int **)(param_1 + 0x2c),*(unsigned __int64 *)(param_1 + 0x30)),
                -1 < lVar2 &&
                (lVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))
                                   (*(int **)(param_1 + 0x2c),lVar3,uVar1,auStack_50), -1 < lVar2))
               && (uVar1 != auStack_50[0])))))) {
            lVar2 = -0x3ff2c945;
          }
          fn_82E4FE40(lVar3);
        }
      }
      else {
        lVar2 = -0x3ff2c945;
      }
    }
  }
  return lVar2;
}

