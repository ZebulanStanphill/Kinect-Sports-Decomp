typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_840;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826BD6B0();
extern int fn_82799DA8();
extern int fn_82799E00();
extern int fn_8279A130();
extern int fn_827A3A50();
extern unsigned int lbl_831E7E64;


void fn_82723288(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  __int64 lVar9;
  int *piVar11;
  unsigned int *apuStack_850 [4];
  unsigned char auStack_840 [2048];
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar7 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar7 == 4) {
      piVar11 = (int *)(*(int *)(param_1 + 8) + -0x68);
      if (*(int *)(param_1 + 8) == 0) {
        piVar11 = (int *)0x0;
      }
      if (((int *)piVar11[0x34] == (int *)0x0) || (bVar4 = true, *(int *)piVar11[0x34] == 0)) {
        bVar4 = false;
      }
      if (((!bVar4) && (0 < *(int *)(param_1 + 0x1c))) && (*(int *)(piVar11[0x28] + 0x114) != 0)) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_850,uVar5,uVar1,0xffffffffffffffff,0);
        iVar7 = *(int *)(*(int *)(piVar11[0x28] + 8) + 0x1c);
        iVar2 = *(int *)(*(int *)(piVar11[0x28] + 8) + 0x18);
        uVar6 = fn_82693A98(apuStack_850);
        iVar3 = *(int *)(*(int *)(piVar11[0x28] + 0x114) + 8);
        uVar8 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c);
        if ((unsigned __int64)*(unsigned int *)(iVar3 + 0x20) <= (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c)) {
          uVar8 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x20);
        }
        uVar10 = *(unsigned int *)(iVar3 + 0x1c);
        if (*(unsigned int *)(iVar3 + 0x1c) <= *(unsigned int *)(iVar3 + 0x20)) {
          uVar10 = *(unsigned int *)(iVar3 + 0x20);
        }
        if ((uVar6 & 0xffffffff) < 0x400) {
          fn_826BD6B0(auStack_840,*apuStack_850[0],0xffffffffffffffff);
          fn_8279A130(piVar11[0x28],auStack_840,uVar8,uVar10,0xffffffffffffffff);
        }
        else {
          uVar5 = fn_8267B890(lbl_831E7E64,(uVar6 + 1 & 0x7fffffff) << 1,0);
          fn_826BD6B0(uVar5,*apuStack_850[0],0xffffffffffffffff);
          fn_8279A130(piVar11[0x28],uVar5,uVar8,uVar10,0xffffffffffffffff);
          fn_8267BE38(uVar5);
        }
        lVar9 = uVar8 + uVar6;
        fn_827A3A50(*(unsigned int *)(piVar11[0x28] + 0x114),lVar9,0);
        if (iVar2 != 0) {
          fn_82799E00(piVar11[0x28],iVar2,uVar8,lVar9);
        }
        if (iVar7 != 0) {
          fn_82799DA8(piVar11[0x28],iVar7,uVar8,lVar9);
        }
        iVar7 = (**(int (***)())(*piVar11 + 0x40))(piVar11);
        if (iVar7 != 0) {
          *(unsigned int *)(iVar7 + 0xb00) = *(unsigned int *)(iVar7 + 0xb00) | 0x400;
        }
        uVar10 = apuStack_850[0][2];
        apuStack_850[0][2] = (int)((unsigned __int64)uVar10 - 1);
        if ((unsigned __int64)uVar10 - 1 == 0) {
          fn_826944C8(apuStack_850[0]);
        }
      }
    }
  }
  return;
}

