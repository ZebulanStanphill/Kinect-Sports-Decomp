typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223CA80();
extern int fn_8223F248();
extern int fn_8223F320();
extern int fn_8265C9E0();
extern int fn_82F62DF8();
extern unsigned int lbl_821AA96C;


unsigned __int64 fn_822972A8(int *param_1,int *param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  bool bVar5;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [48];
  
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar2 = (unsigned int *)fn_8265C9E0(0x20);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      bVar5 = true;
      iVar4 = *(int *)(*param_2 + 0x18);
      if (iVar4 == 0) {
        iVar4 = *param_2 + 0x1c;
      }
      uVar1 = fn_8223F248(auStack_50,iVar4);
      puVar2[1] = 0;
      *puVar2 = &lbl_821AA96C;
      puVar3 = (unsigned int *)fn_8223CA80(auStack_60,uVar1);
      puVar2[2] = *puVar3;
      puVar2[3] = puVar3[1];
      puVar2[4] = puVar3[2];
      puVar2[5] = puVar3[3];
      uVar1 = fn_82F62DF8();
      *(unsigned __int64 *)(puVar2 + 6) = uVar1;
    }
    *param_1 = (int)puVar2;
    if (bVar5) {
      fn_8223F320(auStack_50);
    }
  }
  return 2;
}

