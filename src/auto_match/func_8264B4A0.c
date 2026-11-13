extern int fn_82644040();
extern int fn_8264D6C0();


void fn_8264B4A0(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  
  puVar1 = *(unsigned int **)(param_1 + 0x35a4);
  uVar2 = fn_82644040(param_1,0x1f6,0x80);
  puVar5 = (unsigned int *)uVar2;
  if ((*(unsigned char *)(param_1 + 0x2abd) & 0x20) == 0) {
    *(unsigned int **)(param_1 + 0x35a4) = puVar5;
    *puVar5 = 0;
    lVar6 = (((uVar2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
    lVar3 = lVar6 + -0x40000000;
    uVar4 = (unsigned int)lVar3;
    if (puVar1 == (unsigned int *)0x0) {
      *(unsigned int *)(*(int *)(param_1 + 0x35a0) + 0x70) = uVar4;
    }
    else {
      *puVar1 = uVar4;
      puVar1[1] = (*(int *)(param_1 + 0x35a8) - (int)puVar1) + -8 >> 3;
    }
    fn_8264D6C0(lVar3,lVar6 + -0x3ffff828,0);
  }
  else {
    puVar5 = *(unsigned int **)(param_1 + 0x4230);
  }
  *(unsigned int **)(param_1 + 0x35a8) = puVar5 + 2;
  *(unsigned int **)(param_1 + 0x35ac) = puVar5 + 0x1f6;
  return;
}

