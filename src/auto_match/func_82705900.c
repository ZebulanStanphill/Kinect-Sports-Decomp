extern unsigned int *auStack_70;
extern int fn_8269DA30();
extern int fn_8269F500();
extern int fn_826F7940();
extern int fn_826FDB30();
extern int fn_82704298();
extern unsigned int iStack_6c;
extern unsigned int uStack_68;


void fn_82705900(__int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  unsigned char auStack_70 [4];
  struct { int first; unsigned int second; } stack_pair_6c;

  int *piStack_64;
  
  uVar3 = (unsigned __int64)(unsigned int)param_2[0x20];
  if (param_2[0x20] == 0) {
    uVar3 = fn_8269F500(param_2);
  }
  lVar6 = uVar3 + 0xc;
  param_1 = param_1 + 0xa28;
  iVar5 = fn_8269DA30(param_1,lVar6);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 4);
    iVar7 = 0;
    stack_pair_6c.first = 0;
    if (iVar5 != 0) {
      iVar8 = iVar5;
      do {
        auStack_70[0] = 0;
        iVar1 = param_2[0x1a];
        uVar4 = (**(int (***)())(*param_2 + 0x5c))(param_2);
        (**(int (***)())(iVar1 + 0xc))(param_2 + 0x1a,uVar4,iVar8,iVar8 + 8,auStack_70);
        iVar1 = *(int *)(iVar8 + 0x18);
        if (*(char *)(iVar8 + 0x1c) == '\0') {
          fn_826F7940(iVar8,1);
        }
        else {
          iVar2 = iVar8;
          if (stack_pair_6c.first != 0) {
            *(int *)(iVar7 + 0x18) = iVar8;
            iVar2 = stack_pair_6c.first;
          }
          stack_pair_6c.first = iVar2;
          *(unsigned int *)(iVar8 + 0x18) = 0;
          iVar7 = iVar8;
        }
        iVar8 = iVar1;
      } while (iVar1 != 0);
      if (stack_pair_6c.first != 0) {
        if (stack_pair_6c.first == iVar5) {
          return;
        }
        piStack_64 = &stack_pair_6c.first;
        stack_pair_6c.second = (unsigned int)lVar6;
        fn_82704298(param_1,param_1,&stack_pair_6c.second);
        return;
      }
    }
    fn_826FDB30(param_1,lVar6);
  }
  return;
}

