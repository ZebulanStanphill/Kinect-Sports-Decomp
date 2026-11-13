extern int fn_82BA02A8();
extern int fn_82E854B8();
extern int fn_82ED9BB0();
extern int fn_82F07788();
extern int fn_82F0E340();
extern int fn_82F0EB98();
extern int fn_82F0EC20();
extern int fn_82F0EFB8();
extern int fn_82F0F218();
extern int fn_82F0F4E8();
extern int fn_82F0F590();
extern int fn_82F0F630();
extern int fn_82F0F6C0();
extern int fn_82F15360();
extern int fn_82F42078();
extern int fn_82F42108();
extern int fn_82F42300();
extern int fn_82F447B0();


void fn_82F0F9A0(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  *(unsigned int *)(param_1 + 0x1ec4) = param_2;
  *(int (***)())(param_1 + 0x1ff8) = fn_82ED9BB0;
  if (*(int *)(param_1 + 0x658) == 1) {
    switch(param_2) {
    case 1:
      if ((*(int *)(param_1 + 0xaf0) != 0) && (*(int *)(param_1 + 0xaf0) != 4)) {
        *(unsigned int *)(param_1 + 0x6f10) = *(unsigned int *)(param_1 + 0x6f0c);
        fn_82F15360(*(unsigned int *)(param_1 + 0x1c18),*(unsigned int *)(param_1 + 0x588),0);
        if ((*(int *)(param_1 + 0x89c) == 2) || (uVar2 = 0, *(int *)(param_1 + 0x89c) == 3)) {
          uVar2 = 1;
        }
        *(unsigned int *)(param_1 + 0xa00) = uVar2;
        *(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24) = uVar2;
      }
      if (((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) &&
         ((*(unsigned int *)(param_1 + 0x924) & 1) != 0)) {
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x2d8) << 2) {
          iVar1 = 0;
          do {
            iVar3 = iVar3 + 1;
            *(unsigned short *)(iVar1 + *(int *)(param_1 + 0x9f0)) = 0x4000;
            iVar1 = iVar1 + 2;
          } while (iVar3 < *(int *)(param_1 + 0x2d8) << 2);
        }
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x2d8)) {
          iVar1 = 0;
          do {
            iVar3 = iVar3 + 1;
            *(unsigned short *)(iVar1 + *(int *)(param_1 + 0x9f8)) = 0x4000;
            iVar1 = iVar1 + 2;
          } while (iVar3 < *(int *)(param_1 + 0x2d8));
        }
      }
      fn_82F0E340(param_1,param_1 + 0xb20);
      *(unsigned int *)(param_1 + 0x4c10) = *(unsigned int *)(param_1 + 0xdbc);
      break;
    case 6:
      if (*(int *)(param_1 + 0x6d54) == 0) {
        fn_82F447B0(param_1,*(unsigned int *)(param_1 + 0xc30),*(unsigned int *)(param_1 + 0xc34));
      }
      else if (*(int *)(param_1 + 0x7b38) == 0) {
        fn_82F42108(param_1);
      }
      else {
        fn_82F42300();
      }
      break;
    case 7:
      fn_82F42078(param_1,*(unsigned int *)(param_1 + 0xc30),*(unsigned int *)(param_1 + 0xc34));
      break;
    case 8:
      if (*(int *)(param_1 + 0xb24) == 0) {
        fn_82F07788(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 4 & 0x3fffffff) << 2);
      }
      break;
    case 9:
      fn_82F0F590(param_1,param_1 + 0xb20);
      *(unsigned int *)(param_1 + 0x4c00) = *(unsigned int *)(param_1 + 0xdb8);
      break;
    case 10:
      fn_82F0F590(param_1,param_1 + 0xb20);
      *(unsigned int *)(param_1 + 0x4c00) = *(unsigned int *)(param_1 + 0xdb8);
      break;
    case 0xb:
      *(unsigned __int64 *)(param_1 + 0x5210) = *(unsigned __int64 *)(param_1 + 0xb90);
      *(unsigned __int64 *)(param_1 + 0x5218) = *(unsigned __int64 *)(param_1 + 0xb98);
      *(unsigned int *)(param_1 + 0x4c00) = *(unsigned int *)(param_1 + 0xdb8);
      break;
    case 0xd:
      fn_82F0EB98(param_1,param_1 + 0xb20);
      break;
    case 0xe:
      fn_82F0EC20(param_1,param_1 + 0xb20);
      break;
    case 0xf:
      fn_82F0EFB8(param_1,param_1 + 0xb20);
      break;
    case 0x10:
      fn_82F0F218(param_1,param_1 + 0xb20);
      break;
    case 0x11:
      fn_82F0F4E8(param_1,param_1 + 0xb20);
      break;
    case 0x12:
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                   *(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                   *(unsigned int *)(param_1 + 0x4a9c),*(unsigned int *)(param_1 + 0x1e54));
      break;
    case 0x13:
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                   *(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                   *(unsigned int *)(param_1 + 0x4a9c),*(unsigned int *)(param_1 + 0x1e54));
      break;
    case 0x14:
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                   *(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                   *(unsigned int *)(param_1 + 0x4a9c),*(unsigned int *)(param_1 + 0x1e54));
      break;
    case 0x15:
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0xc28),*(unsigned int *)(param_1 + 0xc2c),
                   *(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                   *(unsigned int *)(param_1 + 0x4a9c),*(unsigned int *)(param_1 + 0x1e54));
      break;
    case 0x16:
      fn_82F0F630(param_1,param_1 + 0xb20);
      break;
    case 0x17:
      fn_82F0F6C0(param_1,param_1 + 0xb20);
    }
  }
  if (((*(int *)(param_1 + 0x1ec4) == 0x17) && (*(int *)(param_1 + 0x6d54) != 0)) &&
     (*(int *)(param_1 + 0x7b38) == 0)) {
    fn_82E854B8(param_1,0);
  }
  return;
}

