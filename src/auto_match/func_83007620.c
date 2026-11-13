typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_830080D8();


unsigned __int64 fn_83007620(int param_1,int param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  bool bVar3;
  int iVar4;
  unsigned int uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x30);
  }
  if (param_2 == iVar4) {
    bVar1 = *(unsigned char *)(param_1 + 0x3e) >> 1;
    uVar5 = bVar1 & 0x1f;
    puVar2 = (unsigned int *)*param_3;
    if ((bVar1 & 0x1f) == 0) {
      param_3[1] = (int)puVar2;
      bVar1 = *(unsigned char *)(param_1 + 0x3e);
      puVar2 = (unsigned int *)fn_830080D8();
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = bVar1 >> 1 & 0x1f;
      }
      return 1;
    }
    bVar3 = false;
    if (puVar2 != (unsigned int *)param_3[1]) {
      do {
        if (*puVar2 == uVar5) {
          bVar3 = true;
          break;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (unsigned int *)param_3[1]);
    }
    if ((!bVar3) && (puVar2 = (unsigned int *)fn_830080D8(), puVar2 != (unsigned int *)0x0)) {
      *puVar2 = uVar5;
    }
  }
  return 0;
}

