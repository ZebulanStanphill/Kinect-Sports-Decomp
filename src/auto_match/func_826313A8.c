#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))


void fn_826313A8(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  
  param_3 = param_3 + 4;
  puVar4 = (unsigned int *)((param_2 + 0x9f7) * 4 + param_1);
  do {
    puVar1 = (unsigned char *)(param_3 + 7);
    param_4 = param_4 + -1;
    puVar2 = (unsigned char *)(param_3 + 3);
    puVar3 = (unsigned char *)(param_3 + -1);
    param_3 = param_3 + 0x10;
    puVar4 = puVar4 + 1;
    *puVar4 = (unsigned int)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
  } while (param_4 != 0);
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x100000000000000;
  return;
}

