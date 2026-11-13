extern unsigned fn_82930318(unsigned);
extern unsigned fn_829304E0(unsigned,unsigned,unsigned,const char *);
extern unsigned fn_82932B38(unsigned);
extern unsigned fn_82933088(unsigned,unsigned,unsigned,unsigned,unsigned,unsigned,unsigned);


unsigned int fn_82980818(int param_1)

{
  unsigned iVar2;
  unsigned int uVar1;
  unsigned iVar3;
  
  if (*(unsigned *)(param_1 + 0x20) != 0) {
    iVar2 = fn_82930318(0x34);
    iVar2 = iVar2 ? fn_82932B38(iVar2) : 0;
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 0x10) = 6;
      *(unsigned int *)(iVar2 + 0x30) = *(unsigned int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      uVar1 = fn_82930318(0x50);
      iVar3 = uVar1 ? fn_82933088(uVar1,0,0,0,0,1,param_1 + 0x28) : 0;
      if (iVar3 != 0) {
        *(int *)(iVar2 + 0x18) = iVar3;
        uVar1 = fn_82930318(0x14);
        uVar1 = uVar1 ? fn_829304E0(uVar1,iVar2,0,"Stmts") : 0;
        if ((uVar1) != 0) {
          return uVar1;
        }
      }
    }
  }
  return 0;
}

