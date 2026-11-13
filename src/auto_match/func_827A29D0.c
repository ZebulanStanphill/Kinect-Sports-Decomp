extern int fn_8267C498();
extern int fn_82722738();
extern int fn_82722740();
extern int fn_827912D8();
extern int fn_8279C910();
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


__int64 fn_827A29D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int iStack_60;
  unsigned int uStack_58;
  unsigned char *puStack_54;
  unsigned int uStack_50;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned char *puStack_38;
  unsigned int uStack_34;
  
  lVar7 = -1;
  if ((*(unsigned short *)(param_1 + 0x68) & 1) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar8 = param_3;
      if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
        uVar8 = param_2;
        param_2 = param_3;
      }
      uVar9 = (unsigned int)param_2;
      if ((param_4 == '\0') || (*(int *)(*(int *)(param_1 + 0xc) + 0x1c) == 0)) {
        puVar3 = (unsigned int *)fn_82722738();
        if (puVar3[1] != 0) {
          *(unsigned short *)(param_1 + 0x68) = *(unsigned short *)(param_1 + 0x68) & 0xffbf;
          puVar6 = (unsigned char *)*puVar3;
          if ((param_2 & 0xffffffff) == (uVar8 & 0xffffffff)) {
            if (puVar6 == (unsigned char *)0x0) {
              puVar6 = &lbl_820E975C;
            }
            puVar5 = &uStack_58;
            uVar4 = 1;
            uStack_58 = uVar9;
            puStack_54 = puVar6;
            uStack_50 = puVar3[1];
          }
          else {
            if (puVar6 == (unsigned char *)0x0) {
              puVar6 = &lbl_820E975C;
            }
            puVar5 = &stack_pair_40.first;
            uVar4 = 6;
            stack_pair_40.first = uVar9;
            stack_pair_40.second = (int)uVar8;
            puStack_38 = puVar6;
            uStack_34 = puVar3[1];
          }
          lVar7 = fn_8279C910(*(unsigned int *)(param_1 + 8),uVar4,puVar5);
          lVar7 = lVar7 + param_2;
        }
      }
      else {
        iVar1 = fn_82722740();
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar2 = fn_827912D8(iVar1);
          if (iVar2 != 0) {
            *(unsigned short *)(param_1 + 0x68) = *(unsigned short *)(param_1 + 0x68) & 0xffbf;
            if ((param_2 & 0xffffffff) == (uVar8 & 0xffffffff)) {
              puVar3 = &uStack_70;
              uVar4 = 2;
              uStack_70 = uVar9;
              iStack_6c = iVar1;
            }
            else {
              puVar3 = &uStack_68;
              uVar4 = 7;
              uStack_68 = uVar9;
              uStack_64 = (int)uVar8;
              iStack_60 = iVar1;
            }
            lVar7 = fn_8279C910(*(unsigned int *)(param_1 + 8),uVar4,puVar3);
            lVar7 = lVar7 + param_2;
          }
          fn_8267C498(iVar1);
        }
      }
    }
  }
  return lVar7;
}

