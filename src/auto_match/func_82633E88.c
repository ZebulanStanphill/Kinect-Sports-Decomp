typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82633E88(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  uVar1 = *param_1;
  uVar6 = 0;
  uVar4 = uVar1 >> 0xc & 7;
  puVar7 = (unsigned int *)((uVar1 & 0xfff) * 0xc + param_2);
  if (uVar4 == 0) {
    return 1;
  }
  uVar5 = 0;
  do {
    if ((1 << (uVar5 & 0x3f) & uVar1 >> 0x10 & 0xfff) == 0) {
      if (((*(unsigned char *)(puVar7 + 2) & 0x1f) < 0x14) ||
         (bVar3 = true, 0x17 < (*(unsigned char *)(puVar7 + 2) & 0x1f))) {
        bVar3 = false;
      }
      if ((*puVar7 >> 0x1a < 0x1b) || (bVar2 = true, 0x22 < *puVar7 >> 0x1a)) {
        bVar2 = false;
      }
      if ((bVar3) || (bVar2)) {
        return 0;
      }
    }
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 2;
    puVar7 = puVar7 + 3;
    if (uVar4 <= uVar6) {
      return 1;
    }
  } while( true );
}

