#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_4c;
extern int fn_82E26F18();
extern int fn_82E27DB8();
extern unsigned int uStack_50;


void fn_82E28318(int *param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, __int64 param_8, unsigned int in_stack_00000054)

{
  int iVar1;

  unsigned int uStack_50;
  unsigned int auStack_4c;

  iVar1 = (**(int (***)())(*param_1 + 0x50))();
  if ((-1 < iVar1) &&
     (iVar1 = (**(int (***)())(*param_1 + 0x60))(param_1,0xffffffff82153478,0xffffffff821537b8),
     -1 < iVar1)) {
    iVar1 = fn_82E27DB8(param_1,param_4,param_2,param_3,in_stack_00000054);
    if ((((-1 < iVar1) &&
         (((param_7 & 0xffffffff) == 0 ||
          (iVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153698,param_7), -1 < iVar1)))
         ) && (((param_6 & 0xffffffff) == 0 ||
               (iVar1 = (**(int (***)())(*param_1 + 0x54))(param_1,0xffffffff82153688,param_6),
               -1 < iVar1)))) && ((0 < param_8 && (param_8 < 100000000)))) {
      fn_82E26F18(param_8,&auStack_4c,&uStack_50);
      (**(int (***)())(*param_1 + 0x58))(param_1,0xffffffff82153588,CONCAT44(auStack_4c,uStack_50));
    }
  }
  return;
}
