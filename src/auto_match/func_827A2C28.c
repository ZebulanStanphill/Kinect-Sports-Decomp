extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827AEE00();


void fn_827A2C28(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  *(unsigned char *)(param_1 + 0x40) = 0;
  uVar1 = fn_8279C588(*(unsigned int *)(*(int *)(param_1 + 0xc) + 8));
  uVar4 = 0;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    puVar3 = (unsigned int *)(param_1 + 0x94);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = (unsigned int *)fn_827AEE00(uVar1,*puVar3);
      *puVar2 = 0;
      puVar2[1] = 0;
      fn_82799C20(*(unsigned int *)(*(int *)(param_1 + 0xc) + 8),puVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(unsigned char *)(param_1 + 0xc0));
  }
  *(unsigned char *)(param_1 + 0xc0) = 0;
  return;
}

