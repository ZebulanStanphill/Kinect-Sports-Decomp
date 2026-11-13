typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_4c;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_8288CD40();
extern int fn_8288F1E8();
extern int fn_8289F2E0();
extern int fn_828A12E8();
extern int fn_828A2C80();
extern int fn_828A4F60();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828C8058();
extern int fn_82A4AAA8();
extern unsigned int iStack_40;
extern unsigned int lbl_8202363C;
extern unsigned int uStack_44;


unsigned __int64 fn_8288F248(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar11;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int auStack_70;
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [8];
  unsigned char **ppuStack_50;
  unsigned char auStack_4c [8];
  unsigned int uStack_44;
  int iStack_40;
  
  bVar3 = false;
  bVar2 = false;
  cVar11 = fn_828ACCE8(*(unsigned int *)(param_1 + 0x6c));
  if (cVar11 == '\0') {
    cVar11 = fn_828ACCB0(*(unsigned int *)(param_1 + 0x6c));
    if (cVar11 == '\0') {
      bVar2 = true;
    }
    else {
      iVar6 = fn_828B55F8(param_1 + 0x80);
      if (iVar6 != 0) {
        bVar3 = true;
      }
    }
  }
  if (!bVar2) {
    if (bVar3) {
      return 0;
    }
    iVar6 = param_1 + 0x80;
    puVar7 = (unsigned int *)fn_8288F1E8(*(unsigned int *)(param_1 + 0x6c),iVar6);
    if (puVar7 == (unsigned int *)0x0) {
      if (*(char *)(param_1 + 0x9d) == '\0') {
        uVar9 = *(unsigned int *)(param_1 + 0x6c);
        uVar4 = fn_828B5580(auStack_58,iVar6);
        fn_828A4F60(uVar9,uVar4);
      }
      else {
        uVar9 = *(unsigned int *)(param_1 + 0x6c);
        uVar4 = fn_828B5580(auStack_68,iVar6);
        cVar11 = fn_828A2C80(uVar9,uVar4);
        if (cVar11 == '\0') {
          lVar5 = fn_828A12E8(*(unsigned int *)(param_1 + 0x6c));
          piVar8 = (int *)fn_8289F2E0(*(unsigned int *)(param_1 + 0x6c),
                                            *(unsigned int *)(param_1 + 0x18));
          uVar9 = (**(int (***)())(*piVar8 + 0xc))();
          uVar10 = fn_82A4AAA8();
          if (uVar10 < 2) {
            auStack_70 = fn_828B55F8(iVar6);
            piVar8 = (int *)fn_8288CD40(auStack_68,lVar5 + 0x94,&auStack_70);
            iVar1 = *piVar8;
            uVar4 = fn_828B5580(auStack_58,iVar6);
            ppuStack_50 = &lbl_8202363C;
            fn_828B5580(auStack_4c,uVar4);
            iStack_40 = param_1 + 0x8c;
            uStack_44 = uVar9;
            fn_828B55B0(uVar4);
            iVar6 = (**(int (***)())(iVar1 + 0x38))(&ppuStack_50);
            *(unsigned char *)(iVar6 + 0x5c) = *(unsigned char *)(param_1 + 0x9e);
            ppuStack_50 = &lbl_8202363C;
            fn_828B55B0(auStack_4c);
            return 1;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x9d) == '\0') {
      fn_828B5580(auStack_60,puVar7 + 5);
      iVar6 = fn_828B55F8(auStack_60);
      fn_828B55B0(auStack_60);
      if (iVar6 == 0) {
        fn_828C8058(*(unsigned int *)(param_1 + 0x6c),0xf);
        return 1;
      }
      if (*(int (***)())(puVar7[0xe] + 0x2c) != (int (**)())0x0) {
        (**(int (***)())(puVar7[0xe] + 0x2c))(puVar7);
        return 1;
      }
      (**(int (***)())*puVar7)(puVar7,1);
      return 1;
    }
  }
  return 1;
}

