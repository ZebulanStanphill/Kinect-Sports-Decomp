typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int uStack00000014;


void fn_8288C798(unsigned __int64 param_1,unsigned __int64 param_2,char *param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int *puStack00000010;
  unsigned int uStack00000014;
  unsigned int *puStack00000018;
  
  puStack00000018 = (unsigned int *)(param_2 >> 0x20);
  uStack00000014 = (unsigned int)param_1;
  puStack00000010 = (unsigned int *)((unsigned __int64)param_1 >> 0x20);
  while( true ) {
    if ((puStack00000010 != puStack00000018) ||
       (bVar2 = true, (unsigned __int64)uStack00000014 != (param_2 & 0xffffffff))) {
      bVar2 = false;
    }
    if (bVar2) break;
    uVar1 = 1 << (uStack00000014 & 0x3f);
    uVar3 = uVar1 | *puStack00000010;
    if (*param_3 == '\0') {
      uVar3 = *puStack00000010 & ~uVar1;
    }
    *puStack00000010 = uVar3;
    if (uStack00000014 < 0x1f) {
      uStack00000014 = uStack00000014 + 1;
    }
    else {
      uStack00000014 = 0;
      puStack00000010 = puStack00000010 + 1;
    }
  }
  return;
}

