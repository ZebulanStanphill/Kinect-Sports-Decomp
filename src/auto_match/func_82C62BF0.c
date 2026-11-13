extern int fn_82C5E0F8();
extern int fn_82C5E340(int);
extern int fn_82C5F9C8();
extern int fn_82CA85C8();
extern int fn_82CA9338();


void fn_82C62BF0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x3a28) != *(int *)(param_1 + 0x3a2c)) {
    if ((*(int *)(param_1 + 0x39f4) != 0) && (*(int *)(param_1 + 0x3a2c) == 0)) {
      fn_82C5E340(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x120);
    if ((iVar1 == 0) || (iVar1 == 4)) {
      *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc);
      *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
    }
    if (((*(int *)(param_1 + 0x39f4) != 0) || (iVar1 == 1)) || (iVar1 == 2)) {
      iVar1 = *(int *)(param_1 + 0x3a2c) * 0x54 + param_1;
      uVar2 = (unsigned int)*(unsigned int *)(iVar1 + 0x3a74);
      uVar3 = (unsigned int)*(unsigned int *)(iVar1 + 0x3a78);
      if (*(int *)(param_1 + 0x3a28) > *(int *)(param_1 + 0x3a2c)) {
        if (*(int *)(param_1 + 0x98) == 0) {
          (*(int (**)())(param_1 + 0x3e30))
                    (0,*(unsigned int *)(param_1 + 0xecc),0,*(unsigned int *)(iVar1 + 0x3a38),uVar2,1,1,
                     *(unsigned int *)(iVar1 + 0x3a30),*(unsigned *)(iVar1+0x3a48),*(unsigned *)(iVar1+0x3a64),*(int *)(param_1+0x50c8)==0);
          (*(int (**)())(param_1 + 0x3e2c))
                    (0,*(unsigned int *)(param_1 + 0xed0),*(unsigned int *)(param_1 + 0xed4),0,
                     *(unsigned int *)(*(int *)(param_1 + 0x3a2c) * 0x54 + param_1 + 0x3a3c),uVar3,1,1,*(unsigned *)(*(int *)(param_1+0x3a2c)*0x54+param_1+0x3a34),*(unsigned *)(*(int *)(param_1+0x3a2c)*0x54+param_1+0x3a4c),*(unsigned *)((*(int *)(param_1+0x3a2c)+0xb2)*0x54+param_1),*(int *)(param_1+0x50c8)==0);
        }
        fn_82CA85C8(param_1,*(unsigned int *)(param_1 + 0xecc) + uVar2,
                          *(unsigned int *)(param_1 + 0xed0) + uVar3,*(unsigned int *)(param_1 + 0xed4) + uVar3,
                          (unsigned int)*(unsigned int *)(param_1 + 0xec0) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xdc),
                          (unsigned int)*(unsigned int *)(param_1 + 0xec4) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xe0),
                          (unsigned int)*(unsigned int *)(param_1 + 0xec8) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xe0));
      }
      else {
        fn_82CA9338(param_1,*(unsigned int *)(param_1 + 0xecc) + uVar2,
                          *(unsigned int *)(param_1 + 0xed0) + uVar3,*(unsigned int *)(param_1 + 0xed4) + uVar3,
                          (unsigned int)*(unsigned int *)(param_1 + 0xec0) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xdc),
                          (unsigned int)*(unsigned int *)(param_1 + 0xec4) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xe0),
                          (unsigned int)*(unsigned int *)(param_1 + 0xec8) +
                          (unsigned int)*(unsigned int *)(param_1 + 0xe0));
      }
      fn_82C5F9C8(param_1,0);
      (*(int (**)())(param_1 + 0x3e30))
                (0,*(unsigned int *)(param_1 + 0xecc),0,*(unsigned int *)(param_1 + 0xac),
                 *(unsigned int *)(param_1 + 0xdc),1,1,*(unsigned int *)(param_1 + 0xa4),*(unsigned *)(param_1+0xb8),*(unsigned *)(param_1+0xcc),*(int *)(param_1+0x50c8)==0);
      (*(int (**)())(param_1 + 0x3e2c))
                (0,*(unsigned int *)(param_1 + 0xed0),*(unsigned int *)(param_1 + 0xed4),0,
                 *(unsigned int *)(param_1 + 0xb0),*(unsigned int *)(param_1 + 0xe0),1,1,*(unsigned *)(param_1+0xa8),*(unsigned *)(param_1+0xc4),*(unsigned *)(param_1+0xd0),*(int *)(param_1+0x50c8)==0);
      if ((*(int *)(param_1 + 0x3d0c) == 0) && (*(int *)(param_1 + 0x3a2c) == 0)) {
        fn_82C5E0F8(param_1);
        *(unsigned int *)(param_1 + 0x3d0c) = 1;
      }
    }
  }
  *(unsigned int *)(param_1 + 0x3a2c) = *(unsigned int *)(param_1 + 0x3a28);
  return;
}

