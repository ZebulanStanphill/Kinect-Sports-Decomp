typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;


unsigned char * fn_82D01468(unsigned char *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  bool bVar5;
  char *pcVar6;
  unsigned char auStack_40 [64];
  
  puVar1 = (unsigned int *)*param_2;
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      *param_1 = 1;
      return param_1;
    }
    if ((param_2[6] - 1 & (unsigned int)puVar1) != 0) break;
    bVar5 = false;
    for (puVar2 = (unsigned int *)param_2[3]; puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      pcVar6 = (char *)(**(int (***)())(*(int *)param_2[0xc] + 0xc))
                                 (auStack_40,(int *)param_2[0xc],puVar2);
      if (*pcVar6 == '\0') goto LAB_82d01554;
      puVar3 = (unsigned int *)puVar2[2];
      if (puVar3 <= puVar1) {
        uVar4 = param_2[1];
        if (puVar1 < (unsigned int *)(puVar2[3] * uVar4 + (int)puVar3)) {
          trapWord(6,(unsigned __int64)uVar4,0);
          if ((int)puVar1 - (int)puVar3 != ((unsigned int)((int)puVar1 - (int)puVar3) / uVar4) * uVar4)
          goto LAB_82d01554;
          bVar5 = true;
          break;
        }
      }
    }
    if (!bVar5) break;
    puVar1 = (unsigned int *)*puVar1;
  }
LAB_82d01554:
  *param_1 = 0;
  return param_1;
}

