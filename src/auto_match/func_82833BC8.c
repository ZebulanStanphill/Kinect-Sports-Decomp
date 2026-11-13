extern int fn_82824338();
extern int fn_82826120();
extern int fn_828297A0();
extern int fn_8282A0E8();
extern int fn_82835208();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


unsigned __int64 fn_82833BC8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  unsigned int *puVar8;
  int aiStack_60;
  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned int *puStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  uVar1 = *(unsigned int *)*param_4;
  fn_82826120(param_1,&aiStack_60);
  iVar2 = *(int *)(param_4[2] + 4);
  iVar3 = **(int **)(aiStack_60 + 0x388);
  cVar6 = fn_82824338(param_2);
  if (cVar6 == '\0') {
    uVar4 = 1;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_4[2] + 0xc) != 0) {
      do {
        iVar5 = *(int *)(iVar2 * 0x20 + iVar3 + 0x10) * uVar7;
        puVar8 = (unsigned int *)(iVar5 + param_3);
        if (*(int *)(iVar5 + param_3) != 0) {
          cVar6 = fn_8282A0E8(aiStack_60,puVar8);
          if (cVar6 != '\0') {
            stack_pair_58.first = *puVar8;
            stack_pair_58.second = 0;
            iVar5 = fn_828297A0(uVar1,&stack_pair_58.first);
            if (iVar5 != 0) {
              uStack_44 = *puVar8;
              uStack_40 = stack_pair_58.second;
              puStack_48 = puVar8;
              fn_82835208(param_4[1],&puStack_48);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(unsigned int *)(param_4[2] + 0xc));
    }
    uVar4 = 0;
  }
  return uVar4;
}

