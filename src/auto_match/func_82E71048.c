typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern int fn_82E6F498();
extern int fn_82E6FC88();
extern unsigned int uStack_88;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


__int64 fn_82E71048(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned int param_5,__int64 *param_6)

{
  bool bVar1;
  __int64 lVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int *piStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int auStack_90;
  unsigned __int64 uStack_88;
  __int64 lStack_80;
  __int64 alStack_78 [15];
  
  piStack_a0 = (int *)0x0;
  uStack_98 = 0;
  bVar1 = false;
  lVar2 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x3c))(*(int **)(param_1 + 0x58),&uStack_98);
  piVar3 = piStack_a0;
  if (-1 < lVar2) {
    if ((param_4 & 0xffffffff) < (unsigned __int64)uStack_98) {
      do {
        if (piStack_a0 != (int *)0x0) {
          (**(int (***)())(*piStack_a0 + 8))();
          piStack_a0 = (int *)0x0;
        }
        uStack_94 = 0;
        uStack_88 = 0;
        uStack_9c = 0;
        lStack_80 = 0;
        lVar2 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),param_4,&piStack_a0);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        if (piStack_a0 == (int *)0x0) {
          lVar2 = -0x3ff2c945;
          piVar3 = (int *)0x0;
          bVar1 = false;
          break;
        }
        lVar2 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x50))
                          (*(int **)(param_1 + 0x58),piStack_a0,&uStack_88);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        uVar5 = (param_2 & 0xffffffff) - (uStack_88 & 0xffffffff);
        lVar2 = (**(int (***)())(*piStack_a0 + 0x24))(piStack_a0,&uStack_9c);
        piVar3 = piStack_a0;
        if (lVar2 < 0) goto LAB_82e712c0;
        if ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_9c) {
          lVar2 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x4c))
                            (*(int **)(param_1 + 0x58),piStack_a0,&lStack_80);
          piVar3 = piStack_a0;
          if ((lVar2 < 0) ||
             (lVar2 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x44))
                                (*(int **)(param_1 + 0x58),&uStack_94), piVar3 = piStack_a0,
             lVar2 < 0)) goto LAB_82e712c0;
          lVar4 = *(__int64 *)(param_1 + 0x30) + (unsigned __int64)uStack_94 + lStack_80;
          if ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_9c) {
            do {
              alStack_78[0] = 0;
              auStack_90 = 0;
              lVar2 = (**(int (***)())(*piStack_a0 + 0x2c))
                                (piStack_a0,uVar5,*(unsigned short *)(param_1 + 8),param_3,alStack_78);
              piVar3 = piStack_a0;
              if (lVar2 < 0) goto LAB_82e712c0;
              lVar6 = alStack_78[0] + lVar4;
              lVar2 = fn_82E6FC88(param_1,lVar6);
              piVar3 = piStack_a0;
              if ((lVar2 < 0) ||
                 (lVar2 = fn_82E6F498(param_1,lVar6,&auStack_90), piVar3 = piStack_a0, lVar2 < 0))
              goto LAB_82e712c0;
              if (auStack_90 != param_5) {
                bVar1 = true;
                param_5 = auStack_90;
                goto LAB_82e71274;
              }
              uVar5 = uVar5 + 1;
              param_2 = param_2 + 1;
            } while ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_9c);
          }
          param_4 = param_4 + 1;
        }
        param_4 = param_4 + 1;
        piVar3 = piStack_a0;
      } while ((param_4 & 0xffffffff) < (unsigned __int64)uStack_98);
    }
LAB_82e71274:
    if (-1 < (int)lVar2) {
      if (bVar1) {
        alStack_78[0] = 0;
        lVar2 = (**(int (***)())(*piVar3 + 0x20))
                          (piVar3,*(unsigned short *)(param_1 + 8),param_3,alStack_78);
        piVar3 = piStack_a0;
        if (-1 < lVar2) {
          *param_6 = (unsigned __int64)param_5 + alStack_78[0];
        }
      }
      else {
        *param_6 = -1;
      }
    }
  }
LAB_82e712c0:
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 8))();
  }
  return lVar2;
}

