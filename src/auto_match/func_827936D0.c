typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_138;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_8267BF50();
extern int fn_8267C488();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278B290();
extern int fn_8278BD68();
extern int fn_8278C6C0();
extern int fn_8278D688();
extern int fn_8278FD18();
extern int fn_82791070();
extern int fn_82793530();
extern unsigned int iStack_12c;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_13a;
extern unsigned int uStack_13c;
extern unsigned int uStack_13e;
extern unsigned int uStack_140;
extern unsigned int uStack_142;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;


void fn_827936D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char cVar5;
  unsigned char *puVar4;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned char **ppuStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned short uStack_144;
  unsigned short uStack_142;
  unsigned short uStack_140;
  unsigned short uStack_13e;
  unsigned short uStack_13c;
  unsigned short uStack_13a;
  unsigned int auStack_138 [2];
  int *piStack_130;
  int iStack_12c;
  unsigned char ** appuStack_120;
  unsigned char auStack_100 [48];
  unsigned char auStack_d0 [48];
  unsigned char auStack_a0 [96];
  
  uVar12 = param_5 - param_4;
  fn_82791070(&piStack_130,param_1,param_4,auStack_138);
  uVar3 = fn_8267BF50(param_1);
  fn_826FDED0(auStack_100,uVar3);
  uStack_148 = 0;
  uStack_144 = 0;
  iVar7 = 0;
  uStack_142 = 0;
  uStack_140 = 0;
  iVar8 = 0;
  uStack_13e = 0;
  uStack_13c = 0;
  uStack_13a = 0;
  uStack_14c = 1;
  ppuStack_150 = &lbl_82010C6C;
  if ((uVar12 & 0xffffffff) != 0) {
    uVar10 = (unsigned __int64)auStack_138[0];
    iVar9 = iStack_12c << 2;
    iVar11 = iStack_12c;
    do {
      if (((piStack_130 == (int *)0x0) || (iVar11 < 0)) || (bVar1 = false, piStack_130[1] <= iVar11)
         ) {
        bVar1 = true;
      }
      if (bVar1) break;
      iVar2 = *(int *)(*piStack_130 + iVar9);
      uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 4);
      if (uVar6 != 0) {
        cVar5 = fn_8278FD18(iVar2);
        if (cVar5 != '\0') {
          uVar6 = uVar6 - 1;
        }
      }
      uVar13 = uVar12;
      if ((uVar6 & 0xffffffff) <= (uVar12 & 0xffffffff)) {
        uVar13 = uVar6;
      }
      if ((uVar13 & 0xffffffff) == 0) break;
      bVar1 = iVar7 == 0;
      iVar7 = iVar7 + 1;
      if (bVar1) {
        uVar3 = fn_82793530(auStack_d0,iVar2,uVar10,uVar13 + uVar10);
        fn_82726AB8(auStack_100,uVar3);
        puVar4 = auStack_d0;
      }
      else {
        uVar3 = fn_82793530(auStack_a0,iVar2,uVar10,uVar13 + uVar10);
        uVar3 = fn_8278D688(auStack_d0,uVar3,auStack_100);
        fn_82726AB8(auStack_100,uVar3);
        fn_826FDF58(auStack_d0);
        puVar4 = auStack_a0;
      }
      fn_826FDF58(puVar4);
      if ((uVar10 == 0) && (*(int *)(iVar2 + 0xc) != 0)) {
        bVar1 = iVar8 == 0;
        iVar8 = iVar8 + 1;
        if (bVar1) {
          fn_8278BD68(&ppuStack_150);
        }
        else {
          uVar3 = fn_8278C6C0(&appuStack_120,*(int *)(iVar2 + 0xc),&ppuStack_150);
          fn_8278BD68(&ppuStack_150,uVar3);
          appuStack_120 = &lbl_82010C6C;
          fn_8278B290(&appuStack_120);
          fn_8267C488(&appuStack_120);
        }
      }
      uVar12 = uVar12 - uVar13;
      if (iVar11 < piStack_130[1]) {
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 4;
      }
    } while ((uVar12 & 0xffffffff) != 0);
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_82726AB8(param_2,auStack_100);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_8278BD68(param_3,&ppuStack_150);
  }
  ppuStack_150 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_150);
  fn_8267C488(&ppuStack_150);
  fn_826FDF58(auStack_100);
  return;
}

