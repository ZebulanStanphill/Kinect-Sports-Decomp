typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8223F248();
extern int fn_8223F320();
extern int fn_82296BC8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AA910;


unsigned __int64 fn_82296B18(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  bool bVar3;
  unsigned char auStack_50 [48];
  
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (unsigned int *)fn_8265C9E0(0x18);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      bVar3 = true;
      iVar2 = *(int *)(*param_2 + 0x18);
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      fn_8223F248(auStack_50,iVar2);
      puVar1[1] = 0;
      *puVar1 = &lbl_821AA910;
      fn_82296BC8(puVar1);
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      fn_8223F320(auStack_50);
    }
  }
  return 4;
}

