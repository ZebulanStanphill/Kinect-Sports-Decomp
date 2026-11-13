typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_825737F0();
extern int fn_825A6210();
extern int fn_825C19B8();
extern int fn_8265C9E0();
extern int fn_82D8A058();
extern int fn_82D93440();
extern int fn_82D93670();
extern unsigned int lbl_82191FCC;


void fn_82571418(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (param_6 == 0)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 0x7c)) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar5 + *(int *)(param_2 + 0x78)) == 0x2021) {
            bVar1 = true;
            goto LAB_8257148c;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar4 < *(int *)(param_2 + 0x7c));
      }
      bVar1 = false;
LAB_8257148c:
      if (bVar1) {
        fn_82D93440();
      }
      else {
        fn_82D93670(param_2,0x2021,*(unsigned char *)(param_1 + 0x100));
      }
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 0x7c)) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar5 + *(int *)(param_2 + 0x78)) == 0x2022) {
            bVar1 = true;
            goto LAB_825714fc;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar4 < *(int *)(param_2 + 0x7c));
      }
      bVar1 = false;
LAB_825714fc:
      if (bVar1) {
        fn_82D93440();
      }
      else {
        fn_82D93670(param_2,0x2022,*(unsigned int *)(param_1 + 0x104));
      }
      uVar2 = fn_8265C9E0(0x180);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_825A6210(uVar2,param_7);
      }
      *(unsigned int *)(param_1 + 0x28) = uVar3;
      fn_82D8A058(param_2);
      fn_825737F0(param_2 + 0x200);
    }
  }
  if ((*(unsigned int *)(param_1 + 0x108) & 1) != 0) {
    *(unsigned int *)(param_1 + 0x84) = lbl_82191FCC;
  }
  if ((*(unsigned int *)(param_1 + 0x108) & 2) != 0) {
    fn_825C19B8(param_1 + 0x90,param_3,param_2,param_4,param_5);
    *(unsigned int *)(param_1 + 0xa4) = lbl_82191FCC;
  }
  return;
}

