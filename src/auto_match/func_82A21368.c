extern int fn_82A1F888();
extern int fn_82A1F950();
extern unsigned int lbl_83219B8C;


void fn_82A21368(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned short *puVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  RtlEnterCriticalSection(param_1);
  uVar4 = 0;
  lVar5 = (param_2 + -4) - (unsigned __int64)*(unsigned short *)((int)param_2 + -4);
  puVar2 = (unsigned short *)lVar5;
  trapWord(6,(unsigned __int64)puVar2[3],0);
  if (puVar2[4] != 0) {
    do {
      if ((unsigned __int64)*(unsigned char *)((uVar4 - puVar2[6]) * 4 + (unsigned int)puVar2[2] + (int)puVar2) ==
          ((param_2 - lVar5) - 0x14U & 0xffffffff) / (unsigned __int64)puVar2[3]) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < puVar2[4]);
  }
  iVar3 = fn_82A1F888(*(unsigned int *)(param_1 + 0x28),1);
  if (-1 < iVar3) {
    fn_82A1F950(*(unsigned int *)(param_1 + 0x28),lVar5,(unsigned __int64)*puVar2 + 1);
    puVar1 = *(unsigned int **)(param_1 + 0x28);
    (**(int (***)())(lbl_83219B8C + 4))(*puVar1);
    *puVar1 = 0xffffffff;
  }
  RtlLeaveCriticalSection(param_1);
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

