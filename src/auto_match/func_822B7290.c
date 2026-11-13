extern int fn_82560708();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82672C20();


void fn_822B7290(int param_1)

{
  int *puVar1;
  int iVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x78);
  if (puVar1[0x18] == 0) {
    puVar1[0x19] = 0;
    fn_8266F640(puVar1[9],0);
    fn_8266F628(puVar1[9],0);
    fn_82672C20(puVar1[9],"_root.mc_overheadicon.show",0,0);
    iVar2 = fn_82560708();
    if (iVar2 != 0) {
      fn_8266F640(*puVar1,0);
      fn_8266F628(*puVar1,0);
      fn_82672C20(*puVar1,"_root.mc_overheadicon.show",0,0);
      puVar1[0x19] = 1;
    }
    puVar1[0x18] = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
  }
  return;
}

