extern unsigned int *auStack_40;
extern int fn_82834EA0();
extern int fn_82835128();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82875368(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned char auStack_40 [32];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0xc;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_82834EA0(auStack_40,param_1,param_2 * 0xc + (unsigned __int64)*param_1);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_82835128(param_1,param_2 - (__int64)(int)uVar1);
    puVar2 = (unsigned int *)param_1[1];
    for (lVar3 = param_2 - (__int64)((int)((int)puVar2 - *param_1) / 0xc); lVar3 != 0;
        lVar3 = lVar3 + -1) {
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar2 = puVar2 + 3;
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0xc) * 0xc + param_1[1];
  }
  return;
}

