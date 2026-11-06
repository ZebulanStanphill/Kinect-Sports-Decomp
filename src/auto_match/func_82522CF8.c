typedef unsigned char undefined1;
extern int fn_82A277E0();
extern int fn_82A28568();
extern unsigned int lbl_83297854;
extern void __debugbreak(void);
int fn_82522CF8(int param_1, unsigned param_2)
{
  int iVar1;
  int iVar2;
  unsigned short *puVar3;
  if (lbl_83297854 != 0 && lbl_83297854 == param_2) {
    __debugbreak();
  }
  iVar1 = fn_82A28568(*(unsigned *)(param_1 + 0x24),0,param_2 + 4);
  if (iVar1 != 0) {
    iVar2 = fn_82A277E0(*(unsigned *)(param_1 + 0x24),0,iVar1);
    puVar3 = (unsigned short *)(iVar2 + iVar1 + -4);
    *puVar3 = 0x9876;
    *(char *)(puVar3 + 1) = (char)*(unsigned *)(param_1 + 0x20);
    *(int *)(param_1 + 0x2c) = (int)param_2 + *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return iVar1;
}
