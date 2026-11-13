extern unsigned int *auStack_70;
extern int fn_82AB15D0();
extern int fn_82B6F2A0();


void fn_82B6FA30(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned short *param_4,unsigned int param_5,int *param_6
                  )

{
  int iVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int auStack_70 [28];
  
  uVar5 = *param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2a40);
  if (param_3 != (unsigned int *)0x0) {
    auStack_70[0] = *param_3;
  }
  uVar7 = auStack_70[0];
  switch(uVar5 >> 0x10 & 0x3f) {
  case 0:
  case 1:
  case 2:
    uVar5 = *(unsigned int *)(iVar1 + 8);
    uVar2 = 0 << (param_5 & 0x3f) & 7;
    *(unsigned int *)(iVar1 + 8) = uVar2 | uVar5;
    *(unsigned int *)(iVar1 + 8) =
         uVar2 | uVar5 & 0xff |
         ((unsigned int)(unsigned short)*param_2 << ((param_5 & 7) << 3)) << 8 | uVar5 & 0xffffff00;
    break;
  case 3:
  case 0xd:
  case 0xe:
  case 0x15:
  case 0x17:
  case 0x18:
    uVar6 = 0x883;
    goto LAB_82b6fb84;
  case 7:
  case 9:
    auStack_70[0] = auStack_70[0] & 0xffff8888;
  case 4:
  case 5:
  case 6:
  case 8:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    uVar7 = 1 << (param_5 & 0x3f) & 7U | *(unsigned int *)(iVar1 + 8);
    goto LAB_82b6faf4;
  case 10:
    uVar7 = 1 << (param_5 & 0x3f) & 7U | *(unsigned int *)(iVar1 + 8);
    auStack_70[0] = auStack_70[0] & 0xffff9999 | 0x1111;
LAB_82b6faf4:
    *(unsigned int *)(iVar1 + 8) =
         uVar7 & 0xff |
         (*(int *)(((uVar5 >> 10 & 0xfc0) + (uVar5 & 0xffff) + 0x1068) * 4 +
                  *(int *)(param_1 + 0x1c)) << ((param_5 & 7) << 3)) << 8 | uVar7 & 0xffffff00;
    uVar7 = auStack_70[0];
    break;
  case 0x14:
  case 0x16:
    uVar6 = 0x847;
LAB_82b6fb84:
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,uVar6);
  }
  if ((*param_2 & 0x400000) == 0) {
    uVar5 = *(unsigned int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) =
         uVar5 & 0x1f | (0 << ((param_5 & 7) << 3)) << 8 | uVar5 & 0xffffff00 |
         ((0 << (param_5 & 0x3f)) << 5 | uVar5 & 0xff) & 0xe0;
  }
  else {
    if (((((uVar7 & 7) == 4) || (uVar5 = uVar7 >> 4 & 7, uVar5 == 4)) ||
        (uVar2 = uVar7 >> 8 & 7, uVar2 == 4)) ||
       (((uVar4 = uVar7 >> 0xc & 7, uVar4 == 4 || ((uVar7 & 7) == 5)) ||
        ((uVar5 == 5 || ((uVar2 == 5 || (uVar4 == 5)))))))) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x894);
    }
    else {
      uVar5 = fn_82B6F2A0(auStack_70);
      *(unsigned int *)(iVar1 + 4) =
           *(unsigned int *)(iVar1 + 4) & 0xff |
           ((uVar5 & 0xff) << ((param_5 & 7) << 3)) << 8 | *(unsigned int *)(iVar1 + 4) & 0xffffff00;
    }
    uVar5 = uVar7 >> 3 & 1;
    if (uVar5 != (uVar7 >> 7 & 1)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da890,0xffffffff820da3b8,0x89b);
    }
    if (uVar5 != (uVar7 >> 0xb & 1)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da848,0xffffffff820da3b8,0x89c);
    }
    if (uVar5 != (uVar7 >> 0xf & 1)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da800,0xffffffff820da3b8,0x89d);
    }
    *(unsigned int *)(iVar1 + 4) =
         *(unsigned int *)(iVar1 + 4) & 0xffffff1f |
         ((uVar5 << (param_5 & 0x3f)) << 5 | *(unsigned int *)(iVar1 + 4)) & 0xe0;
    if ((*param_2 & 0x3f0000) != 0x10000) {
      *(unsigned int *)(iVar1 + 8) =
           *(unsigned int *)(iVar1 + 8) & 0xff |
           ((uVar7 >> 0xd & 0x80) << ((param_5 & 7) << 3)) << 8 | *(unsigned int *)(iVar1 + 8) & 0xffffff00;
    }
  }
  if ((*param_2 & 0x1000000) != 0) {
    if ((*(unsigned int *)(iVar1 + 4) & 1) != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da7e0,0xffffffff820da3b8,0x8b2);
    }
    if ((*(unsigned int *)(iVar1 + 4) & 2) != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da7c4,0xffffffff820da3b8,0x8b3);
    }
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar1 + 4) & 0xfffffff8 | 4;
    *param_6 = 1;
  }
  if ((*param_2 & 0x800000) == 0) {
    return;
  }
  if (*param_6 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da7a8,0xffffffff820da3b8,0x8c6);
  }
  uVar3 = *(unsigned short *)param_2 & 0x3f;
  if (((uVar3 != 1) && (uVar3 != 2)) && ((*(unsigned short *)param_2 & 0x3f) != 0)) {
    if ((*param_4 & 1) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da77c,0xffffffff820da3b8,0x8cd);
    }
    *(unsigned int *)(iVar1 + 8) =
         *(unsigned int *)(iVar1 + 8) & 0xff |
         (0x40 << ((param_5 & 7) << 3)) << 8 | *(unsigned int *)(iVar1 + 8) & 0xffffff00;
    return;
  }
  if ((*param_4 & 1) == 0) {
    uVar5 = *(unsigned int *)(iVar1 + 4) | 4;
  }
  else {
    uVar5 = *(unsigned int *)(iVar1 + 4) & 0xfffffffb;
  }
  *(unsigned int *)(iVar1 + 4) = uVar5;
  if (param_5 == 0) {
    if ((*(unsigned int *)(iVar1 + 8) & 4) != 0) {
      uVar5 = *(unsigned int *)(iVar1 + 8) & 2;
      goto joined_r0x82b6febc;
    }
LAB_82b6fe98:
    uVar5 = *(unsigned int *)(iVar1 + 4) | 2;
  }
  else {
    if (param_5 == 1) {
      uVar5 = *(unsigned int *)(iVar1 + 8) & 4;
joined_r0x82b6febc:
      if (uVar5 == 0) goto LAB_82b6fe98;
    }
    else if (2 < param_5) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x8fe);
    }
    uVar5 = *(unsigned int *)(iVar1 + 4) | 1;
  }
  *(unsigned int *)(iVar1 + 4) = uVar5;
  return;
}

