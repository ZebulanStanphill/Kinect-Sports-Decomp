extern int fn_82E39C50();
extern int fn_82E59158();
extern int fn_82F3CCA8();


__int64 fn_82F3CEA8(int param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  int *piStack_50;
  unsigned char *pbStack_4c;
  unsigned char *pbStack_48;
  unsigned char * apbStack_44;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 != (int *)0x0) {
    pbStack_48 = (unsigned char *)0x0;
    apbStack_44 = (unsigned char *)0x0;
    lVar2 = (**(int (***)())(*param_2 + 0x14))(param_2,&pbStack_48,&apbStack_44);
    if (lVar2 < 0) {
      return lVar2;
    }
    if ((param_3 != (unsigned int *)0x0) &&
       ((apbStack_44 == (unsigned char *)0x0 || (pbStack_48 != (unsigned char *)0x0)))) {
      *param_3 = 0;
      pbVar4 = (unsigned char *)0x0;
      if (*(int *)(param_1 + 0x160) == 0) {
        if (apbStack_44 < (unsigned char *)0x1e) {
          *param_3 = 0x1e;
          return -0x3ff2c94f;
        }
        lVar2 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0x20))
                          (*(int **)(param_1 + 0x54),0xffffffff8202e618);
        pbStack_4c = pbStack_48;
        fn_82E39C50(param_1 + 0x10,&pbStack_4c);
        uVar3 = ((unsigned __int64)pbStack_4c[7] << 0x18 | (unsigned __int64)pbStack_4c[6] << 0x10 |
                 (unsigned __int64)pbStack_4c[5] << 8 | (unsigned __int64)pbStack_4c[4]) << 0x20 |
                (unsigned __int64)pbStack_4c[3] << 0x18 | (unsigned __int64)pbStack_4c[2] << 0x10 |
                (unsigned __int64)pbStack_4c[1] << 8 | (unsigned __int64)*pbStack_4c;
        *(unsigned __int64 *)(param_1 + 0x20) = uVar3;
        if (0x9fffff < uVar3) {
          return -0x3ff2c566;
        }
        *(unsigned int *)(param_1 + 0x50) =
             (unsigned int)pbStack_4c[0xb] << 0x18 | (unsigned int)pbStack_4c[10] << 0x10 | (unsigned int)pbStack_4c[9] << 8
             | (unsigned int)pbStack_4c[8];
        *(unsigned char *)(param_1 + 0x4c) = pbStack_4c[0xc];
        bVar1 = pbStack_4c[0xd];
        *(unsigned char *)(param_1 + 0x4d) = bVar1;
        if (bVar1 != 2) {
          return -0x3ff2c566;
        }
        pbVar4 = (unsigned char *)0x1e;
        *(unsigned int *)(param_1 + 0x160) = 1;
        if (0x1e < uVar3) {
          lVar2 = 0x400d3a98;
        }
      }
      piStack_50 = (int *)0x0;
      if (pbVar4 < apbStack_44) {
        pbStack_4c = (unsigned char *)0x0;
        if (pbVar4 == (unsigned char *)0x0) {
          piStack_50 = param_2;
          (**(int (***)())(*param_2 + 4))(param_2);
        }
        else {
          lVar2 = fn_82E59158(param_2,pbVar4,&piStack_50);
          if (lVar2 < 0) goto LAB_82f3d094;
        }
        lVar2 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0x28))
                          (*(int **)(param_1 + 0x54),*(unsigned int *)(param_1 + 0xc),piStack_50,
                           &pbStack_4c);
        if (-1 < lVar2) {
          pbVar4 = pbStack_4c + (int)pbVar4;
        }
      }
LAB_82f3d094:
      *param_3 = pbVar4;
      if ((int)lVar2 == 0) {
        lVar2 = fn_82F3CCA8(param_1);
      }
      if (piStack_50 != (int *)0x0) {
        (**(int (***)())(*piStack_50 + 8))(piStack_50);
        return lVar2;
      }
      return lVar2;
    }
  }
  return -0x7ff8ffa9;
}

