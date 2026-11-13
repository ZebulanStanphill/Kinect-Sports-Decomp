extern unsigned int *auStack_2c;
extern int fn_8295D318();
extern int fn_82963318();
extern unsigned int uStack_30;


void fn_8295E160(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  fn_82963318(puVar1,0,&uStack_30);
  fn_82963318(*(unsigned int *)(param_1 + 0x104),1,auStack_2c);
  fn_8295D318(param_1,0x20042,uVar4,uVar3,auStack_2c[0],uStack_30,0,uVar2 & 0xfffff);
  return;
}

