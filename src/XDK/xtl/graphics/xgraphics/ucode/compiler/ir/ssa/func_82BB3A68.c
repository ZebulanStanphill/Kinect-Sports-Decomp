#define true 1
extern int fn_82BC5A80();
extern int fn_82BC5A98();


unsigned __int64 fn_82BB3A68(int param_1)

{
  int iVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  do {
    if (*(int *)(iVar1 + 8) == 0) {
      return 1;
    }
    cVar2 = fn_82BC5A98(iVar1);
    if (cVar2 != '\0') {
      iVar4 = 0;
      for (uVar3 = 1; uVar3 <= *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 4); uVar3 = uVar3 + 1) {
        cVar2 = fn_82BC5A80(*(unsigned int *)(*(int *)(*(int *)(iVar1 + 0x3c) + 8) + iVar4));
        if (cVar2 != '\0') {
          return 0;
        }
        iVar4 = iVar4 + 4;
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}

