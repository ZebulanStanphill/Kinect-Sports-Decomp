typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_3c;
extern int fn_82953B18();
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8295F4B0(int *param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  uVar2 = *(unsigned int *)param_1[0x41] & 0xfffff;
  uVar3 = (**(int (***)())(*param_1 + 0x130))(param_1,4);
  uVar3 = fn_8295D0A8(param_1,uVar3);
  if ((((-1 < (int)uVar3) &&
       (uVar3 = (**(int (***)())(*param_1 + 0x140))
                          (param_1,*(unsigned int *)
                                    (**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),&uStack_50,
                           &uStack_44,&uStack_48), -1 < (int)uVar3)) &&
      (uVar3 = (**(int (***)())(*param_1 + 0x144))
                         (param_1,*(unsigned int *)(param_1[0x41] + 0x10),uVar2,&uStack_4c,uStack_48),
      -1 < (int)uVar3)) &&
     (uVar3 = (**(int (***)())(*param_1 + 0x138))(param_1,uStack_50,uStack_4c,uStack_44),
     -1 < (int)uVar3)) {
    uVar5 = 0;
    do {
      piVar6 = (int *)(uVar5 * uVar2 * 4 + ((unsigned int *)param_1[0x41])[2]);
      if ((uVar5 != 1) || (bVar1 = true, (*(unsigned int *)param_1[0x41] & 0xfff00000) != 0x70400000)) {
        bVar1 = false;
      }
      uVar3 = (**(int (***)())(*param_1 + 0x148))
                        (param_1,*(unsigned int *)(*piVar6 * 4 + param_1[5]),&uStack_50,&uStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar3 = (**(int (***)())(*param_1 + 0x14c))(param_1,piVar6,uVar2,uStack_4c,&auStack_3c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (bVar1) {
        uVar4 = fn_82953B18(uStack_50);
      }
      else {
        uVar4 = (unsigned __int64)uStack_50;
      }
      uVar3 = (**(int (***)())(*param_1 + 0x13c))(param_1,uVar4,auStack_3c,uStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    uVar3 = (**(int (***)())(*param_1 + 0x134))(param_1);
    if ((-1 < (int)uVar3) && (uVar3 = fn_829548C8(param_1), -1 < (int)uVar3)) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

