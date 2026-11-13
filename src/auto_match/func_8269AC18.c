#define true 1
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267BED0();
extern int fn_8268CC00();
extern int fn_8268CF60();
extern int fn_8270E3B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_8269AC18(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 in_r7;
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [40];
  
  stack_pair_60.first = *(unsigned int *)(param_2 + 0x44);
  piVar1 = *(int **)(param_2 + 0x20);
  stack_pair_60.second = *(unsigned int *)(param_2 + 0x48);
  uStack_58 = *(unsigned int *)(param_2 + 0x4c);
  uStack_54 = *(unsigned int *)(param_2 + 0x50);
  uStack_50 = *(unsigned int *)(param_2 + 0x54);
  uStack_4c = *(unsigned int *)(param_2 + 0x58);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar4 = (**(int (***)())(*piVar1 + 0x38))(piVar1);
    if (iVar4 != 0) break;
    fn_8268CF60(&stack_pair_60.first,piVar1 + 0x11);
    piVar1 = (int *)piVar1[8];
  }
  fn_8268CC00(auStack_40);
  (**(int (***)())(*piVar1 + 0x2c))(auStack_70,piVar1,auStack_40);
  auStack_80[0] = 0x109;
  lVar2 = fn_8267BED0(param_2,0x16c,auStack_80);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = (**(int (***)())(*piVar1 + 0x38))(piVar1);
  uVar3 = fn_8270E3B0(param_1,lVar2,uVar3,piVar1 + 0x11,&stack_pair_60.first,in_r7,auStack_70);
  return uVar3;
}

