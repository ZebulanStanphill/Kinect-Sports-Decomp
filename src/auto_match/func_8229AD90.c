extern int fn_826728E8();


void fn_8229AD90(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  const char *uVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  switch (param_2) {
  case 1:
    fn_826728E8(*puVar1,"avatar_player3"); uVar2 = "avatar_player4"; break;
  case 0:
    fn_826728E8(*puVar1,"avatar_player1"); uVar2 = "avatar_player2"; break;
  default: return;
  }
  fn_826728E8(*puVar1,uVar2,param_4);
  return;
}

