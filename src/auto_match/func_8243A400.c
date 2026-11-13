typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_82437EC8();
extern int fn_82439738();
extern int fn_8243AAE8();
extern int fn_8243AEE8();
extern int fn_8243C0C0();
extern int fn_8243D2D8();
extern int fn_82441EF0();
extern int fn_824BD9D8();
extern int fn_82526C70();
extern unsigned int lbl_82192480;


unsigned __int64 fn_8243A400(double param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char auStack_70 [112];
  
  fn_8243C0C0();
  uVar5 = 0;
  *(float *)(*(int *)(param_2 + 0x40) + 0x210) =
       (float)((double)*(float *)(*(int *)(param_2 + 0x40) + 0x210) + param_1);
  *(float *)(*(int *)(param_2 + 0x40) + 0x218) =
       (float)((double)*(float *)(*(int *)(param_2 + 0x40) + 0x218) + param_1);
  if (*(int *)(*(int *)(param_2 + 0x40) + 0x354) - *(int *)(*(int *)(param_2 + 0x40) + 0x350) >> 3
      != 0) {
    iVar4 = 0;
    do {
      fn_82441EF0(param_1,*(unsigned int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x350) + iVar4),
                   *(unsigned int *)(*(int *)(param_2 + 0x40) + 0x1d8));
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 8;
    } while (uVar5 < (unsigned int)(*(int *)(*(int *)(param_2 + 0x40) + 0x354) -
                            *(int *)(*(int *)(param_2 + 0x40) + 0x350) >> 3));
  }
  fn_82439738(param_1,param_2);
  iVar4 = *(int *)(param_2 + 0x40);
  if (*(int *)(iVar4 + 0x2b4) == 0) {
    if ((*(int *)(iVar4 + 0x1d4) != -1) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x1d4) * 4 +
                        *(int *)(*(int *)(param_2 + 0x40) + 0x1c4)), iVar1 != 0)) {
      if (*(int *)(param_2 + 0x14) == 2) {
        if ((*(int *)(param_2 + 0x18) == 2) || (bVar2 = true, *(int *)(param_2 + 0x18) == 0)) {
          bVar2 = false;
        }
        if (!bVar2) {
          fn_82441EF0(param_1,*(int *)(param_2 + 0x40) + 0x1dc,
                       *(unsigned int *)(*(int *)(param_2 + 0x40) + 0x1d8));
          fn_8243C0C0(param_1,iVar1);
          uVar3 = fn_8243AAE8(param_2,iVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      else if (*(int *)(param_2 + 0x14) == 4) {
        if ((lbl_82192480 < *(float *)(param_2 + 0x38)) ||
           ((unsigned int)(*(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c4) >> 2) < 2)) {
          fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x1d8) + 0x174) + 8,
                            0xffffffff821b940c,0,0);
          fn_82437EC8(param_2,2);
          iVar4 = *(int *)(param_2 + 0x40);
          if (*(int *)(iVar4 + 0x1d4) ==
              (*(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c4) >> 2) + -1) {
            uVar3 = fn_8243AEE8(param_2);
            return uVar3;
          }
          return 2;
        }
        iVar4 = *(int *)(param_2 + 0x40);
        if (*(int *)(iVar4 + 0x1d4) == (*(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c4) >> 2) + -1
           ) {
          uVar3 = 0xffffffff821b9494;
        }
        else {
          uVar3 = 0xffffffff821b94b0;
        }
        fn_82526C70(auStack_70,0x40,uVar3);
      }
    }
  }
  else {
    *(float *)(iVar4 + 0x220) = (float)((double)*(float *)(iVar4 + 0x220) + param_1);
    iVar4 = *(int *)(param_2 + 0x40);
    if ((*(float *)(iVar4 + 0x220) <= *(float *)(iVar4 + 0x228)) || (*(int *)(iVar4 + 0x230) == 0))
    {
      iVar4 = *(int *)(param_2 + 0x40);
      if ((*(float *)(iVar4 + 0x220) <= *(float *)(iVar4 + 0x22c)) || (*(int *)(iVar4 + 0x234) != 0)
         ) {
        if (*(float *)(*(int *)(param_2 + 0x40) + 0x224) <
            *(float *)(*(int *)(param_2 + 0x40) + 0x220)) {
          return 3;
        }
      }
      else {
        fn_824BD9D8(*(unsigned int *)(*(int *)(iVar4 + 0x1d8) + 0x90));
        *(unsigned int *)(*(int *)(param_2 + 0x40) + 0x234) = 1;
      }
    }
    else {
      *(unsigned int *)(iVar4 + 0x230) = 0;
    }
  }
  return 0;
}

