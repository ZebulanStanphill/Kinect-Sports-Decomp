#define true 1
extern int fn_82773B90();


unsigned int fn_827B6190(int *param_1,unsigned int *param_2)

{
  int iVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar3 = ((unsigned int)(unsigned char)(*(unsigned char *)((int)param_2 + 0xb) ^ *(unsigned char *)((int)param_2 + 10) ^
                        *(unsigned char *)(param_2 + 2) ^ *(unsigned char *)((int)param_2 + 7) ^
                       *(unsigned char *)((int)param_2 + 6)) ^ (unsigned int)*(unsigned char *)((int)param_2 + 9) << 1 ^
           (unsigned int)*(unsigned short *)(param_2 + 1) ^ *param_2 >> 6 ^ *param_2) & *(unsigned int *)(*param_1 + 4);
  iVar1 = *param_1;
  iVar4 = uVar3 * 0x18 + iVar1;
  if ((*(int *)(iVar4 + 8) != -2) && (uVar5 = uVar3, *(unsigned int *)(iVar4 + 0xc) == uVar3)) {
    while( true ) {
      if ((*(unsigned int *)(iVar4 + 0xc) == uVar3) &&
         (cVar2 = fn_82773B90(iVar4 + 0x10,param_2), cVar2 != '\0')) {
        return uVar5;
      }
      uVar5 = *(unsigned int *)(iVar4 + 8);
      if (uVar5 == 0xffffffff) break;
      iVar4 = uVar5 * 0x18 + iVar1;
    }
  }
  return 0xffffffff;
}

