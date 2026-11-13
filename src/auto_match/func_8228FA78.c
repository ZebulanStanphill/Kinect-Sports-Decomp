extern int fn_82284B08();
extern int fn_8228FB60();
extern int fn_8228FC38();
extern int fn_82290070();
extern int fn_82536288();
extern int memmove();


void fn_8228FA78(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *apiStack_40 [4];
  
  if (*(int *)(param_2 + 0x54) == 0) {
    fn_82290070();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar3 = *(unsigned int **)(param_2 + 0x38);
    if (puVar3 != *(unsigned int **)(param_2 + 0x3c)) {
      puVar2 = puVar3 + 1;
      do {
        apiStack_40[0] = (int *)*puVar3;
        cVar1 = (**(int (***)())(*apiStack_40[0] + 4))();
        if (cVar1 == '\0') {
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
        else {
          fn_82536288(apiStack_40);
          memmove(puVar3,puVar2,(*(int *)(param_2 + 0x3c) - (int)puVar2 >> 2) << 2);
          *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -4;
        }
      } while (puVar3 != *(unsigned int **)(param_2 + 0x3c));
    }
    fn_8228FB60(param_2);
    fn_8228FC38(param_1,param_2);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

