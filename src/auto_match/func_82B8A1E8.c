extern int fn_82B46EA8();
extern int fn_82B84FB0();
extern int fn_82B86570();


void fn_82B8A1E8(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  if (*(int *)(param_1 + 0x288) == 0) {
    puVar3 = (unsigned int *)fn_82B84FB0(param_1,1,3,0xffffffff820dbf20);
    uVar4 = puVar3[1];
    uVar2 = *puVar3;
    puVar3[1] = uVar4 & 0xffffff8f | 0x20;
    *puVar3 = uVar2 | 0x80000;
    uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x38) + 0x40);
    puVar3[1] = uVar4 & 0xfe00ff8f | 0x10020;
    *puVar3 = (uVar1 & 0x1ff) << 0x14 | uVar2 & 0xe00fffff | 0x80000;
    *(unsigned int *)puVar3[7] = *(unsigned int *)puVar3[7] & 0xfffffff0 | 1;
    *(unsigned int *)(puVar3[7] + 8) = *(unsigned int *)(puVar3[7] + 8) & 0xfffffff0 | 2;
    *(unsigned int *)(puVar3[7] + 0x10) = *(unsigned int *)(puVar3[7] + 0x10) & 0xfffffff0 | 4;
    uVar4 = fn_82B46EA8(param_1,10,1,3);
    puVar3[5] = uVar4;
    *(int *)(param_1 + 0x288) = ((int)puVar3 - *(int *)(param_1 + 0xc)) / 0x28;
  }
  fn_82B86570(param_1,*(unsigned int *)(param_1 + 0x288),0,1);
  return;
}

