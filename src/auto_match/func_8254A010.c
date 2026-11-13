extern unsigned int *auStack_40;
extern int fn_825B1180();
extern int fn_82850780();
extern int fn_82850870();
extern int fn_82850988();


void fn_8254A010(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [16];
  
  puVar1 = *(unsigned int **)(param_1 + 0x1c4);
  *(unsigned int *)(param_1 + 0x1d4) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    fn_825B1180(puVar1[3]);
    auStack_40[0] = 0;
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = fn_82850870(uVar2);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        fn_82850988(uVar2,uVar5,auStack_40);
        fn_82850780(uVar2,uVar3,auStack_40[0],0);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    (**(int (***)())*param_2)(param_2,1);
  }
  return;
}

