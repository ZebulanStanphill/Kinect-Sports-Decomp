extern int fn_82C27A68();
extern int fn_82C27F48();
extern int fn_82C280E8();
extern int fn_82C297F8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;


unsigned __int64 fn_82C28608(int param_1,__int64 *param_2,int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  int iStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iStack_48 = 0;
  iStack_44 = 0;
  *param_3 = 0;
  *param_4 = 0;
  piStack_4c = (int *)0x0;
  aiStack_40[0] = 0;
  iStack_50 = 0;
  uVar3 = fn_82C27A68(param_1,param_2,&iStack_44);
  if (-1 < (int)uVar3) {
    if (iStack_44 == 0) {
      uVar3 = 0xffffffff80500009;
    }
    else {
      if (*(int *)((int)param_2 + 0x1c) != 0) {
        uVar3 = fn_82C297F8(param_1,*param_2,&piStack_4c,&iStack_50);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (iStack_50 == 0) {
          if (*(int *)(param_2 + 1) != 0) {
            uVar3 = fn_82C280E8(param_1,param_2[2],aiStack_40,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if (iStack_50 != 0) {
              *(int *)(aiStack_40[0] + 4) = *(int *)(aiStack_40[0] + 4) + -1;
            }
          }
          lVar4 = *param_2;
          uVar3 = fn_82C280E8(param_1,lVar4,&piStack_4c,&iStack_50);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if (iStack_50 == 0) {
            *(__int64 *)(iVar1 + 0x30) = lVar4;
            *(unsigned int *)(iVar1 + 0x38) = 1;
            uVar3 = (*(int (**)())**(unsigned int **)(iVar1 + 0x4c))(*(unsigned int **)(iVar1 + 0x4c));
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = (**(int (***)())(*(int *)(iVar1 + 0x4c) + 4))(*(int *)(iVar1 + 0x4c),&iStack_48);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            *(unsigned __int64 *)(iVar1 + 0x28) =
                 (unsigned __int64)*(unsigned int *)(iStack_48 + 4) + *(__int64 *)(iStack_48 + 8);
            uVar3 = fn_82C27F48(param_1,iStack_48);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_82C280E8(param_1,*param_2,&piStack_4c,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
          }
        }
        piStack_4c[1] = piStack_4c[1] + 1;
        uVar5 = *(unsigned int *)((int)param_2 + 0x1c);
        lVar4 = *(__int64 *)(*piStack_4c + 8);
        uVar2 = *(unsigned int *)(*piStack_4c + 4);
        if (((unsigned __int64)uVar2 - *param_2) + lVar4 < (unsigned __int64)uVar5) {
          uVar5 = ((int)lVar4 - (int)*param_2) + uVar2;
        }
        *param_4 = uVar5;
        *(unsigned int *)((int)param_2 + 0x1c) = *(int *)((int)param_2 + 0x1c) - uVar5;
        *param_3 = ((int)*param_2 - (int)*(unsigned __int64 *)((int *)*piStack_4c + 2)) +
                   *(int *)*piStack_4c;
        param_2[2] = *param_2;
        *(unsigned int *)(param_2 + 1) = 1;
        *param_2 = (unsigned __int64)*param_4 + *param_2;
        if (*(int *)((int)param_2 + 0x1c) != 0) {
          return uVar3;
        }
      }
      uVar3 = 0x500001;
    }
  }
  return uVar3;
}

