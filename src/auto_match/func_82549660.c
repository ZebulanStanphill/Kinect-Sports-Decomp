extern unsigned int *puRam83296d40;
extern unsigned int *auStack_40;
extern int fn_82522ED8();
extern int fn_82549610();
extern int fn_8259C738();
extern int fn_825B4898();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82811460();
extern int fn_82A1BB18();
extern int fn_82A1F238();
extern int iRam83296d48;
extern unsigned int uRam83296d44;


void fn_82549660(unsigned int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int auStack_40;

  fn_82549610(&auStack_40,0xffffffff83296d4c);
  puVar1 = puRam83296d40;
  if (puRam83296d40 != (unsigned int *)0x0) {
    uVar6 = 0;
    if (*puRam83296d40 != 0) {
      iVar5 = 0;
      do {
        fn_82522ED8(*(unsigned int *)(puVar1[7] + iVar5 + 8));
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < *puVar1);
    }
    fn_82522ED8(puVar1[7]);
    fn_82A1F238(puVar1[3]);
    puVar1[3] = 0;
    fn_8265CA20(puVar1);
    puRam83296d40 = (unsigned int *)0x0;
  }
  if ((param_1 == 0) || ((param_2 & 0xffffffff) == 0)) goto LAB_82549780;
  lVar2 = fn_82811460(param_1 >> 0xc);
  iVar5 = (int)param_2;
  uVar4 = (__int64)(0x1000 << ((unsigned int)lVar2 & 0x3f)) * (__int64)iVar5;
  if ((uVar4 & 0xffffff) == 0) {
    uVar4 = 0xffffffff80000000;
LAB_8254973c:
    uVar4 = uVar4 | 4;
  }
  else {
    if ((uVar4 & 0xffff) == 0) {
      uVar4 = 0x20000000;
      goto LAB_8254973c;
    }
    uVar4 = 4;
  }
  uVar3 = fn_8265C9E0(0x20);
  if ((uVar3 & 0xffffffff) == 0) {
    puRam83296d40 = (unsigned int *)0x0;
    uRam83296d44 = param_1;
    iRam83296d48 = iVar5;
  }
  else {
    puRam83296d40 = (unsigned int *)fn_825B4898(uVar3,lVar2 + 1,param_2,uVar4);
    uRam83296d44 = param_1;
    iRam83296d48 = iVar5;
  }
LAB_82549780:
  fn_82A1BB18();
  fn_8259C738(auStack_40);
  return;
}
