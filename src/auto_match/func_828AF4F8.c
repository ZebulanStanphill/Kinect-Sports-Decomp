extern int fn_823AA970();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_828AF2B0();
extern int fn_828C8058();
extern int fn_828D8B60();
extern int fn_828D8FD8();


void fn_828AF4F8(int param_1)

{
  unsigned int uVar1;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar2;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    cVar4 = fn_8289DAD0();
    if (cVar4 == '\0') {
      cVar4 = fn_828AF2B0(param_1);
      if ((cVar4 == '\0') && (*(char *)(param_1 + 0xb2) == '\0')) {
        uVar1 = *(unsigned int *)(param_1 + 0x50);
        uVar2 = fn_823AA970(param_1);
        fn_828D8B60(uVar1,0,uVar2);
        *(unsigned char *)(param_1 + 0xb2) = 1;
      }
    }
    else {
      iVar3 = fn_8289D8D0(*(unsigned int *)(param_1 + 0x50));
      if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 1)) ||
         (cVar4 = fn_828D8FD8(*(unsigned int *)(iVar3 + 100),0), cVar4 == '\0')) {
        fn_828C8058(*(unsigned int *)(param_1 + 0x50),0xb);
        *(unsigned char *)(param_1 + 0xb0) = 1;
        return;
      }
    }
    *(unsigned char *)(param_1 + 0xb0) = 1;
  }
  return;
}

