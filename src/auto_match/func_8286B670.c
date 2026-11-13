#define true 1
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_82240378();
extern int fn_8260D428();
extern unsigned int uStack_40;


void fn_8286B670(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 7, puVar4 != param_2) {
      fn_82240378(auStack_50,puVar4);
      puVar3 = param_1;
      if (0xf < (unsigned int)param_1[5]) {
        puVar3 = (unsigned int *)*param_1;
      }
      iVar1 = fn_8260D428(auStack_50,0,uStack_40,puVar3,param_1[4]);
      puVar2 = puVar4;
      puVar3 = puVar4;
      if (iVar1 < 0) {
        while (puVar2 = param_1, param_1 != puVar3) {
          fn_822402F8(puVar3,puVar3 + -7);
          puVar3 = puVar3 + -7;
        }
      }
      else {
        while( true ) {
          puVar5 = puVar2 + -7;
          puVar3 = puVar5;
          if (0xf < (unsigned int)puVar2[-2]) {
            puVar3 = (unsigned int *)*puVar5;
          }
          iVar1 = fn_8260D428(auStack_50,0,uStack_40,puVar3,puVar2[-3]);
          if (-1 < iVar1) break;
          fn_822402F8(puVar2,puVar5);
          puVar2 = puVar5;
        }
      }
      fn_822402F8(puVar2,auStack_50);
      fn_82230300(auStack_50,1,0);
    }
  }
  return;
}

