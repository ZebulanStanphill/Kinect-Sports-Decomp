extern int fn_82CFF8D0();
extern int fn_82CFF928();


void fn_82D83008(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  param_2[2] = *(int *)(param_1 + 0x78);
  if ((*(unsigned int *)(param_1 + 0x30) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_1 + 0x30) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141338,*(unsigned int *)(param_1 + 0x28),
               *(int *)(param_1 + 0x2c) << 2,uVar3);
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - 1;
  if (-1 < (__int64)uVar6) {
    lVar4 = (uVar6 & 0x3fffffff) << 2;
    do {
      (**(int (***)())(*param_2 + 0xc))
                (param_2,0xffffffff82141330,*(unsigned int *)(*(int *)(param_1 + 0x28) + (int)lVar4),0
                );
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar6);
  }
  if ((*(unsigned int *)(param_1 + 0x3c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x3c) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141320,*(unsigned int *)(param_1 + 0x34),
               *(int *)(param_1 + 0x38) << 2,uVar3);
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) - 1;
  if (-1 < (__int64)uVar6) {
    lVar4 = (uVar6 & 0x3fffffff) << 2;
    do {
      (**(int (***)())(*param_2 + 0xc))
                (param_2,0xffffffff82141314,*(unsigned int *)(*(int *)(param_1 + 0x34) + (int)lVar4),0
                );
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar6);
  }
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff8214130c,*(unsigned int *)(param_1 + 0x20),0);
  if ((*(unsigned int *)(param_1 + 0x11c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x114),*(unsigned int *)(param_1 + 0x11c) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141300,*(unsigned int *)(param_1 + 0x114),
               *(int *)(param_1 + 0x118) << 2,uVar3);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x118)) {
    iVar7 = 0;
    do {
      (**(int (***)())(*param_2 + 0xc))
                (param_2,0xffffffff821412f4,*(unsigned int *)(iVar7 + *(int *)(param_1 + 0x114)),0);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x118));
  }
  fn_82CFF928(param_2,0xffffffff8213d524,*(unsigned int *)(param_1 + 0xb8),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d4f8,*(unsigned int *)(param_1 + 0xc0),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d4e4,*(unsigned int *)(param_1 + 0xc4),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d6d4,*(unsigned int *)(param_1 + 0x74),0x100,0);
  for (iVar5 = *(int *)(param_1 + 0xa0); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
    fn_82CFF928(param_2,0xffffffff8213d5ac,*(unsigned int *)(param_1 + 0xa0),0x10,0);
    puVar1 = (unsigned int *)**(int **)(param_1 + 0xa0);
    if ((puVar1 != (unsigned int *)0x0) && (uVar2 = puVar1[2], (uVar2 & 0x80000000) == 0)) {
      uVar3 = fn_82CFF8D0(*puVar1,(((unsigned __int64)uVar2 & 0x3fffffff) +
                                         ((unsigned __int64)uVar2 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
      (**(int (***)())(*param_2 + 0x14))
                (param_2,3,0xffffffff821412d8,*puVar1,
                 ((unsigned __int64)(unsigned int)puVar1[1] + ((unsigned __int64)(unsigned int)puVar1[1] & 0x3fffffff) * 4 &
                 0x3fffffff) << 2,uVar3);
    }
  }
  (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff82011028);
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff821412cc,*(unsigned int *)(param_1 + 8),0);
  if ((*(unsigned int *)(param_1 + 0x48) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x40),*(unsigned int *)(param_1 + 0x48) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821412c0,*(unsigned int *)(param_1 + 0x40),
               *(int *)(param_1 + 0x44) << 2,uVar3);
  }
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff821412b4,*(unsigned int *)(param_1 + 0x4c),0);
  fn_82CFF928(param_2,0xffffffff821412ac,*(unsigned int *)(param_1 + 0x88),0x28,0);
  (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff821412ac);
  iVar5 = *(int *)(param_1 + 0x88);
  uVar2 = *(unsigned int *)(iVar5 + 0x18);
  if ((uVar2 & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(iVar5 + 0x10),
                              (((unsigned __int64)uVar2 & 0x3fffffff) + ((unsigned __int64)uVar2 & 0x3fffffff) * 4
                              & 0x3fffffff) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8214129c,*(unsigned int *)(iVar5 + 0x10),
               ((unsigned __int64)*(unsigned int *)(iVar5 + 0x14) +
                ((unsigned __int64)*(unsigned int *)(iVar5 + 0x14) & 0x3fffffff) * 4 & 0x3fffffff) << 2,uVar3);
  }
  iVar5 = *(int *)(param_1 + 0x88);
  if ((*(unsigned int *)(iVar5 + 0x24) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(iVar5 + 0x1c),*(unsigned int *)(iVar5 + 0x24) << 4);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8214128c,*(unsigned int *)(iVar5 + 0x1c),
               *(int *)(iVar5 + 0x20) << 4,uVar3);
  }
  (**(int (***)())(*param_2 + 0x1c))(param_2);
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff8213d130,*(unsigned int *)(param_1 + 0x1bc),0);
  (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff8213322c);
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff821333bc,*(unsigned int *)(param_1 + 0x58),0);
  fn_82CFF928(param_2,0xffffffff82141280,*(unsigned int *)(param_1 + 100),0x10c,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(unsigned int *)(param_1 + 0x6c),0x10,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(unsigned int *)(param_1 + 0x68),0xc,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(unsigned int *)(param_1 + 0x70),0xc,0);
  fn_82CFF928(param_2,0xffffffff82141274,*(unsigned int *)(param_1 + 0x78),0x80,0);
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_82CFF928(param_2,0xffffffff8214125c,*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x70),
                      0x10,0);
  }
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82141254,*(unsigned int *)(param_1 + 0x7c),0);
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff8213d68c,*(unsigned int *)(param_1 + 0x84),0);
  (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82141248,*(unsigned int *)(param_1 + 0x80),0);
  (**(int (***)())(*param_2 + 0x1c))(param_2);
  (**(int (***)())(*param_2 + 0x1c))(param_2);
  (**(int (***)())(*param_2 + 0x18))(param_2,0xffffffff8214123c);
  if ((*(unsigned int *)(param_1 + 0x134) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 300),*(unsigned int *)(param_1 + 0x134) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141230,*(unsigned int *)(param_1 + 300),
               *(int *)(param_1 + 0x130) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x140) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x138),*(unsigned int *)(param_1 + 0x140) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141224,*(unsigned int *)(param_1 + 0x138),
               *(int *)(param_1 + 0x13c) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x14c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x144),*(unsigned int *)(param_1 + 0x14c) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141214,*(unsigned int *)(param_1 + 0x144),
               *(int *)(param_1 + 0x148) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x158) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x150),*(unsigned int *)(param_1 + 0x158) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82141204,*(unsigned int *)(param_1 + 0x150),
               *(int *)(param_1 + 0x154) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x164) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x15c),*(unsigned int *)(param_1 + 0x164) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411f4,*(unsigned int *)(param_1 + 0x15c),
               *(int *)(param_1 + 0x160) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x170) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x168),*(unsigned int *)(param_1 + 0x170) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411e4,*(unsigned int *)(param_1 + 0x168),
               *(int *)(param_1 + 0x16c) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x17c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x174),*(unsigned int *)(param_1 + 0x17c) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411d4,*(unsigned int *)(param_1 + 0x174),
               *(int *)(param_1 + 0x178) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x188) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x180),*(unsigned int *)(param_1 + 0x188) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411c4,*(unsigned int *)(param_1 + 0x180),
               *(int *)(param_1 + 0x184) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x194) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x18c),*(unsigned int *)(param_1 + 0x194) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411d4,*(unsigned int *)(param_1 + 0x18c),
               *(int *)(param_1 + 400) << 2,uVar3);
  }
  if ((*(unsigned int *)(param_1 + 0x1ac) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x1a4),*(unsigned int *)(param_1 + 0x1ac) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821411b8,*(unsigned int *)(param_1 + 0x1a4),
               *(int *)(param_1 + 0x1a8) << 2,uVar3);
  }
  (**(int (***)())(*param_2 + 0x1c))(param_2);
  param_2[2] = 0;
  return;
}

