extern int fn_8243CD40();
extern int fn_82594EC8();


extern char lbl_83296FF4[];
void fn_8251E6F0(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar3 = (unsigned int *)(param_1 + 0x2c);
    puVar2 = (unsigned int *)fn_8243CD40(lbl_83296FF4,puVar3);
    uVar1 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar1 - 1);
    if ((unsigned int)uVar1 - 1 == 0) {
      fn_82594EC8(puVar3);
    }
    *(unsigned int *)(param_1 + 0x28) = 0;
    *puVar3 = 0;
  }
  return;
}

