#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82AA66A8();
extern int fn_82B45DE8();
extern int fn_82F6DCE0();
extern unsigned int lbl_83160E20;


unsigned __int64 fn_82B462A8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 * 0x28 + *(int *)(param_1 + 0xc) + 0xc);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 6)) {
    if (((*(unsigned int *)(param_1 + 0x28) & 0x10000) == 0) || (0x2d6 < param_2)) {
      if ((((*(unsigned int *)(param_1 + 0x28) & 0x40000) == 0) ||
          (uVar1 = *(unsigned int *)(param_1 + 600), param_2 < uVar1)) || (uVar1 + 0xc <= param_2)) {
        uVar1 = *(unsigned int *)(param_1 + 0x25c);
        if ((uVar1 != 0) && (uVar1 <= param_2)) {
          iVar3 = *(int *)(param_1 + 0x14) - uVar1;
          if (uVar1 < *(unsigned int *)(param_1 + 600)) {
            iVar3 = *(unsigned int *)(param_1 + 600) - uVar1;
          }
          if (param_2 < uVar1 + iVar3) {
            fn_82F6DCE0(0xffffffff83223e08,100,0xffffffff820d8804,param_2 - uVar1);
            return 0xffffffff83223e08;
          }
        }
        if ((*(unsigned int *)(param_1 + 0x264) == 0) || (param_2 != *(unsigned int *)(param_1 + 0x264))) {
          uVar2 = 0xffffffff82007640;
        }
        else {
          uVar2 = 0xffffffff820d87f4;
        }
      }
      else {
        uVar2 = ZEXT48((&lbl_83160E20)[param_2 - uVar1]);
      }
    }
    else {
      uVar2 = fn_82B45DE8();
    }
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x14);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar2 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x18);
  }
  return uVar2;
}

