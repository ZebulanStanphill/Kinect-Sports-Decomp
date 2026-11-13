extern int fn_8255F788();
extern int fn_8255FA88();
extern int fn_827F0670();
extern int fn_827F22D0();
extern int fn_827F5708();
extern int fn_827F5730();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82554720(unsigned __int64 param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  char cVar3;
  unsigned int uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = 1;
  if (1 < *(unsigned int *)(param_2 + 0x18c)) {
    iVar5 = 4;
    dVar7 = (double)ltcg_pool_0_0f;
    dVar6 = (double)lbl_821CA460;
    do {
      bVar1 = *(unsigned char *)(uVar4 + *(int *)(param_2 + 0x19c));
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 1) != 0) {
          cVar3 = fn_827F22D0(*(unsigned int *)(*(int *)(param_2 + 400) + iVar5));
          if (cVar3 != '\0') {
            fn_8255F788(dVar7,*(unsigned int *)(*(int *)(param_2 + 400) + iVar5));
            if (uVar4 != 0) {
              fn_827F5708(dVar7,*(unsigned int *)(*(int *)(param_2 + 0x198) + iVar5 + -4));
            }
            *(unsigned char *)(uVar4 + *(int *)(param_2 + 0x19c)) = 0;
          }
        }
      }
      else {
        if (*(int *)(*(int *)(*(int *)(param_2 + 400) + iVar5) + 0x114) != 0) {
          iVar2 = fn_8255FA88();
          if (iVar2 == 0) goto LAB_8255482c;
        }
        if (uVar4 != 0) {
          fn_827F5730(dVar7,dVar6,*(unsigned int *)(*(int *)(param_2 + 0x198) + iVar5 + -4));
          fn_8255F788(dVar6,*(unsigned int *)(*(int *)(param_2 + 400) + iVar5));
          *(unsigned char *)(uVar4 + *(int *)(param_2 + 0x19c)) = 1;
        }
      }
LAB_8255482c:
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(unsigned int *)(param_2 + 0x18c));
  }
  fn_827F0670(param_1,param_2);
  return;
}

