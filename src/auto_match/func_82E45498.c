extern unsigned int *auStack_30;
extern int fn_82E451C8();
extern int fn_82E50BE8();


unsigned __int64 fn_82E45498(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30;
  
  uVar3 = 0;
  auStack_30 = 0;
  if (param_1 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_1 = 0;
    uVar1 = fn_82E50BE8(0x108,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2 = (unsigned int *)fn_82E451C8(uVar1,&auStack_30);
      uVar3 = (unsigned __int64)auStack_30;
    }
    if (puVar2 == (unsigned int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else if (((int)uVar3 < 0) ||
            (uVar3 = (**(int (***)())*puVar2)(puVar2,0xffffffff8215464c,param_1), (__int64)uVar3 < 0))
    {
      (**(int (***)())puVar2[4])(puVar2 + 4,1);
    }
  }
  return uVar3;
}

