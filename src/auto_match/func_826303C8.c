extern int fn_82637550();
extern int fn_82645110();
extern int fn_82F68CC0();
extern int iRam832823e8;
extern unsigned int iStack00000014;


void fn_826303C8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iStack00000014;
  
  if (iRam832823e8 == 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x30);
    iStack00000014 = param_1;
    if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar2 + 4) = 0xc0003b00;
    *(unsigned int *)(uVar2 + 8) = 0x300;
    *(unsigned int *)(uVar2 + 0xc) = 0xc0192b00;
    *(unsigned int *)(uVar2 + 0x10) = 0;
    *(unsigned int *)(uVar2 + 0x14) = 0x18;
    fn_82F68CC0(uVar2 + 0x18,0xffffffff8218da28,0x60);
    uVar2 = uVar2 + 0x74;
    *(unsigned int *)(param_1 + 0x30) = uVar2;
    if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar2 + 4) = 0xc00a2b00;
    *(unsigned int *)(uVar2 + 8) = 1;
    *(unsigned int *)(uVar2 + 0xc) = 9;
    fn_82F68CC0(uVar2 + 0x10,0xffffffff8218d8f4,0x24);
    uVar2 = uVar2 + 0x30;
    *(unsigned int *)(param_1 + 0x30) = uVar2;
    if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    iVar1 = iStack00000014;
    *(unsigned int *)(uVar2 + 4) = 0x12180;
    *(unsigned int *)(uVar2 + 8) = 0x10000001;
    *(unsigned int *)(uVar2 + 0xc) = 0;
    *(unsigned int *)(uVar2 + 0x10) = 0x22100;
    *(unsigned int *)(uVar2 + 0x14) = 0xffff;
    *(unsigned int *)(uVar2 + 0x18) = 0;
    *(unsigned int *)(uVar2 + 0x1c) = 0;
    *(unsigned int *)(uVar2 + 0x20) = 0x2293;
    *(unsigned int *)(uVar2 + 0x24) = 0;
    *(unsigned int *)(uVar2 + 0x28) = 0x22204;
    *(unsigned int *)(uVar2 + 0x2c) = 0x10000;
    *(unsigned int *)(uVar2 + 0x30) = 0x10000;
    *(unsigned int *)(uVar2 + 0x34) = 0x300;
    *(unsigned int *)(uVar2 + 0x38) = 0x2312;
    *(unsigned int *)(uVar2 + 0x3c) = 0xffff;
    *(unsigned int *)(uVar2 + 0x40) = 0x200d;
    *(unsigned int *)(uVar2 + 0x44) = 0;
    *(unsigned int *)(uVar2 + 0x48) = 0x2200;
    *(unsigned int *)(uVar2 + 0x4c) = 0;
    *(unsigned int *)(uVar2 + 0x50) = 0x2203;
    *(unsigned int *)(uVar2 + 0x54) = 0;
    *(unsigned int *)(uVar2 + 0x58) = 0x2208;
    *(unsigned int *)(uVar2 + 0x5c) = 4;
    *(unsigned int *)(uVar2 + 0x60) = 0x2104;
    *(unsigned int *)(uVar2 + 100) = 0;
    *(unsigned int *)(uVar2 + 0x68) = 0x2280;
    *(unsigned int *)(uVar2 + 0x6c) = 0x80008;
    *(unsigned int *)(uVar2 + 0x70) = 0x2302;
    *(unsigned int *)(uVar2 + 0x74) = 4;
    *(unsigned int *)(uVar2 + 0x78) = 0x22080;
    *(unsigned int *)(uVar2 + 0x7c) = 0;
    *(unsigned int *)(uVar2 + 0x80) = 0;
    puVar3 = (unsigned int *)(uVar2 + 0x84);
    *puVar3 = 0x100010;
    *(unsigned int **)(iStack00000014 + 0x30) = puVar3;
    if (*(unsigned int **)(iStack00000014 + 0x38) < puVar3) {
      puVar3 = (unsigned int *)fn_82645110(iStack00000014);
    }
    puVar3[1] = 0xc0003600;
    puVar3[2] = 0x2000081;
    *(unsigned int **)(iVar1 + 0x30) = puVar3 + 2;
    uVar4 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x20000000000;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x30000000000;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x38000000000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x800000000;
    uVar4 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x80;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0xc0;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0xe0;
    *(unsigned __int64 *)(iVar1 + 0x20) = *(unsigned __int64 *)(iVar1 + 0x20) | 0x80000;
    uVar4 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000000000;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000080000;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000180000;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000180800;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000180900;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x100000180908;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x102000180908;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000000000;
    *(unsigned __int64 *)(iVar1 + 0x20) = *(unsigned __int64 *)(iVar1 + 0x20) | 0x800000000;
    uVar2 = *(unsigned int *)(iVar1 + 0x28c4);
    fn_82637550(iVar1,(int)(uVar2 << 0x11 | uVar2 >> 0xf) >> 0x11,(int)(uVar2 << 1) >> 0x11,
                      (*(int *)(iVar1 + 0x28c8) << 0x11) >> 0x11,
                      (*(int *)(iVar1 + 0x28c8) << 1) >> 0x11);
  }
  return;
}

