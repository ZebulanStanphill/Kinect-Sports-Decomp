typedef unsigned char bool;
extern unsigned int *auStack_70;
extern int fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern void fn_824B8538(void);


bool fn_824BC468(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned char uVar11;
  int iVar10;
  unsigned int auStack_70;
  
  iVar8 = *(int *)(param_2 + 0x100);
  uVar1 = *(unsigned int *)(iVar8 + 0x8e8);
  uVar2 = *(unsigned int *)(iVar8 + 0x8e4);
  uVar3 = *(unsigned int *)(iVar8 + 0x120);
  uVar4 = *(unsigned int *)(iVar8 + 0x8d4);
  uVar5 = *(unsigned int *)(iVar8 + 0x8e0);
  uVar6 = *(unsigned int *)(iVar8 + 0x8ec);
  uVar7 = *(unsigned int *)(iVar8 + 0x8d8);
  iVar8 = fn_8245AE18();
  iVar10 = -0x7fffbffb;
  iVar9 = fn_8245B1F0();
  if (iVar9 != 0) {
    fn_8245AF50(iVar8,0x20);
    if (*(int *)(iVar8 + 0x14) == 0) {
      *(unsigned int *)(iVar8 + 0x14) = 1;
    }
    uVar11 = fn_823AB478(param_2);
    fn_8245B050(iVar8,uVar11,4);
    fn_8245B050(iVar8,uVar5 & 0xff,4);
    fn_8245B050(iVar8,uVar4 & 0xff,4);
    fn_8245B050(iVar8,uVar6 & 0xff,4);
    fn_8245B100(iVar8);
    auStack_70 = uVar1;
    fn_8245B168(iVar8,&auStack_70,4);
    auStack_70 = uVar2;
    fn_8245B168(iVar8,&auStack_70,4);
    auStack_70 = uVar3;
    fn_8245B168(iVar8,&auStack_70,4);
    auStack_70 = uVar7;
    fn_8245B168(iVar8,&auStack_70,4);
    iVar10 = fn_8245AFC0(iVar8,fn_824B8538,param_1);
  }
  return iVar10 == 0;
}

