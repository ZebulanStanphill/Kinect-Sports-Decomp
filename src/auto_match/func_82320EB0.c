#define true 1
#define false 0
extern unsigned int *auStack_10;


void fn_82320EB0(int param_1,int param_2)

{
  unsigned int bVar1;
  unsigned int auStack_10;
  
  if (**(int **)(param_1 + 0xc) == 0) {
    if ((**(int **)(param_1 + 8) != *(int *)(*(int *)(param_1 + 4) + 0x28)) ||
       (*(int *)(*(int *)(param_1 + 4) + 0x2c) == 0)) {
      bVar1 = false;
      goto LAB_82320efc;
    }
  }
  bVar1 = true;
LAB_82320efc:
  auStack_10 = **(unsigned int **)(param_1 + 8);
  (*(int (**)())(**(int **)(param_2 + 0x1b0) + 8))
            (*(int **)(param_2 + 0x1b0),!bVar1 + '\x19',&auStack_10);
  return;
}

