extern int fn_82789508();


void fn_82789AA0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      puVar4 = (unsigned int *)(*(int *)((uVar3 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x68)) +
                       (uVar3 & 0xff) * 0xc);
      uVar1 = *puVar4;
      if (*(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (uVar1 & 0xff) * 0xc + 8)) {
        uVar2 = puVar4[1];
        puVar4[1] = uVar1;
        *puVar4 = uVar2;
      }
      if (*(int *)(*(int *)((puVar4[2] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[2] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8)) {
        uVar1 = puVar4[2];
        puVar4[2] = puVar4[1];
        puVar4[1] = uVar1;
      }
      uVar1 = *puVar4;
      if (*(int *)(*(int *)((puVar4[1] >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (puVar4[1] & 0xff) * 0xc + 8) <
          *(int *)(*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                   (uVar1 & 0xff) * 0xc + 8)) {
        uVar2 = puVar4[1];
        puVar4[1] = uVar1;
        *puVar4 = uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x5c));
  }
  fn_82789508((unsigned int *)(param_1 + 0x5c),0);
  return;
}

