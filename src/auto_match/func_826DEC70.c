typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();
extern int fn_82683D70();
extern int fn_826C8C70();
extern int fn_826C8EB8();
extern int fn_826D6CF0();
extern int fn_826D78C0();
extern int fn_826D8DA0();
extern int fn_826D9318();
extern int fn_826DDDA0();
extern int fn_826E7BA8();
extern int fn_826E8858();
extern int fn_826E9248();
extern int fn_826E9378();
extern int fn_826F4F68();
extern unsigned int iStack_78;


void fn_826DEC70(int param_1,int param_2,int param_3)

{
  bool bVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar7;
  __int64 lVar6;
  int iVar8;
  int (**apcStack_90[4])();
  unsigned char auStack_80 [8];
  int iStack_78;
  
  iVar8 = *(int *)(param_2 + 0x314);
  if (iVar8 == 0) {
    iVar8 = param_2 + 0x28;
  }
  RtlEnterCriticalSection(param_1 + 0xd4);
  fn_826D9318(param_1 + 0xf0,*(unsigned int *)(param_1 + 0x44));
  fn_826D9318(param_1 + 0xfc,*(unsigned int *)(param_1 + 0x44));
  RtlLeaveCriticalSection(param_1 + 0xd4);
  fn_826E9248(iVar8,param_1 + 0x30);
  fn_826C8C70(iVar8,0xffffffff8200c800,(double)*(float *)(param_1 + 0x40),
                    *(unsigned int *)(param_1 + 0x44));
  uVar4 = *(unsigned int *)(param_1 + 0x28) / 0x1e;
  iVar5 = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  bVar1 = false;
  if (uVar4 < 0x2000) {
    uVar4 = 0x2000;
  }
  if ((unsigned int)((*(int *)(iVar8 + 0x34) - *(int *)(iVar8 + 0x30)) + *(int *)(iVar8 + 0x2c)) <
      *(unsigned int *)(param_2 + 0x270)) {
    do {
      if (*(char *)(param_1 + 0x7c) != '\0') {
        fn_826F4F68(param_2);
        if ((param_3 != 0) && (iVar8 = *(int *)(param_3 + 0x20), iVar8 != 0)) {
          lVar6 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x80) + 8;
          fn_8267C8D8(lVar6);
          *(unsigned int *)(iVar8 + 0x7c) = 3;
          fn_8267CB10((unsigned __int64)*(unsigned int *)(iVar8 + 0x80) + 0x1c);
          fn_8267D9C0(lVar6);
        }
        uVar2 = 3;
        goto LAB_826def78;
      }
      uVar2 = fn_826E8858(iVar8,auStack_80);
      iVar5 = iStack_78 + iVar5;
      if ((bVar1) &&
         (((*(int *)(param_1 + 0x78) == 1 || ((int)uVar4 < iVar5)) || (0x2000 < iStack_78)))) {
        fn_8267CB10((unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 0x1c);
        bVar1 = false;
        iVar5 = 0;
      }
      fn_826C8EB8(param_2,param_1 + 0x24,auStack_80,0);
      iVar7 = (int)uVar2;
      apcStack_90[0] = (int (**)())0x0;
      if (iVar7 != 1) {
        cVar3 = fn_82683D70(uVar2,apcStack_90);
        if (cVar3 == '\0') {
          fn_826C8C70(iVar8,0xffffffff8200bfe0,uVar2);
          fn_826E9378(iVar8);
        }
        else {
          (*apcStack_90[0])(param_2,auStack_80);
        }
      }
      fn_826E7BA8(iVar8);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      if (iVar7 == 1) {
        cVar3 = fn_826D8DA0(param_1,param_2,0);
        if (cVar3 == '\0') {
          return;
        }
        bVar1 = true;
        fn_826C8C70(iVar8,0xffffffff8200c7f0);
        if (param_3 != 0) {
          fn_826DDDA0(param_3);
        }
      }
      else if ((iVar7 == 0) &&
              ((*(int *)(iVar8 + 0x34) - *(int *)(iVar8 + 0x30)) + *(int *)(iVar8 + 0x2c) !=
               *(int *)(param_2 + 0x270))) {
        fn_826D78C0(iVar8,0xffffffff8200c788);
        break;
      }
    } while ((unsigned int)((*(int *)(iVar8 + 0x34) - *(int *)(iVar8 + 0x30)) + *(int *)(iVar8 + 0x2c)) <
             *(unsigned int *)(param_2 + 0x270));
  }
  if ((*(int *)((*(int *)(param_2 + 0x2e8) + 0x3f) * 0xc + param_2) == 0) &&
     ((*(int *)(param_2 + 0x2e8) != 0 || (*(int *)(param_2 + 0x30c) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    fn_826D8DA0(param_1,param_2,1);
    if (param_3 != 0) {
      fn_826DDDA0(param_3);
    }
  }
  else {
    uVar2 = 2;
LAB_826def78:
    fn_826D6CF0(param_1,*(unsigned int *)(param_1 + 0x78),uVar2);
  }
  return;
}

