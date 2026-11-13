extern int fn_82672C20();


void fn_822A0EB8(int param_1)

{
  int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x44);
  if (((puVar1 != (unsigned int *)0x0) && (puVar1[2] == 0)) && (puVar1[3] != 0)) {
    fn_82672C20(*puVar1,"_root.mc_panel.Close",0,0);
    puVar1[2] = 1;
  }
  return;
}

