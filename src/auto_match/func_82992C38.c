extern int fn_82975B00();


unsigned __int64 fn_82992C38(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar1 = 0xffff0200;
  *(unsigned int *)(param_1 + 0x38) = 0x20;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 200) + 0xfe00;
  *(unsigned int *)(param_1 + 0x10c) = *(unsigned int *)(param_1 + 200);
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x2c) = 0xc;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x20400010;
LAB_82992d4c:
    uVar3 = *(unsigned int *)(param_1 + 0x70) | 0x28000000;
  }
  else {
    if ((uVar2 & 0xffffffff) != 2) {
      if ((uVar2 & 0xffffffff) == 3) {
        uVar1 = 0xffff0201;
      }
      else if ((uVar2 & 0xffffffff) != 100) {
        if ((uVar2 & 0xffffffff) != 0xff) {
          fn_82975B00(param_1,0,0,0xffffffff8204fd18);
          return 0xffffffff80004005;
        }
        *(unsigned int *)(param_1 + 0x2c) = 0x20;
        *(unsigned int *)(param_1 + 0x60) = 0x800;
        *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) & 0xf9ffffff | 0x4000000;
        *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400001;
        goto LAB_82992d58;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x20;
      *(unsigned int *)(param_1 + 200) = uVar1;
      *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x20400010;
      goto LAB_82992d4c;
    }
    *(unsigned int *)(param_1 + 0x2c) = 0x16;
    uVar3 = *(unsigned int *)(param_1 + 0x70) & 0xb9ffffff | 0x44000000;
    *(unsigned int *)(param_1 + 200) = 0xffff0201;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400009;
  }
  *(unsigned int *)(param_1 + 0x70) = uVar3;
LAB_82992d58:
  *(unsigned int *)(param_1 + 0x28) = 2;
  *(unsigned int *)(param_1 + 0x44) = 10;
  *(unsigned int *)(param_1 + 100) = 1;
  *(unsigned int *)(param_1 + 0x48) = 4;
  *(unsigned int *)(param_1 + 0x4c) = 0x10;
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x42800200;
  *(unsigned int *)(param_1 + 0x1d4) = *(unsigned int *)(param_1 + 0x2c);
  return 0;
}

