extern unsigned int *puRam8322b1e0;
extern unsigned int *auStack_30;
extern int fn_82BE5A48();
extern int fn_82BE5B38();
extern int fn_82BE5B70();
extern int fn_82BE6638();
extern int fn_82BE72C0();
extern int fn_82BE7908();
extern int fn_82BE79F0();
extern int fn_82BE7F48();
extern int fn_82BE7C48();
extern int fn_82BE7D10();
extern int fn_82BE7F48();
extern int fn_82BE80F8();
extern int fn_82BE81A8();
extern int fn_82BE82F0();
extern int fn_82BE8E38();
extern int fn_82BE8EA0();
extern int fn_82BEE7D0();
extern int fn_82BF2A50();
extern int fn_82BE81A8();
extern int fn_82F65350();
extern unsigned int lbl_8317523C;
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D8;
extern unsigned int lbl_8322B224;


void fn_82BE8600(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  short sVar5;
  unsigned __int64 uVar6;
  int aiStack_40 [4];
  unsigned char auStack_30 [16];

  *(unsigned int *)(param_1 + 4) = 0;
  if (*(__int64 *)(param_1 + 0x40) == 0) {
    fn_82BE8E38();
    lVar2 = fn_82BE8EA0();
    *(__int64 *)(param_1 + 0x40) = lVar2;
  }
  else {
    *(unsigned __int64 *)(param_1 + 0x40) = *(unsigned __int64 *)(param_1 + 0x38);
    fn_82BE8E38();
    lVar2 = fn_82BE8EA0();
  }
  *(__int64 *)(param_1 + 0x38) = lVar2;
  if (lbl_8322B1C8 != 0) {
    if (((0 < *(__int64 *)(param_1 + 0x68)) &&
        (lVar2 = (*(__int64 *)(param_1 + 0x60) - *(__int64 *)(param_1 + 0x40)) + lVar2,
        *(__int64 *)(param_1 + 0x60) = lVar2, *(__int64 *)(param_1 + 0x68) < lVar2)) &&
       (*(int *)(param_1 + 0x84) == 0)) {
      fn_82BE7C48(param_1);
    }
    if (((lbl_8322B1C8 != 0) && (0 < *(__int64 *)(param_1 + 0x78))) &&
       ((lVar2 = (*(__int64 *)(param_1 + 0x38) - *(__int64 *)(param_1 + 0x40)) +
                 *(__int64 *)(param_1 + 0x70), *(__int64 *)(param_1 + 0x70) = lVar2,
        *(__int64 *)(param_1 + 0x78) < lVar2 && (*(int *)(param_1 + 0x88) == 0)))) {
      if ((lbl_8322B224 != 0) && (*(int *)(lbl_8322B224 + 0x5c) != 0)) {
        fn_82BE7D10(param_1);
      }
      *(unsigned __int64 *)(param_1 + 0x70) = 0;
      if (lbl_8322B224 != 0) {
        *(unsigned int *)(lbl_8322B224 + 0x5c) = 0;
      }
    }
  }
  if ((puRam8322b1e0 != (unsigned int *)0x0) && (lbl_8317523C == 0)) {
    (**(int (***)())*puRam8322b1e0)(puRam8322b1e0,1);
    puRam8322b1e0 = (unsigned int *)0x0;
  }
  if ((*(int *)(param_1 + 0x80) == 0) || (iVar4 = fn_82BE5B70(), iVar4 != 0)) {
    iVar4 = fn_82BE72C0(lbl_8322B1D8);
    *(unsigned int *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x80) = iVar4;
    if (iVar4 != 0) {
      iVar4 = fn_82BE5A48();
      if (iVar4 == 0) {
        fn_82BE6638(*(unsigned int *)(param_1 + 0x80),7);
        *(unsigned int *)(param_1 + 0x80) = 0;
      }
      else {
        (**(int (***)())(**(int **)(param_1 + 0x8c) + 4))
                  (*(int **)(param_1 + 0x8c),*(unsigned int *)(param_1 + 0x80));
      }
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x9c);
  if (uVar1 == 0) {
    lVar2 = (*(__int64 *)(param_1 + 0x58) - *(__int64 *)(param_1 + 0x38)) +
            *(__int64 *)(param_1 + 0x40);
    *(__int64 *)(param_1 + 0x58) = lVar2;
    if (*(int *)(param_1 + 0x80) == 0) {
      return;
    }
    if (0 < lVar2) {
      return;
    }
    fn_82BE82F0(param_1);
    *(unsigned __int64 *)(param_1 + 0x50) = 0;
    return;
  }
  if (uVar1 == 1) {
    *(__int64 *)(param_1 + 0x50) =
         (*(__int64 *)(param_1 + 0x38) - *(__int64 *)(param_1 + 0x40)) +
         *(__int64 *)(param_1 + 0x50);
    iVar4 = fn_82BF2A50(param_1 + 0xa0);
    if (iVar4 == 0) {
      if (*(unsigned __int64 *)(param_1 + 0x50) < 0x7531) {
        return;
      }
      fn_82BE7F48(param_1);
      fn_82BE81A8(*(unsigned __int64 *)(param_1 + 0x38) & 0xffffffff);
      uVar6 = fn_82F65350();
      *(unsigned __int64 *)(param_1 + 0x58) = uVar6 + ((uVar6 & 0xffffffff) / 30000) * -30000 & 0xffffffff;
      return;
    }
    aiStack_40[0] = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x90) = aiStack_40[0];
    *(unsigned short *)(param_1 + 0x94) = *(unsigned short *)(param_1 + 0xbc);
    fn_82BEE7D0(2,aiStack_40,auStack_30,0x10);
LAB_82be8900:
    *(unsigned int *)(param_1 + 0x9c) = 3;
  }
  else {
    if (2 < uVar1) {
      if (uVar1 == 3) {
        if (*(int *)(param_1 + 0x80) == 0) {
          return;
        }
        *(unsigned __int64 *)(param_1 + 0x48) = 0;
        (**(int (***)())(**(int **)(param_1 + 0x8c) + 8))();
        fn_82BE7F48(param_1);
        fn_82BE80F8(param_1,*(unsigned int *)(*(int *)(param_1 + 0x80) + 0x1c),
                      *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x24));
        iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 0x14);
        if (iVar4 == 0x54) {
          return;
        }
        if (iVar4 == 0x1011) {
          return;
        }
        *(unsigned __int64 *)(param_1 + 0x60) = 0;
        return;
      }
      if (4 < uVar1) {
        return;
      }
      if (*(int *)(param_1 + 0x80) == 0) {
        return;
      }
      *(unsigned __int64 *)(param_1 + 0x48) = 0;
      fn_82BE7F48(param_1);
      fn_82BE81A8(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar6 = (*(__int64 *)(param_1 + 0x48) - *(__int64 *)(param_1 + 0x40)) +
              *(__int64 *)(param_1 + 0x38);
      *(unsigned __int64 *)(param_1 + 0x48) = uVar6;
      if (uVar6 < 0x1d4c1) {
        return;
      }
    }
    else {
      uVar3 = fn_82BE5B38();
      iVar4 = fn_82BE7908(uVar3,aiStack_40);
      if (iVar4 == 0) {
        return;
      }
      if (((*(int *)(param_1 + 0x90) == aiStack_40[0]) &&
          (sVar5 = fn_82BE79F0(*(unsigned int *)(param_1 + 0x80)),
          *(short *)(param_1 + 0x94) == sVar5)) &&
         (((*(unsigned int *)(*(int *)(param_1 + 0x80) + 0x14) & 0xf000) != 0x1000 ||
          (*(int *)(param_1 + 0xc0) != 0)))) goto LAB_82be8900;
    }
    fn_82BE7F48(param_1);
  }
  return;
}
