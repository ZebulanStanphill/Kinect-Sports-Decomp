typedef unsigned char bool;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_68;
extern int fn_830508A0();
extern int fn_83051330();
extern unsigned int iStack_78;
extern unsigned int uStack_70;


void fn_830545B0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  bool bVar6;
  int *piVar7;
  char acStack_80 [8];
  int iStack_78;
  unsigned __int64 *puStack_74;
  unsigned __int64 uStack_70;
  unsigned __int64 auStack_68 [5];
  
  acStack_80[0] = '\x01';
  puVar5 = *(unsigned __int64 **)(param_1 + 0xb0);
  puVar4 = (unsigned __int64 *)0x0;
  do {
    puVar3 = puVar5;
    if (puVar3 == (unsigned __int64 *)0x0) goto LAB_8305472c;
    puVar5 = puVar3;
    if (param_2 <= puVar3[2]) break;
    puVar5 = *(unsigned __int64 **)((int)puVar3 + 0xc);
    acStack_80[0] = '\0';
    puVar4 = puVar3;
  } while (*puVar3 < param_2);
  if (puVar5 != (unsigned __int64 *)0x0) {
    while( true ) {
      iVar1 = *(int *)((int)puVar5 + 0xc);
      piVar7 = (int *)((int)puVar5 + 0xc);
      if (puVar5 == *(unsigned __int64 **)(param_1 + 0xb0)) {
        *(int *)(param_1 + 0xb0) = iVar1;
      }
      else {
        *(int *)((int)puVar4 + 0xc) = iVar1;
      }
      if (puVar5 == *(unsigned __int64 **)(param_1 + 0xb4)) {
        *(unsigned __int64 **)(param_1 + 0xb4) = puVar4;
      }
      uStack_70 = CONCAT44(iVar1,puVar4);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      iStack_78 = iVar1;
      puStack_74 = puVar4;
      if ((*(unsigned int *)(puVar5 + 6) & 0xe0000000) == 0x20000000) {
        auStack_68[0] = puVar5[2];
        fn_83051330(param_1,auStack_68,*(unsigned int *)(puVar5 + 4),
                      *(unsigned int *)((int)puVar5 + 0x1c),0);
        fn_830508A0(param_1,*puVar5,puVar5[2]);
        iVar2 = *(int *)(param_1 + 0x60);
        RtlEnterCriticalSection(iVar2 + 0x10);
        if (*(int *)(iVar2 + 0x98) == 0) {
          *(unsigned __int64 **)(iVar2 + 0x98) = puVar5;
          *piVar7 = 0;
        }
        else {
          *piVar7 = *(int *)(iVar2 + 0x98);
          *(unsigned __int64 **)(iVar2 + 0x98) = puVar5;
        }
        RtlLeaveCriticalSection(iVar2 + 0x10);
      }
      else {
        *(unsigned int *)(puVar5 + 6) = *(unsigned int *)(puVar5 + 6) & 0x1fffffff | 0x40000000;
        if (*(int *)(param_1 + 0xbc) == 0) {
          *(unsigned __int64 **)(param_1 + 0xbc) = puVar5;
          *piVar7 = 0;
        }
        else {
          *piVar7 = *(int *)(param_1 + 0xbc);
          *(unsigned __int64 **)(param_1 + 0xbc) = puVar5;
        }
      }
      if (iVar1 == 0) break;
      puVar4 = (((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF);
      puVar5 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
    }
  }
LAB_8305472c:
  bVar6 = true;
  iVar1 = *(int *)(param_1 + 0xbc);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    piVar7 = *(int **)(*(int *)(param_1 + 0x60) + 0x80);
    if (bVar6) {
      if ((*(unsigned int *)(iVar1 + 0x30) & 0x10000000) == 0) {
        (**(int (***)())(*piVar7 + 0x18))(piVar7,param_1 + 0x18,iVar1 + 0x10,acStack_80);
      }
      else {
        acStack_80[0] = '\0';
      }
    }
    *(unsigned int *)(iVar1 + 0x30) = *(unsigned int *)(iVar1 + 0x30) | 0x10000000;
    bVar6 = acStack_80[0] == '\0';
    iVar1 = iVar2;
  }
  return;
}

