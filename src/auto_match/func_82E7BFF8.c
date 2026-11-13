#define true 1
extern unsigned int *auStack_70;
extern int fn_82E7BC68();
extern int fn_82E7BF78();
extern int fn_82E7E7E0();
extern int fn_82E7EC68();
extern int fn_82E7F0F8();
extern int fn_82E807D0();
extern int fn_82EEEAD0();
extern unsigned int uStack_80;


unsigned __int64 fn_82E7BFF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int **ppuVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int ***pppuVar4;
  unsigned int ***pppuVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_80;
  unsigned int *puStack_7c;
  unsigned int **appuStack_78 [2];
  unsigned short auStack_70 [4];
  unsigned int **ppuStack_68;
  unsigned int **ppuStack_64;
  
  uStack_80 = 0;
  fn_82E7F0F8(auStack_70);
  puStack_7c = (unsigned int **)0x0;
  pppuVar4 = (unsigned int ***)0x0;
  uVar6 = 2;
  pppuVar5 = (unsigned int ***)0x0;
  uVar2 = fn_82E7BC68(param_1,param_2,param_3);
  uVar2 = -(unsigned __int64)(uVar2 != 0xffffffffc00d3e8d) & uVar2;
  if (-1 < (int)uVar2) {
    uVar2 = fn_82E7EC68(param_4,&uStack_80);
    if ((-1 < (__int64)uVar2) && (uVar3 = 0, uStack_80 != 0)) {
      while( true ) {
        uVar2 = fn_82E7E7E0(auStack_70);
        if ((__int64)uVar2 < 0) break;
        uVar2 = fn_82E807D0(param_4,uVar3,auStack_70);
        ppuVar1 = ppuStack_68;
        if ((__int64)uVar2 < 0) break;
        if (auStack_70[0] < 0x14) {
          if (auStack_70[0] == 0x13) {
LAB_82e7c194:
            uVar6 = 0;
            pppuVar4 = (unsigned int ***)0x4;
            pppuVar5 = &ppuStack_68;
          }
          else {
            if (auStack_70[0] != 2) {
              if (auStack_70[0] == 3) goto LAB_82e7c194;
              if (auStack_70[0] == 8) goto LAB_82e7c1f4;
              if (auStack_70[0] == 0xb) {
                uVar6 = 3;
                puStack_7c = (unsigned int *)((unsigned int)LZCOUNT((((unsigned __int64)(ppuStack_68) >> 0) & 0xFFFF) + 1) >> 5);
                pppuVar5 = (unsigned int ***)&puStack_7c;
                pppuVar4 = (unsigned int ***)0x4;
                goto LAB_82e7c0f0;
              }
              if (auStack_70[0] != 0x12) goto LAB_82e7c0e8;
            }
            uVar6 = 5;
            pppuVar5 = &ppuStack_68;
            pppuVar4 = (unsigned int ***)0x2;
          }
        }
        else if (auStack_70[0] < 0x14) {
LAB_82e7c0e8:
          uVar2 = 0xffffffffc00d36b2;
        }
        else if (auStack_70[0] < 0x16) {
LAB_82e7c21c:
          uVar6 = 4;
          pppuVar5 = &ppuStack_68;
          pppuVar4 = (unsigned int ***)0x8;
        }
        else if (auStack_70[0] == 0x1f) {
LAB_82e7c1f4:
          appuStack_78[0] = (unsigned int ***)0x0;
          uVar6 = 1;
          uVar2 = fn_82E7BF78(ppuStack_68,0xffffffffffffffff,appuStack_78);
          pppuVar5 = (unsigned int ***)ppuVar1;
          pppuVar4 = (unsigned int ***)appuStack_78[0];
        }
        else {
          if (auStack_70[0] == 0x40) goto LAB_82e7c21c;
          if (auStack_70[0] == 0x41) {
            uVar6 = 2;
            pppuVar5 = (unsigned int ***)ppuStack_64;
            pppuVar4 = (unsigned int ***)ppuStack_68;
          }
          else {
            if (auStack_70[0] != 0x48) goto LAB_82e7c0e8;
            uVar6 = 6;
            pppuVar4 = (unsigned int ***)0x10;
            pppuVar5 = (unsigned int ***)ppuVar1;
          }
        }
LAB_82e7c0f0:
        if ((int)uVar2 < 0) break;
        uVar2 = fn_82EEEAD0(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                  *(int *)(param_1 + 0x20) + 8,param_2,param_3,uVar6,0,pppuVar5,
                                  pppuVar4,0);
        if (((__int64)uVar2 < 0) ||
           (uVar3 = uVar3 + 1, (unsigned __int64)uStack_80 <= (uVar3 & 0xffffffff))) break;
      }
    }
  }
  fn_82E7E7E0(auStack_70);
  return uVar2;
}

