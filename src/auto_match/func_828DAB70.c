typedef unsigned char bool;
#define true 1
extern int fn_8289F350();
extern int fn_828ACCE8();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828EDEB8();


void fn_828DAB70(int param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar5;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar6;
  
  cVar5 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
  if (cVar5 == '\0') {
    fn_828D2F28();
  }
  else {
    uVar3 = fn_828D2EE0(param_1);
    puVar6 = *(unsigned int **)(param_1 + 0x18);
    bVar2 = true;
    if (puVar6 != *(unsigned int **)(param_1 + 0x1c)) {
      do {
        if ((*(char *)(puVar6 + 1) == '\0') &&
           ((iVar4 = fn_8289F350(*(unsigned int *)(param_1 + 8),*puVar6), iVar4 == 0 ||
            (10000 < uVar3)))) {
          *(unsigned char *)((int)puVar6 + 5) = 0;
          *(unsigned char *)(puVar6 + 1) = 1;
        }
        pcVar1 = (char *)(puVar6 + 1);
        puVar6 = puVar6 + 2;
        bVar2 = (bool)(*pcVar1 != '\0' & bVar2);
      } while (puVar6 != *(unsigned int **)(param_1 + 0x1c));
    }
    if (bVar2) {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x8c);
      fn_828EDEB8(iVar4,*(unsigned __int64 *)(iVar4 + 0x50));
      fn_828D2DB8(param_1,6);
    }
  }
  return;
}

