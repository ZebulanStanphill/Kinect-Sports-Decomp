void fn_82F11418(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  *(unsigned int *)(param_1 + 0x6e48) = *(unsigned int *)(param_1 + 0x548);
  uVar3 = (*(int *)(param_1 + 0x550) >> 1) + 0xf;
  *(unsigned int *)(param_1 + 0x6e4c) = *(unsigned int *)(param_1 + 0x554);
  uVar4 = uVar3 & 0xfffffff0;
  *(unsigned int *)(param_1 + 0x6e50) = *(unsigned int *)(param_1 + 0x550);
  uVar1 = *(int *)(param_1 + 800) >> 1;
  *(unsigned int *)(param_1 + 0x6e54) = *(unsigned int *)(param_1 + 0x55c);
  iVar2 = (int)uVar3 >> 4;
  *(unsigned int *)(param_1 + 0x6e58) = *(unsigned int *)(param_1 + 0x31c);
  *(unsigned int *)(param_1 + 0x6e5c) = *(unsigned int *)(param_1 + 800);
  *(unsigned int *)(param_1 + 0x6e60) = *(unsigned int *)(param_1 + 0x54c);
  *(unsigned int *)(param_1 + 0x6e64) = *(unsigned int *)(param_1 + 0x558);
  *(int *)(param_1 + 0x6e68) = *(int *)(param_1 + 0x548) * *(int *)(param_1 + 0x550);
  *(unsigned int *)(param_1 + 0x6e6c) = *(unsigned int *)(param_1 + 0x340);
  *(unsigned int *)(param_1 + 0x6e70) = *(unsigned int *)(param_1 + 0x2d0);
  *(unsigned int *)(param_1 + 0x6e74) = *(unsigned int *)(param_1 + 0x2d4);
  *(unsigned int *)(param_1 + 0x6e78) = *(unsigned int *)(param_1 + 0x2d8);
  *(unsigned int *)(param_1 + 0x6e7c) = *(unsigned int *)(param_1 + 0x2dc);
  *(unsigned int *)(param_1 + 0x6e80) = *(unsigned int *)(param_1 + 0x564);
  *(unsigned int *)(param_1 + 0x6e84) = *(unsigned int *)(param_1 + 0x568);
  *(unsigned int *)(param_1 + 0x6e88) = *(unsigned int *)(param_1 + 0x56c);
  *(unsigned int *)(param_1 + 0x6e8c) = *(unsigned int *)(param_1 + 0x570);
  *(unsigned int *)(param_1 + 0x6e90) = *(unsigned int *)(param_1 + 0x574);
  *(unsigned int *)(param_1 + 0x6e94) = *(unsigned int *)(param_1 + 0x578);
  *(unsigned int *)(param_1 + 0x6e98) = *(unsigned int *)(param_1 + 0x57c);
  *(unsigned int *)(param_1 + 0x6e9c) = *(unsigned int *)(param_1 + 0x580);
  *(unsigned int *)(param_1 + 0x6ea0) = *(unsigned int *)(param_1 + 0x548);
  *(unsigned int *)(param_1 + 0x6ea4) = *(unsigned int *)(param_1 + 0x554);
  *(unsigned int *)(param_1 + 0x6ea8) = uVar4;
  *(int *)(param_1 + 0x6eac) = (int)uVar4 >> 1;
  *(unsigned int *)(param_1 + 0x6eb0) = *(unsigned int *)(param_1 + 0x31c);
  *(unsigned int *)(param_1 + 0x6eb4) = uVar1;
  *(unsigned int *)(param_1 + 0x6eb8) = *(unsigned int *)(param_1 + 0x54c);
  *(unsigned int *)(param_1 + 0x6ebc) = *(unsigned int *)(param_1 + 0x558);
  *(unsigned int *)(param_1 + 0x6ec0) = *(int *)(param_1 + 0x548) * uVar4;
  if ((*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0x31c)) || (uVar5 = 1, uVar4 != uVar1)) {
    uVar5 = 0;
  }
  *(unsigned int *)(param_1 + 0x6ec4) = uVar5;
  *(unsigned int *)(param_1 + 0x6ec8) = *(unsigned int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x6ecc) = iVar2;
  *(int *)(param_1 + 0x6ed0) = iVar2 * *(int *)(param_1 + 0x2d0);
  *(unsigned int *)(param_1 + 0x6ed4) = *(unsigned int *)(param_1 + 0x2dc);
  *(int *)(param_1 + 0x6ed8) = *(int *)(param_1 + 0x564) << 1;
  *(int *)(param_1 + 0x6ee4) = ((int)uVar4 >> 1) + 0x20;
  *(int *)(param_1 + 0x6edc) = *(int *)(param_1 + 0x568) << 1;
  *(unsigned int *)(param_1 + 0x6ee0) = uVar4 + 0x40;
  *(unsigned int *)(param_1 + 0x6ee8) = *(unsigned int *)(param_1 + 0x574);
  *(unsigned int *)(param_1 + 0x6eec) = *(unsigned int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x6ef0) = *(int *)(param_1 + 0x57c) << 1;
  *(int *)(param_1 + 0x6ef4) = *(int *)(param_1 + 0x580) << 1;
  return;
}

