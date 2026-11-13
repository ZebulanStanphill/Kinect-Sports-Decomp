typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FA5190();
extern int fn_82FA9208();
extern int fn_82FB5068();
extern int fn_82FF6060();
extern unsigned int lbl_831BC768;


void fn_82FB52C8(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  bool bVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  
  puVar2 = *(unsigned int **)(param_1 + 0x54);
  puVar7 = (unsigned int *)0x0;
  do {
    while( true ) {
      puVar6 = puVar2;
      if (puVar6 == (unsigned int *)0x0) {
        return;
      }
      puVar1 = (unsigned int *)puVar6[1];
      if ((((0 < (int)puVar1[0x12]) || (*(char *)(puVar1 + 0x11) != '\0')) ||
          ((puVar1[7] != 0 && ((*(unsigned char *)(puVar1[7] + 0x34) & 0x80) != 0)))) ||
         (bVar5 = false, (puVar1[0xc] & 0x80000000) != 0)) {
        bVar5 = true;
      }
      if (!bVar5) break;
      fn_82FB5068(puVar1,param_2);
LAB_82fb5360:
      puVar2 = (unsigned int *)*puVar6;
      puVar7 = puVar6;
    }
    if (puVar1 == *(unsigned int **)(*(int *)(param_1 + 0x74) + 4)) goto LAB_82fb5360;
    puVar2 = (unsigned int *)*puVar6;
    fn_82FF6060(param_1 + 0x54,puVar6,puVar7);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = (int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      iVar4 = puVar1[7];
      puVar1[7] = 0;
      if (iVar4 != 0) {
        fn_82FA9208();
      }
      uVar8 = lbl_831BC768;
      (**(int (***)())*puVar1)(puVar1,0);
      fn_82FA5190(uVar8,puVar1);
    }
  } while( true );
}

