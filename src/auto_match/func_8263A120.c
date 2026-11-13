#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_30;


void fn_8263A120(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 *puVar2;
  unsigned int uStack_30;
  
  puVar1 = *(unsigned int **)(param_1 + 0x3144);
  if (puVar1 != (unsigned int *)0x0) {
    if (*(unsigned int *)(param_1 + 0x2a9c) == 0) {
      if ((*(unsigned int *)(param_1 + 0x2aa0) & *puVar1) != 0) {
        puVar2 = *(unsigned __int64 **)(param_1 + 0x35a8);
        if (*(unsigned __int64 **)(param_1 + 0x35ac) <= puVar2) {
          puVar2 = (unsigned __int64 *)fn_8264B4A0(param_1);
        }
        *puVar2 = CONCAT44((unsigned int)puVar1 >> 2 | uStack_30 & 0x80000000,0xffffffff);
        *(unsigned __int64 **)(param_1 + 0x35a8) = puVar2 + 1;
      }
    }
    else {
      puVar1[2] = *(unsigned int *)(param_1 + 0x2a9c);
    }
  }
  *(unsigned int *)(param_1 + 0x3144) = param_2;
  return;
}

