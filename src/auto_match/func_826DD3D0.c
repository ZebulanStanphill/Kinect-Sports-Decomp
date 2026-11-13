typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_8268CAB0();
extern int fn_826D6828();
extern int fn_826D9388();
extern int fn_826D93E8();
extern int fn_826DB990();
extern int fn_826DCEE0();
extern int fn_826F30F0();
extern int fn_826F3210();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826DD3D0(int param_1,int *param_2,unsigned int param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  char cVar9;
  char *pcVar7;
  int iVar8;
  char cVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  int iVar15;
  char in_RESERVE;
  unsigned char bVar16;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  struct { int first; unsigned int second; } stack_pair_78;

  int iStack_70;
  unsigned int uStack_6c;
  
  cVar10 = '\0';
  uVar14 = 0;
  if (param_2[1] != 0) {
    iVar15 = 0;
    do {
      iStack_70 = 0;
      uStack_6c = 0;
      puVar13 = (unsigned int *)(iVar15 + *param_2);
      cVar9 = fn_826DB990(param_3,&iStack_70,puVar13);
      if (cVar9 == '\0') {
        if (*(unsigned int *)(param_4 + 0xc) != 0) {
          fn_82683F88((unsigned __int64)*(unsigned int *)(param_4 + 0xc) + 0xc,0xffffffff8200c6f0,
                            ((unsigned __int64)*puVar13 & 0xfffffffc) + 8,
                            ((unsigned __int64)(unsigned int)param_2[3] & 0xfffffffc) + 8);
        }
      }
      else {
        uStack_7c = puVar13[1];
        cVar10 = fn_826DCEE0(param_1,&uStack_7c,&iStack_70,((unsigned __int64)*puVar13 & 0xfffffffc) + 8)
        ;
      }
      if (iStack_70 != 0) {
        fn_82687270();
      }
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + 0xc;
    } while (uVar14 < (unsigned int)param_2[1]);
  }
  if ((cVar10 != '\0') && (param_5 == '\0')) {
    RtlEnterCriticalSection(param_1 + 0x54);
    if (param_3 != 0) {
      fn_8267C4C8(param_3);
    }
    uStack_7c = param_3;
    fn_826D93E8(param_1 + 0x48,&uStack_7c);
    if (param_3 != 0) {
      fn_82687270(param_3);
    }
    RtlLeaveCriticalSection(param_1 + 0x54);
  }
  if (param_5 == '\0') {
    bVar5 = false;
    fn_8268CAB0(&uStack_80,param_2 + 3);
    pcVar7 = strstr((char *)((uStack_80 & 0xfffffffc) + 8),"_glyphs");
    bVar16 = (pcVar7 == (char *)0x0) << 1;
    if (pcVar7 != (char *)0x0) {
      bVar5 = true;
      if (param_3 != 0) {
        fn_8267C4C8(param_3);
      }
      uStack_7c = param_3;
      fn_826D9388(param_4 + 0x48,&uStack_7c);
      if (param_3 != 0) {
        fn_82687270(param_3);
      }
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x20) + 0x98);
    sync(1);
    iVar15 = *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0x20) + 0x98);
    sync(1);
    while (iVar2 != 0) {
      piVar3 = *(int **)(iVar2 + 4);
      iVar8 = (**(int (***)())(*piVar3 + 0x38))(piVar3);
      bVar16 = (iVar8 == 0) << 1;
      iVar6 = iVar15;
      if ((iVar8 == 0) || (bVar16 = !bVar5 << 1, bVar5)) {
        while (iVar6 != 0) {
          piVar4 = *(int **)(iVar6 + 4);
          iVar8 = (**(int (***)())(*piVar4 + 0x38))(piVar4);
          bVar16 = (iVar8 == 0) << 1;
          if (iVar8 != 0) {
            cVar10 = fn_826D6828(piVar3,piVar4);
            bVar16 = (cVar10 == '\0') << 1;
            if (cVar10 != '\0') {
              iVar8 = *(int *)(param_3 + 0x1c);
              stack_pair_78.first = 0;
              stack_pair_78.second = 0;
              bVar1 = *(char *)(iVar8 + 0x40) == '\0';
              bVar16 = bVar1 << 1;
              if ((bVar1) || (*(unsigned int *)(iVar8 + 0x1c) <= *(unsigned int *)(iVar6 + 8))) {
                fn_826F30F0(iVar8 + 0x18,&stack_pair_78.first);
              }
              else {
                fn_82687F98(&stack_pair_78.first,
                                  (unsigned __int64)*(unsigned int *)(iVar8 + 0x20) +
                                  ((unsigned __int64)*(unsigned int *)(iVar6 + 8) & 0x1fffffff) * 8);
              }
              if ((stack_pair_78.first != 0) &&
                 (fn_826F3210(param_1 + 0x18,*(unsigned int *)(iVar2 + 8),&stack_pair_78.first),
                 stack_pair_78.first != 0)) {
                fn_82687270();
              }
              break;
            }
          }
          sync(1);
          iVar6 = *(int *)(iVar6 + 0xc);
        }
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      sync(1);
    }
    lVar12 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
    do {
      puVar13 = (unsigned int *)lVar12;
      uVar11 = (unsigned __int64)*puVar13;
      if (in_RESERVE != '\0') {
        uVar14 = storeWordConditionalIndexed(uVar11 - 1,0,lVar12);
        *puVar13 = uVar14;
        bVar16 = 2;
      }
    } while (!(bool)(bVar16 >> 1 & 1));
    if (uVar11 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

