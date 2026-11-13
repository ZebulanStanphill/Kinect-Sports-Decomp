extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DFC8F8();
extern int fn_82DFE6F8();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82DFF200(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  int iStack_44;
  
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0x80000000;
  piVar3 = (int *)fn_82CE5410();
  stack_pair_50.first = *piVar3;
  *piVar3 = stack_pair_50.first + 0x600;
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  uStack_48 = 0x80000010;
  iStack_44 = stack_pair_50.first;
  if (0 < (int)*(unsigned int *)(param_1 + 0xc)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar5);
      bVar1 = *(unsigned char *)(*(int *)(iVar2 + 0x1c) + 0x20);
      iVar4 = fn_82CE5410();
      if ((uStack_48 & 0x3fffffff) < (unsigned int)bVar1) {
        uVar7 = (uStack_48 & 0x3fffffff) << 1;
        if (uVar7 <= bVar1) {
          uVar7 = (unsigned int)bVar1;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),&stack_pair_50.first,uVar7,0x60);
      }
      stack_pair_50.second = (unsigned int)bVar1;
      fn_82DFC8F8(iVar2);
      (**(int (***)())(**(int **)(iVar2 + 0x3c) + 0x10))((double)*(float *)(param_2 + 8));
      fn_82DFE6F8(iVar2,param_2,stack_pair_50.first);
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 != 0);
    if (iStack_44 != stack_pair_50.first) goto LAB_82dff304;
  }
  stack_pair_50.second = 0;
LAB_82dff304:
  iVar5 = iStack_44;
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar5;
  iVar5 = fn_82CE5410();
  stack_pair_50.second = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,0x60);
  }
  return;
}

