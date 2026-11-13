extern unsigned int *auStack_68;
extern int fn_82CE5410();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82D9A040();
extern int fn_82D9A160();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern int fn_83096038();
extern int fn_83096040();
extern unsigned int iStack_34;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int iStack_64;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;


void fn_82D9A730(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  int aiStack_70 [2];
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned int uStack_60;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  int iStack_44;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    if ((unsigned __int64)*(unsigned int *)(iVar3 + 0x98) + (unsigned __int64)*(unsigned int *)(iVar3 + 0x94) == 0) {
      *(int *)(*(int *)(param_1 + 8) + 0x94) = *(int *)(*(int *)(param_1 + 8) + 0x94) + 1;
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x33c);
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0x80000000;
      piVar2 = (int *)fn_82CE5410();
      uStack_38 = uVar1 | 0x80000000;
      iStack_40 = *piVar2;
      *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_40;
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x33c);
      stack_pair_50.first = 0;
      stack_pair_50.second = 0;
      uStack_48 = 0x80000000;
      iStack_34 = iStack_40;
      piVar2 = (int *)fn_82CE5410();
      uStack_48 = uVar1 | 0x80000000;
      stack_pair_50.first = *piVar2;
      aiStack_70[0] = param_1 + 0x24;
      *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + stack_pair_50.first;
      iStack_44 = stack_pair_50.first;
      if (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x58) + 0x10) != 0) {
        fn_83096038();
      }
      piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x58);
      (**(int (***)())(*piVar2 + 0x28))(piVar2,aiStack_70,param_2,1,&iStack_40,&stack_pair_50.first);
      if ((uStack_3c != 0) || (stack_pair_50.second != 0)) {
        fn_83088640(&iStack_40,&stack_pair_50.first);
        fn_830885D0(*(unsigned int *)(*(int *)(param_1 + 8) + 100),stack_pair_50.first,stack_pair_50.second);
        fn_83088518(*(unsigned int *)(*(int *)(param_1 + 8) + 100),iStack_40,uStack_3c);
        fn_82D9A160(param_1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x58) + 0x10) != 0) {
        fn_83096040();
      }
      fn_82D9A040(param_1,param_2);
      if (*(int *)(*(int *)(param_1 + 8) + 0x5c) != 0) {
        piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x5c);
        (**(int (***)())(*piVar2 + 0x14))(piVar2,0);
      }
      iVar3 = *(int *)(param_1 + 8);
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x94) - 1;
      *(int *)(iVar3 + 0x94) = (int)lVar4;
      if ((lVar4 == 0) && (*(char *)(iVar3 + 0x9c) == '\0')) {
        if (*(int *)(iVar3 + 0x8c) != 0) {
          fn_82D80C18(iVar3);
        }
        if ((*(int *)(iVar3 + 0xa4) == 1) && (*(int *)(iVar3 + 0x90) != 0)) {
          fn_82D80C30(iVar3);
        }
      }
      iVar3 = iStack_44;
      stack_pair_50.second = -(unsigned int)(stack_pair_50.first != iStack_44) & stack_pair_50.second;
      piVar2 = (int *)fn_82CE5410();
      *piVar2 = iVar3;
      iVar3 = fn_82CE5410();
      stack_pair_50.second = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff);
      }
      iVar3 = iStack_34;
      stack_pair_50.first = 0;
      uStack_48 = 0x80000000;
      uStack_3c = -(unsigned int)(iStack_40 != iStack_34) & uStack_3c;
      piVar2 = (int *)fn_82CE5410();
      *piVar2 = iVar3;
      iVar3 = fn_82CE5410();
      uStack_3c = 0;
      if ((uStack_38 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_40,uStack_38 & 0x3fffffff,8);
      }
    }
    else {
      uStack_60 = (unsigned int)param_2;
      auStack_68[0] = 0x11;
      iStack_64 = param_1;
      fn_82D80C48(iVar3,auStack_68);
    }
  }
  return;
}

