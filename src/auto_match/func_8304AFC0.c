extern int fn_8304A158();
extern int fn_8304A3A8();
extern int fn_8304AA48();
extern int fn_8304AAD0();
extern int fn_8304AE78();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E188();
extern int fn_8307E6E0();
extern unsigned int lbl_82002AE0;
extern unsigned int *lbl_83265044;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


__int64 fn_8304AFC0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uStack_90;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char bStack_60;
  unsigned char uStack_5e;
  unsigned char uStack_5d;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char uStack_40;
  
  if (*(char *)(param_1 + 0x7d) == '\0') {
    *(unsigned char *)(param_1 + 0x7d) = 1;
    uStack_50 = lbl_82002AE0;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
    *(unsigned int *)(param_1 + 0x30) = 0;
    uStack_44 = 2;
    uStack_4c = 0;
    uStack_48 = 0;
    iVar4 = (int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_90 = ((((unsigned __int64)(uStack_90)) & (~(((unsigned __int64)0xFF) << 56))) | ((((unsigned __int64)((unsigned char)iVar4)) & ((unsigned __int64)0xFF)) << 56));
    uStack_70 = 0;
    uStack_6c = 3;
    puVar5 = (unsigned int *)(param_1 + 0x2c);
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_40 = (unsigned char)uStack_90;
    uStack_88 = 0;
    uStack_84 = 0x2000;
    uStack_80 = 0x1000;
    bStack_60 = (unsigned char)((unsigned int)*(unsigned int *)(iVar1 + 0x14) >> 0x1f);
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_90 = (__int64)iVar4;
    lVar3 = (**(int (***)())(*lbl_83265044 + 0x10))
                      (lbl_83265044,*(unsigned int *)(iVar1 + 8),&uStack_70,&uStack_50,&uStack_88,
                       puVar5,0);
    if ((int)lVar3 != 1) {
      return lVar3;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (((*(unsigned int *)(*(int *)(iVar4 + 0x6c) + 0x14) >> 0x1e & 1) != 0) &&
       ((*(unsigned char *)(iVar4 + 0xdb) & 0x80) == 0)) {
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x138);
      if ((uVar6 != 0) && (*(unsigned int *)(iVar4 + 0x13c) != 0)) {
        uVar2 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x13c) & 0xfffff800;
        lVar3 = fn_8304AAD0(param_1,uVar6,uVar2);
        if ((int)lVar3 != 1) {
          return lVar3;
        }
        iVar4 = (**(int (***)())(*(int *)*puVar5 + 0x28))((int *)*puVar5,uVar2,0,&uStack_90);
        if (iVar4 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0x30) = (int)uVar2 - (int)uStack_90;
        lVar3 = fn_8304A3A8(param_1);
        if ((int)lVar3 != 1) {
          return lVar3;
        }
        if (uVar2 == *(unsigned int *)(param_1 + 0x54)) {
          lVar3 = 0x3f;
        }
        else {
          lVar3 = fn_8304AA48(param_1,*(unsigned int *)(param_1 + 0x54) + uVar6);
        }
        (**(int (***)())(*(int *)*puVar5 + 0x1c))();
        return lVar3;
      }
    }
    (**(int (***)())(*(int *)*puVar5 + 0x1c))();
  }
  else if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      fn_8307DE78(*(unsigned int *)(param_1 + 0x28));
      fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
      fn_8304A158(param_1);
      fn_8307E060(*(unsigned int *)(param_1 + 0x28));
    }
    lVar3 = fn_8307E188(*(unsigned int *)(param_1 + 0x28),0);
    return ((-(unsigned __int64)(lVar3 != 0) & 0xfffffffe) << 0x20 | -(unsigned __int64)(lVar3 != 0) & 0xffffffc2)
           + 0x3f;
  }
  lVar3 = fn_8304AE78(param_1);
  return lVar3;
}

