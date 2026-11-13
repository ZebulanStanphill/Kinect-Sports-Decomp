extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826933E8();
extern int fn_826A8E58();
extern int fn_827741E8();
extern int fn_8278C110();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826FE3C0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  char cVar5;
  unsigned int uVar6;
  int iVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  int *piStack_28;
  int iStack_24;
  
  uVar6 = *(unsigned int *)(param_1 + 0xb00) >> 0x14 & 1;
  if (((uVar6 == 0) || ((param_2 & 0xff) == 0)) && ((uVar6 != 0 || ((param_2 & 0xff) != 0)))) {
    if ((param_2 & 0xff) == 0) {
      uVar6 = *(unsigned int *)(param_1 + 0xb00) & 0xffefffff;
    }
    else {
      uVar6 = *(unsigned int *)(param_1 + 0xb00) | 0x100000;
    }
    *(unsigned int *)(param_1 + 0xb00) = uVar6;
    if ((param_2 & 0xff) == 0) {
      uVar4 = fn_826933E8();
      *(unsigned __int64 *)(param_1 + 0xaa8) =
           (uVar4 / 1000 - *(__int64 *)(param_1 + 0xab0)) + *(__int64 *)(param_1 + 0xaa8);
    }
    else {
      uVar4 = fn_826933E8();
      *(unsigned __int64 *)(param_1 + 0xab0) = uVar4 / 1000;
    }
    piVar3 = *(int **)(param_1 + 0xaf4);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[0x1c];
      (**(int (***)())(*piVar3 + 0xdc))(piVar3,param_2);
      piVar3 = piVar1;
    }
    if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (**(int **)(param_1 + 0x104) != 0)) {
      fn_8278C110(&piStack_28,param_1 + 0x104);
      stack_pair_30.first = 0;
      stack_pair_30.second = 0;
      cVar5 = fn_826A8E58(&piStack_28,&stack_pair_30.first);
      if (cVar5 == '\0') {
        stack_pair_30.first = 0;
        stack_pair_30.second = 0;
        do {
          iVar7 = iStack_24 * 0xc + *piStack_28;
          iVar2 = *(int *)(iVar7 + 0x10);
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          piVar3 = *(int **)(iVar7 + 0x10);
          (**(int (***)())(*piVar3 + 0x10))(piVar3,param_2);
          fn_8267C498(piVar3);
          fn_827741E8(&piStack_28);
          cVar5 = fn_826A8E58(&piStack_28,&stack_pair_30.first);
        } while (cVar5 == '\0');
      }
      fn_8267BE38(0);
    }
  }
  return;
}

