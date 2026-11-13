extern int fn_82F65E20();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8208ED4C;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82A69210(int param_1, int param_2, unsigned int param_3, unsigned int param_4, int param_5, unsigned short param_6, unsigned int param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, unsigned short in_stack_0000006e, unsigned short in_stack_00000076, int in_stack_0000007c, unsigned int in_stack_00000084)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  double dVar9;
  double dVar10;







  unsigned short *in_stack_0000008c;
  
  if (in_stack_0000008c == (unsigned short *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (unsigned int)*in_stack_0000008c;
  }
  uVar3 = in_stack_00000064 << 3;
  uVar5 = (1 << ((param_8 & 0xffff) - 1 & 0x3f)) - 1;
  *(unsigned int *)(param_1 + 0x58) = param_7;
  uVar7 = (int)uVar3 >> 3;
  *(short *)(param_1 + 0x6e) = (short)param_8;
  *(unsigned int *)(param_1 + 0x74) = uVar5;
  *(unsigned int *)(param_1 + 0x334) = param_3;
  uVar6 = 0;
  *(unsigned int *)(param_1 + 0x100) = param_4;
  *(unsigned short *)(param_1 + 0x22) = param_6;
  *(unsigned int *)(param_1 + 100) = in_stack_00000084;
  *(unsigned int *)(param_1 + 0x68) = in_stack_00000054;
  *(unsigned int *)(param_1 + 0x54) = in_stack_0000005c;
  *(int *)(param_1 + 0x3c) = param_2;
  *(int *)(param_1 + 0x50) = param_5;
  *(unsigned int *)(param_1 + 0x70) = ~uVar5;
  *(unsigned int *)(param_1 + 0xc) = uVar3;
  *(unsigned int *)(param_1 + 0x40) = (unsigned int)in_stack_0000006e;
  *(unsigned int *)(param_1 + 0x44) = (unsigned int)in_stack_00000076;
  *(unsigned int *)(param_1 + 0x26c) = uVar7;
  uVar5 = uVar7;
  while (1 < uVar5) {
    uVar6 = uVar6 + 1;
    uVar5 = uVar7 >> (uVar6 & 0x3f);
  }
  uVar7 = 0;
  *(unsigned int *)(param_1 + 0x264) = uVar6 + 1;
  if (1 < uVar3) {
    do {
      uVar7 = uVar7 + 1;
    } while (1 < *(unsigned int *)(param_1 + 0xc) >> (uVar7 & 0x3f));
  }
  *(unsigned int *)(param_1 + 0x268) = uVar7 + 1;
  if (*(int *)(param_1 + 0xb0) == 1) {
    uVar7 = 0xffffff7f;
  }
  else {
    uVar7 = 0xfffffd75;
    if (2 < param_2) {
      uVar7 = 0xfffffc75;
    }
  }
  if (((uVar7 & 0xffff & uVar8) == 0) && ((&lbl_8208ED4C)[uVar8 & 0xf] != '\0')) {
    if ((uVar8 & 10) == 10) {
      uVar8 = 0;
    }
    *(int *)(param_1 + 0x1c4) = param_5;
    *(unsigned int *)(param_1 + 0x1c8) = 0;
    if ((uVar8 & 2) == 0) {
      if ((uVar8 & 8) == 0) {
        if (in_stack_0000007c != param_5) {
          dVar9 = (double)fn_82F65E20((double)(__int64)param_5 /
                                       (double)(__int64)in_stack_0000007c);
          dVar10 = (double)fn_82F65E20(lbl_82002C40);
          fVar1 = (float)(dVar9 / dVar10);
          if (lbl_821AAD20 <= fVar1) {
            fVar1 = fVar1 + lbl_82002C5C;
          }
          else {
            fVar1 = fVar1 - lbl_82002C5C;
          }
          uVar8 = (unsigned int)fVar1;
          *(unsigned int *)(param_1 + 0x1c8) = uVar8;
          if ((int)uVar8 < 1) {
            *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x50) << (-uVar8 & 0x3f);
          }
          else {
            *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x50) >> (uVar8 & 0x3f);
          }
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x1c8) = 0xffffffff;
        *(int *)(param_1 + 0x1c4) = param_5 << 1;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x1c8) = 1;
      *(int *)(param_1 + 0x1c4) = param_5 >> 1;
    }
    iVar2 = *(int *)(param_1 + 0x1c8);
    *(unsigned int *)(param_1 + 0x1bc) = 0;
    *(unsigned int *)(param_1 + 0x1c0) = 0;
    *(unsigned int *)(param_1 + 0x1cc) = 0;
    if (iVar2 < 0) {
      *(unsigned int *)(param_1 + 0x1c0) = 1;
      *(int *)(param_1 + 0x1c8) = -iVar2;
    }
    else if (((0 < iVar2) && (*(unsigned int *)(param_1 + 0x1bc) = 1, 2 < *(int *)(param_1 + 0x3c)))
            && (*(int *)(param_1 + 0xb0) == 0)) {
      *(unsigned int *)(param_1 + 0x1cc) = 1;
      return 0;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff80040000;
  }
  return uVar4;
}

