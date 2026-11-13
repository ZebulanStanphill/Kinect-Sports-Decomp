extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();


unsigned fn_82BEF948(int param_1,int param_2)

{
  int *piVar2;
  int lVar1;
  unsigned bVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) == 0) {
    fn_82BE5240(param_1,400,"MEDIA Asset ID: %d",0);
    return 0;
  }
  {
    iVar4 = param_1 + 0x1c;
    bVar3 = 1;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x24) != 0) {
      piVar2 = (int *)fn_82BE5378(iVar4);
      lVar1 = (*(int (**)())(*piVar2 + 4))(piVar2,param_2);
      bVar3 = (lVar1 != 0) ? bVar3 : 0;
      fn_82BE5350(iVar4);
    }
  }
  return bVar3;
}

