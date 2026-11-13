#define true 1
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223C610();
extern int fn_823B8510();
extern unsigned int iStack_34;
extern unsigned int iStack_44;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


void fn_823B7DC0(int *param_1,unsigned __int64 *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  struct { unsigned int first; int second; } stack_pair_48;

  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  int iStack_34;
  
  uVar2 = fn_8223C610(*param_3,*(unsigned int *)(*(int *)(*param_1 + 0x308) + 0xc),0,0);
  puStack_50 = (unsigned int *)param_1[0x22];
  puVar4 = (unsigned int *)((unsigned int *)param_1[0x22])[1];
  while( true ) {
    if (*(char *)((int)puVar4 + 0x19) != '\0') break;
    if ((unsigned int)puVar4[3] < uVar2) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puStack_50 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if ((puStack_50 == (unsigned int *)param_1[0x22]) || (uVar2 < (unsigned int)puStack_50[3])) {
    ppuVar5 = &puStack_4c;
    puStack_4c = (unsigned int *)param_1[0x22];
  }
  else {
    ppuVar5 = &puStack_50;
  }
  puVar4 = *ppuVar5;
  if (puVar4 != (unsigned int *)param_1[0x22]) {
    (**(int (***)())(*(int *)puVar4[4] + 4))(&stack_pair_48.first);
    (**(int (***)())(*(int *)puVar4[4] + 0xc))((int *)puVar4[4],*param_3,stack_pair_48.first);
    iVar1 = stack_pair_48.second;
    uStack_38 = 0;
    iStack_34 = 0;
    uStack_40 = *param_2;
    if ((stack_pair_48.second != 0) && (cVar3 = fn_8223AAC0(), cVar3 != '\0')) {
      iStack_34 = iVar1;
      uStack_38 = stack_pair_48.first;
    }
    fn_823B8510(param_1 + 0x25,&uStack_40);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    if (stack_pair_48.second != 0) {
      fn_822315A0();
    }
  }
  return;
}

