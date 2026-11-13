typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82593540();
extern int fn_825C3A68();


int fn_82564458(int param_1,int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned short *puVar4;
  
  if (((unsigned int *)(param_1 + 0x1bc) == (unsigned int *)0x0) || (*(int *)(param_1 + 0x4c) == 0)) {
    iVar3 = 0;
  }
  else {
    puVar4 = *(unsigned short **)(param_1 + 0x1bc);
    iVar3 = 0;
    while( true ) {
      bVar1 = false;
      while( true ) {
        if (puVar4 == (unsigned short *)0x0) {
          return iVar3;
        }
        iVar2 = fn_82593540(puVar4 + 4);
        if (iVar2 == param_2) {
          fn_825C3A68(puVar4,param_3,param_1,0);
          iVar3 = 1;
          if (puVar4[1] != 0) {
            bVar1 = true;
          }
        }
        if (puVar4[2] == 0) break;
        puVar4 = (unsigned short *)((unsigned int)*puVar4 + (int)puVar4);
      }
      if ((iVar3 != 0) && (!bVar1)) break;
      puVar4 = *(unsigned short **)(puVar4 + 0x26);
    }
  }
  return iVar3;
}

