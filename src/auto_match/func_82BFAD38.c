extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A2AA10();
extern unsigned int iStack00000014;
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


unsigned __int64 fn_82BFAD38(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iStack00000014;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  if (*(int *)(param_1 + 8) == 0) {
    iStack00000014 = param_1;
    puVar1 = (unsigned int *)(*(int (**)())lbl_831751D0)(8);
    if (puVar1 == (unsigned int *)0x0) {
      return 0;
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    iVar2 = fn_82A1E0C0(0,0,0xffffffff82bfac40,puVar1,4,auStack_60);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 != 0) {
      fn_82A2AA10(0x406d1388,0,4,auStack_50);
      fn_82A1E2C0(*(unsigned int *)(param_1 + 8));
      return 1;
    }
    (*(int (**)())lbl_831751CC)(puVar1);
  }
  return 0;
}

