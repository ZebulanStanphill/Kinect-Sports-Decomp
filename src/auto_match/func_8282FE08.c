extern unsigned int *auStack_48;
extern int fn_82826568();
extern int fn_828295C8();
extern int fn_8282BBD0();
extern int fn_8282F458();
extern int fn_8282F5A8();
extern int fn_8282F700();
extern int fn_8282FB18();
extern int fn_8282FC60();
extern int fn_8282FCF0();
extern int fn_82830268();
extern int fn_82F672D8();
extern int fn_82F67988();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_8282FE08(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int auStack_48 [18];
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    fn_8282F700(param_1,&iStack_50);
    if (iStack_50 != 0) {
      iVar1 = fn_8282F458(param_2 + 0x80,iStack_50);
      if ((((iVar1 == 0) && (*(__int64 *)(param_1 + 0x14) == *(__int64 *)(param_2 + 0x98))) &&
          (iVar1 = fn_8282FC60(iStack_50,param_2), iVar1 == 0)) &&
         (((iVar1 = fn_8282FB18(iStack_50,param_2), iVar1 == 0 &&
           (iVar1 = fn_8282FCF0(iStack_50,param_2), iVar1 == 0)) &&
          (iVar1 = fn_8282F5A8(iStack_50,param_2), iVar1 == 0)))) {
        *(unsigned char *)(param_2 + 0x3f3) = 1;
        fn_82F672D8(param_2 + 0x1b8,*(unsigned int *)(param_1 + 0xd4),0x100);
      }
      fn_82F67988(iStack_50);
    }
  }
  if (*(char *)(param_2 + 0x3f3) == '\0') {
    *(unsigned char *)(param_2 + 0x1b8) = 0;
  }
  iVar1 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = *(int *)(param_1 + 0x104);
    iVar8 = 0;
    do {
      uVar7 = 0;
      if (*(int *)(iVar8 + iVar3 + 8) != 0) {
        iVar6 = iVar1 << 2;
        do {
          puVar4 = (unsigned int *)(iVar8 + *(int *)(param_1 + 0x104));
          fn_82830268(param_2,*(unsigned int *)(*(int *)(param_1 + 0x108) + iVar6),*puVar4,
                            puVar4[1]);
          iVar3 = *(int *)(param_1 + 0x104);
          uVar7 = uVar7 + 1;
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < *(unsigned int *)(iVar8 + iVar3 + 8));
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x44));
  }
  iVar1 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0xf4);
    iVar8 = 0;
    do {
      fn_82826568(param_2,*(unsigned int *)(iVar8 + iVar3),&uStack_4c);
      fn_828295C8(uStack_4c,auStack_48);
      iVar3 = *(int *)(param_1 + 0xf4);
      uVar7 = 0;
      if (*(int *)(iVar8 + iVar3 + 4) != 0) {
        iVar6 = iVar1 << 2;
        do {
          puVar4 = (unsigned int *)(*(int *)(param_1 + 0xf4) + iVar8);
          uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xf8) + iVar6);
          fn_8282BBD0(param_2,uVar2 + auStack_48[0],uVar2,*puVar4,puVar4[3],puVar4[2],puVar4[4])
          ;
          iVar3 = *(int *)(param_1 + 0xf4);
          uVar7 = uVar7 + 1;
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar7 < *(unsigned int *)(iVar8 + iVar3 + 4));
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x14;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x3c));
  }
  return;
}

