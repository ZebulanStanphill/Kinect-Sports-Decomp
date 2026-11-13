extern unsigned int *auStack_464;
extern unsigned int *auStack_47c;
extern unsigned int *auStack_70;
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225C5F8();
extern int fn_8225D1F8();
extern int fn_8225DA18();
extern int fn_82269DE0();
extern int fn_82486B08();
extern int fn_82829120();
extern int fn_82A1DD38();
extern unsigned int iStack_480;
extern unsigned int uStack_46c;
extern unsigned int uStack_470;


void fn_82269C50(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iStack_480;
  unsigned int auStack_47c [3];
  unsigned int uStack_470;
  unsigned int uStack_46c;
  unsigned char auStack_464 [1012];
  unsigned char auStack_70 [32];
  
  if (param_1[0xda] != 0) {
    for (puVar1 = (unsigned int *)**(unsigned int **)param_1[0xb3];
        puVar1 != *(unsigned int **)param_1[0xb3]; puVar1 = (unsigned int *)*puVar1) {
      iVar7 = puVar1[2];
      if ((unsigned __int64)*(unsigned int *)(iVar7 + 0x40) == (param_2 & 0xffffffff)) goto LAB_82269ca4;
    }
    iVar7 = 0;
LAB_82269ca4:
    iVar2 = *(int *)(iVar7 + 0xdc);
    for (iVar7 = *param_1;
        (iVar7 != param_1[1] && ((unsigned __int64)*(unsigned int *)(iVar7 + 0x40) != (param_2 & 0xffffffff)));
        iVar7 = iVar7 + 0xe0) {
    }
    lVar5 = fn_8225C590();
    piVar3 = *(int **)(iVar2 + 0x8c0);
    uVar6 = (**(int (***)())(*piVar3 + 100))(piVar3);
    auStack_47c[0] = fn_8225DA18(lVar5,*(unsigned int *)(iVar7 + 0xd0));
    fn_82829120(&iStack_480,lVar5 + 0x48,auStack_47c);
    iVar4 = *(int *)(iStack_480 + 0x10);
    fn_82A1DD38(iVar4,uVar6,1000);
    *(unsigned int *)(iVar4 + 0x404) = 1;
    *(unsigned int *)(iVar4 + 0x408) = 1;
    if (param_1[0xd9] != 0) {
      fn_82486B08(&uStack_470);
      uStack_470 = 0;
      uStack_46c = *(unsigned int *)(iVar7 + 0xd0);
      fn_82A1DD38(auStack_464,uVar6,1000);
      fn_82A1DD38((unsigned __int64)(unsigned int)param_1[0xe3] + 0x838,&uStack_470,0x420);
      fn_8225D1F8(lVar5,*(unsigned int *)(iVar7 + 0xd0));
      fn_8225C5F8(lVar5);
      fn_82269DE0(param_1,param_2);
      fn_82230300(auStack_70,1,0);
    }
    param_1[0xe9] = iVar2;
    param_1[0xe6] = 0;
    param_1[0xea] = param_1[0xdb];
    param_1[0xe7] = *(int *)(iVar7 + 0xd0);
    (*(int (**)())param_1[0xda])(param_1 + 0xe6);
  }
  return;
}

