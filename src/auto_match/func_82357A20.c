extern int fn_82536590();
extern int fn_8255B0D8();


static int isInWorld(int *p) { if(p) return *p != 0; return 0; }
void fn_82357A20(int param_1)

{
  int iVar1;
  int *piVar2;
  int bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_8255B0D8(*(unsigned int *)(*(int *)(iVar1 + 0x14) + 0x844));
  piVar2 = (int *)(iVar1 + 0x314);
  bVar3 = isInWorld(piVar2);
  if (bVar3) {
    fn_82536590(piVar2,0);
  }
  return;
}

