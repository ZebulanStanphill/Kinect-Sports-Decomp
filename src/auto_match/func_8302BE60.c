extern int fn_8302BD60();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_8302BE60(int *param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  
  puStack0000001c = (unsigned int *)(param_2 + 0xc);
  uStack00000024 = param_3;
  (**(int (***)())(*param_1 + 0x14))(param_1,*(unsigned int *)(param_2 + 8));
  uVar3 = *puStack0000001c;
  puVar1 = puStack0000001c + 1;
  puVar2 = puStack0000001c + 2;
  puStack0000001c = puStack0000001c + 3;
  iVar4 = fn_8302BD60(param_1,((unsigned __int64)uVar3 + ((unsigned __int64)uVar3 & 0x7fffffff) * 2 &
                                  0xfffffff) << 4,
                          ((unsigned __int64)*puVar1 + ((unsigned __int64)*puVar1 & 0x7fffffff) * 2 & 0xfffffff)
                          << 4,((unsigned __int64)*puVar2 + ((unsigned __int64)*puVar2 & 0x7fffffff) * 2 &
                               0xfffffff) << 4);
  if (iVar4 == 1) {
    if (*puStack0000001c != 0) {
      puStack0000001c = puStack0000001c + 1;
      (**(int (***)())(*param_1 + 0x1c))(param_1,&stack0x0000001c,&stack0x00000024);
    }
  }
  return;
}

