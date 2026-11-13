extern int fn_82672C20();


void fn_822B7340(int param_1)

{
  int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x78);
  if ((puVar1[0x18] == 0) || (puVar1[0x1a] == 0)) {
    fn_82672C20(puVar1[9],"_root.mc_overheadicon.hide",0,0);
    if (puVar1[0x19] != 0) {
      fn_82672C20(*puVar1,"_root.mc_overheadicon.hide",0,0);
    }
    puVar1[0x1a] = 1;
    puVar1[0x1b] = 0;
  }
  return;
}

