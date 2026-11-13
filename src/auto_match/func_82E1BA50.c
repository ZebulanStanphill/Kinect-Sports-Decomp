extern unsigned int *auStack_30;
extern int fn_82CEB3C8();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();
extern int fn_82E174C8();
extern int fn_82E1ACB8();
extern int fn_82E1B6F8();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82E1BA50(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned char auStack_30 [24];
  
  uVar1 = (**(int (***)())(*param_1 + 0x2c))();
  if (((uVar1 & 0xffffffff) == 0) && (param_1[7] != 0)) {
    uVar2 = fn_82D00450(param_1 + 0xb,param_2,param_2);
    uVar1 = fn_82E174C8(param_1,uVar2);
    if ((uVar1 & 0xffffffff) != 0) {
      puVar3 = (unsigned int *)fn_82CEB3C8();
      if ((*puVar3 & 1) == 0) {
        fn_82D00388(auStack_30,(unsigned char)*puVar3 & 1);
        fn_82E1B6F8(param_1 + 8,uVar1,param_1,param_1 + 0xf,auStack_30);
        fn_82E1ACB8(auStack_30);
        (**(int (***)())(*param_1 + 0x28))(param_1,auStack_30);
        fn_82D003F0(auStack_30);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

