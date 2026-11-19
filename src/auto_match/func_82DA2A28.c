extern char lbl_82141900[];
extern char lbl_8323E170[];
extern int fn_82CFF8D0();
extern int fn_82D9A4A8();


void fn_82DA2A28(int self,int *param_2)

{
  int uVar1;
  
  fn_82D9A4A8(self,param_2,lbl_8323E170);
  if ((*(int *)(self + 0x168) & (int)0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(self + 0x160),*(unsigned int *)(self + 0x168) << 2);
    (*(int (**)())(*param_2 + 0x14))
              (param_2,3,"OverlapPtr",*(unsigned int *)(self + 0x160),
               *(int *)(self + 0x164) << 2,uVar1);
  }
  return;
}

