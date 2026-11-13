extern unsigned int *auStack_40;
extern int fn_82E24948();
extern int fn_82E25140();
extern int fn_82E49558();
extern int fn_82E4B6C8();


unsigned __int64
fn_82E253D0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned int auStack_40;
  
  puVar2 = (unsigned int *)(param_1 + 0x104);
  if (*(int *)(param_1 + 0x104) == 0) {
    *(int *)(param_1 + 0x110) = *param_2;
    *(int *)(param_1 + 0x114) = param_2[1];
    *(int *)(param_1 + 0x118) = param_2[2];
    if (*param_2 == 0) {
      if ((param_2[1] == 0) || (param_2[2] == 0)) goto LAB_82e254e0;
      uVar1 = fn_82E49558(puVar2);
    }
    else {
      uVar1 = fn_82E4B6C8(3,4,0,*param_2,puVar2);
    }
    if (-1 < (int)uVar1) {
      uVar1 = fn_82E24948(param_1,param_3,param_4,param_5,param_6);
      if (-1 < (int)uVar1) {
        auStack_40 = 0;
        uVar1 = fn_82E25140(param_1);
        if ((-1 < (int)uVar1) &&
           (uVar1 = (**(int (***)())(**(int **)(param_1 + 0x108) + 0x14))
                              (*(int **)(param_1 + 0x108),0,&auStack_40), -1 < (int)uVar1)) {
          uVar1 = (**(int (***)())(*(int *)*puVar2 + 0x1c))((int *)*puVar2,auStack_40);
        }
      }
    }
  }
  else {
LAB_82e254e0:
    uVar1 = 0xffffffff8000ffff;
  }
  return uVar1;
}

