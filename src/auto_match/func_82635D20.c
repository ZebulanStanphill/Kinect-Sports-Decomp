extern unsigned int *auStack_10;
extern int fn_82637238();


void fn_82635D20(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int auStack_10;
  
  iVar1 = *param_1;
  if ((*(unsigned int *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) >> 2 & 1) == 0) {
    auStack_10 = (unsigned int)(((param_3 & 0xf) << 4 | param_2 & 0xf) << 8) | (unsigned int)param_4 & 0xff;
    fn_82637238(param_1 + iVar1 * 0x9b4 + 0x50,&auStack_10,param_1 + iVar1 * 0x9b4 + 0x18);
  }
  else {
    auStack_10 =
         (unsigned int)(((((param_2 & 0xf) << 4 | param_3 & 0xf) << 9 |
                 param_4 & 0x100 | (param_4 & 0x1fff) << 0x11) << 2 | param_4 & 0x200) << 5);
    fn_82637238(param_1 + iVar1 * 0x9b4 + 0x47,&auStack_10,param_1 + iVar1 * 0x9b4 + 0x18);
  }
  return;
}

