typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8223CAD8();
extern int fn_8223F248();
extern int fn_8223F320();
extern int fn_8265C9E0();
extern unsigned int lbl_82021124;


unsigned __int64 fn_8223CB30(int *param_1,int *param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  bool bVar4;
  unsigned char auStack_50 [80];
  
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar2 = (unsigned int *)fn_8265C9E0(0x18);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      bVar4 = true;
      iVar3 = *(int *)(*param_2 + 0x18);
      if (iVar3 == 0) {
        iVar3 = *param_2 + 0x1c;
      }
      uVar1 = fn_8223F248(auStack_50,iVar3);
      puVar2[1] = 0;
      *puVar2 = &lbl_82021124;
      fn_8223CAD8(puVar2,uVar1);
    }
    *param_1 = (int)puVar2;
    if (bVar4) {
      fn_8223F320(auStack_50);
    }
  }
  return 2;
}

