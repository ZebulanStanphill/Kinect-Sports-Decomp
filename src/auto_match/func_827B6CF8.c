#define true 1
extern int fn_82773B90();


void fn_827B6CF8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar6 = ((unsigned int)(unsigned char)(*(unsigned char *)((int)param_2 + 0xb) ^ *(unsigned char *)((int)param_2 + 10) ^
                          *(unsigned char *)(param_2 + 2) ^ *(unsigned char *)((int)param_2 + 7) ^
                         *(unsigned char *)((int)param_2 + 6)) ^ (unsigned int)*(unsigned short *)(param_2 + 1) ^
             *param_2 >> 6 ^ (unsigned int)*(unsigned char *)((int)param_2 + 9) << 1 ^ *param_2) &
            *(unsigned int *)(iVar4 + 4);
    iVar3 = uVar6 * 0x18 + iVar4;
    if ((*(int *)(iVar3 + 8) != -2) && (*(unsigned int *)(iVar3 + 0xc) == uVar6)) {
      uVar1 = uVar6;
      uVar5 = 0xffffffff;
      while( true ) {
        uVar7 = uVar1;
        puVar8 = (unsigned int *)(iVar3 + 8);
        if (*(unsigned int *)(iVar3 + 0xc) == uVar6) {
          cVar2 = fn_82773B90((unsigned int *)(iVar3 + 0x10),param_2);
          if (cVar2 != '\0') {
            if (uVar6 == uVar7) {
              uVar6 = *puVar8;
              if (uVar6 != 0xffffffff) {
                *puVar8 = 0xfffffffe;
                iVar4 = uVar6 * 0x18 + iVar4;
                *puVar8 = *(unsigned int *)(iVar4 + 8);
                *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar4 + 0xc);
                *(unsigned int *)(iVar3 + 0x10) = *(unsigned int *)(iVar4 + 0x10);
                *(unsigned int *)(iVar3 + 0x14) = *(unsigned int *)(iVar4 + 0x14);
                *(unsigned int *)(iVar3 + 0x18) = *(unsigned int *)(iVar4 + 0x18);
                *(unsigned int *)(iVar3 + 0x1c) = *(unsigned int *)(iVar4 + 0x1c);
                puVar8 = (unsigned int *)(iVar4 + 8);
              }
            }
            else {
              *(unsigned int *)(uVar5 * 0x18 + iVar4 + 8) = *puVar8;
            }
            *puVar8 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar1 = *puVar8;
        if (uVar1 == 0xffffffff) break;
        iVar3 = uVar1 * 0x18 + iVar4;
        uVar5 = uVar7;
      }
      return;
    }
  }
  return;
}

