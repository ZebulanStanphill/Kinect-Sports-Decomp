typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82811500();
extern int fn_82811500();


void fn_82802488(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;

  uVar8 = 0;
  lVar6 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      if (param_4 == 0) {
        uVar4 = 0;
        if (*(short *)(param_2 + 10) != 0) {
          do {
            uVar2 = (*(unsigned int *)((uVar8 >> 3 & 0x1ffffffc) + param_2 + 0x10) & 3 << (uVar8 & 0x1f)) >>
                    (uVar8 & 0x1f);
            if ((uVar2 == 2) || (uVar2 == 3)) {
              fn_82811500(param_3,lVar6);
            }
            else {
              fn_82811500(param_3,lVar6);
            }
            uVar4 = uVar4 + 1;
            uVar8 = uVar8 + 2;
            lVar6 = lVar6 + 1;
          } while (uVar4 < *(unsigned short *)(param_2 + 10));
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1c);
        bVar3 = false;
        if ((iVar1 == 0) || ((unsigned __int64)*(unsigned short *)(iVar5 + iVar1) == (uVar7 & 0xffffffff))) {
          iVar5 = iVar5 + 2;
          uVar4 = 0;
          if (*(unsigned short *)(param_2 + 10) != 0) {
            do {
              uVar2 = (*(unsigned int *)((uVar8 >> 3 & 0x1ffffffc) + param_2 + 0x10) & 3 << (uVar8 & 0x1f))
                      >> (uVar8 & 0x1f);
              if ((uVar2 == 2) || (uVar2 == 3)) {
                bVar3 = true;
              }
              uVar4 = uVar4 + 1;
              uVar8 = uVar8 + 2;
            } while (uVar4 < *(unsigned short *)(param_2 + 10));
            if (bVar3) {
              fn_82811500(param_3,uVar7);
              goto LAB_828025d8;
            }
          }
        }
        if (iVar1 == 0) {
          fn_82811500(param_3,uVar7);
        }
      }
LAB_828025d8:
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 8));
  }
  return;
}
