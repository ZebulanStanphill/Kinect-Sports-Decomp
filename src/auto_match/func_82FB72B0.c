extern unsigned int *auStack_70;
extern int fn_82FB6438();
extern int fn_82FB7070();
extern int fn_82FB8E58();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


int fn_82FB72B0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned char auStack_70 [12];
  unsigned int uStack_64;
  unsigned int uStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_5c;

  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned short uStack_44;
  unsigned int uStack_40;
  
  uVar1 = *(unsigned int *)(param_1 + 0x6c);
  if (*(char *)(param_1 + 0x74) == '\0') {
    iVar4 = 0;
  }
  else {
    fn_82FB8E58(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(unsigned int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x60) + 0xc);
    }
    iVar3 = fn_82FB6438(*(unsigned int *)(param_1 + 0x58),uVar5,uVar1);
    iVar2 = *(int *)(iVar3 + 0x30);
    if (iVar2 == 0) {
      iVar4 = fn_82FB7070(param_1,iVar3,iVar4,uVar1,0);
    }
    else {
      uStack_64 = *(unsigned int *)(iVar3 + 0xc);
      uStack_60 = *(unsigned int *)(iVar3 + 0x10);
      stack_pair_5c.first = *(unsigned int *)(iVar3 + 0x14);
      uStack_40 = 0;
      stack_pair_5c.second = *(unsigned int *)(iVar2 + 4);
      uStack_54 = *(unsigned int *)(iVar2 + 8);
      uStack_50 = *(unsigned int *)(iVar2 + 0xc);
      uStack_4c = 0;
      uStack_44 = (unsigned short)((unsigned int)(*(unsigned int **)(iVar3 + 0x30))[7] >> 0x1f) << 0xc |
                  uStack_44 & 0xfff;
      iVar4 = fn_82FB7070(param_1,auStack_70,iVar4,**(unsigned int **)(iVar3 + 0x30),0);
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0x40) == 0) {
          iVar4 = (**(int (***)())(*(int *)(param_1 + 0x40) + 0x10))(param_1 + 0x40);
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x30);
          puVar6 = &stack_pair_5c.first;
          puVar7 = (unsigned int *)(iVar3 + 0x14);
          lVar8 = 6;
          uStack_64 = *(unsigned int *)(iVar2 + 0x14);
          uStack_60 = *(unsigned int *)(iVar2 + 0x18);
          stack_pair_5c.first = *(unsigned int *)(iVar2 + 0x1c) >> 4 & 0x4000000 | stack_pair_5c.first & 0x3ffffff | 0x38000000;
          do {
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar7;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          fn_82FB7070(param_1,auStack_70,iVar4,uVar1,0);
        }
      }
    }
  }
  return iVar4;
}

