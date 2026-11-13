extern int fn_82BE56B0();
extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BF7540();
extern int fn_82BF7B48();
extern int fn_82F68B78();
extern unsigned int lbl_8322B224;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_82BE8C38(unsigned __int64 param_1,unsigned __int64 param_2)

{
  short *psVar1;
  int iVar2;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int in_stack_0000001c;
  int aiStack_30 [12];
  
  iVar5 = lbl_8322B224;
  if ((lbl_8322B224 == 0) || (*(int *)(lbl_8322B224 + 0x58) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lbl_8322B224 + 0x60);
  *(unsigned int *)(lbl_8322B224 + 0x5c) = 1;
  uVar8 = 0;
  *(short *)(iVar5 + 0x60) = *psVar1 + 1;
  iVar5 = fn_82F68B78(lbl_8322B224,param_1,param_2,0);
  in_stack_0000001c = (unsigned int)param_1;
  if (*(int *)(iVar5 + 0x50) != 2) {
    aiStack_30[0] = 0;
    iVar6 = fn_82BF7540(iVar5 + 0xc,&stack0x0000001c,aiStack_30);
    iVar2 = aiStack_30[0];
    if (iVar6 != 0) {
      uVar3 = (**(int (***)())(**(int **)(iVar5 + 0x4c) + 4))();
      *(unsigned __int64 *)(iVar2 + 0x10) = uVar3;
      if ((param_2 & 0xffffffff) != 0) {
        if (((*(int *)(iVar2 + 0x18) != 0) && (*(char **)(iVar2 + 0x1c) != (char *)0x0)) &&
           (**(char **)(iVar2 + 0x1c) != '\0')) {
          uVar4 = fn_82BE56B0(0x1c);
          if ((uVar4 & 0xffffffff) == 0) {
            puVar7 = (unsigned int *)0x0;
          }
          else {
            puVar7 = (unsigned int *)
                     fn_82BF7B48(uVar4,in_stack_0000001c,*(unsigned int *)(iVar5 + 8),
                                     *(unsigned int *)(iVar2 + 0x1c),param_2,uVar8);
          }
          if (puVar7 == (unsigned int *)0x0) {
            return 0;
          }
          iVar5 = fn_82BECB18(iVar5,puVar7);
          if (iVar5 == 0) {
            (**(int (***)())*puVar7)(puVar7,1);
            return 0;
          }
          fn_82BE8D50(puVar7);
          return 1;
        }
        (*(int (**)())param_2)(in_stack_0000001c,0,uVar8);
      }
      return 1;
    }
  }
  return 0;
}

