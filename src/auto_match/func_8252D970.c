extern int fn_827F62A8();
extern int fn_827F6318();
extern int fn_827F6430();


void fn_8252D970(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  if (*(unsigned int *)(param_1 + 400) != 0) {
    iVar1 = **(int **)(*(unsigned int *)(param_1 + 400) + 400);
    if (*(unsigned int *)(iVar1 + 0x110) != 0) {
      fn_827F62A8(*(unsigned int *)(iVar1 + 0x110),param_2,0);
      fn_827F6318(*(unsigned int *)(iVar1 + 0x110));
      fn_827F6430(*(unsigned int *)(iVar1 + 0x110));
    }
  }
  return;
}

