extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82A34678();
extern int fn_82A34938();
extern int fn_82A37298();
extern int fn_82A37D48();


void fn_82A34C78(int param_1,int param_2)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  unsigned int auStack_50 [2];
  unsigned int auStack_48 [2];
  unsigned char auStack_40 [64];
  
  uVar4 = 0;
  auStack_50[0] = 0;
  iVar2 = -0x3fffffff;
  if (**(int **)(param_2 + 0x18) == -1) {
    if (*(int (***)())(param_1 + 0x3c) != (int (**)())0x0) {
      auStack_48[0] = 0;
      iVar2 = (**(int (***)())(param_1 + 0x3c))
                        (0xffffffff820893a4,*(unsigned int *)(param_2 + 4),0,0,
                         *(unsigned int *)(param_1 + 400),auStack_48,0,auStack_50);
    }
    *(unsigned int *)(param_2 + 0x10) = 0;
    fn_82A34938(param_1,param_2 + 0xc,auStack_40,auStack_48);
    puVar3 = (unsigned int *)
             fn_82A37298(param_1 + 0x10c,param_2 + 0xc,*(unsigned int *)(param_1 + 400),auStack_40
                             ,*(unsigned int *)(param_1 + 400),*(unsigned int *)(param_1 + 0x3c),
                             *(unsigned int *)(param_1 + 0x40),auStack_48[0]);
    if (puVar3[4] == 0) {
      if ((unsigned int)(0x8000 << (*(unsigned int *)(puVar3[2] + 0xc) >> 4 & 3)) <= *(unsigned int *)(param_1 + 400)) {
        fn_82A37D48(param_1 + 0x8c,*puVar3);
      }
      uVar1 = fn_82A34678(param_1,puVar3[2],*(unsigned int *)(param_2 + 0x14));
      **(unsigned __int64 **)(param_2 + 0x18) = uVar1;
    }
    uVar4 = puVar3[4];
    if ((*(int (***)())(param_1 + 0x40) != (int (**)())0x0) && (-1 < iVar2)) {
      (**(int (***)())(param_1 + 0x40))(uVar4,auStack_50[0]);
    }
  }
  **(unsigned int **)(param_2 + 0x1c) = uVar4;
  return;
}

