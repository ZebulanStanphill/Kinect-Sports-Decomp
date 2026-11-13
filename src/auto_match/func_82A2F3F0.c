#define true 1
extern int fn_82A2D260();
extern int fn_82A2DDC0();
extern int fn_82F68CC0();


__int64 fn_82A2F3F0(int param_1,unsigned int param_2,int *param_3,int *param_4,unsigned int *param_5,int *param_6
                      )

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int aiStack_80 [32];
  
  if (param_2 < *(unsigned int *)(param_1 + 0x9c)) {
    lVar4 = fn_82A2DDC0(param_1,param_2,0,0,aiStack_80);
    if (-1 < lVar4) {
      iVar5 = 0;
      uVar2 = param_2 / 0xaa;
      iVar6 = 0;
      do {
        iVar1 = (param_2 % 0xaa) * 0x18 + aiStack_80[0];
        uVar3 = *(unsigned int *)(iVar1 + 0x14);
        param_2 = uVar3 & 0xffffff;
        if (*param_6 == 0) {
          if (uVar3 >> 0x1e == 2) {
            iVar5 = iVar5 + 1;
            uVar3 = uVar3 & 0x3fffffff | 0x40000000;
          }
          else {
            if (uVar3 >> 0x1e != 3) goto LAB_82a2f4b4;
            uVar3 = uVar3 & 0x3fffffff;
            iVar6 = iVar6 + 1;
          }
          *(unsigned int *)(iVar1 + 0x14) = uVar3;
        }
        else {
          *param_6 = 0;
          uVar3 = *(unsigned int *)(iVar1 + 0x14) >> 0x1e;
          if ((uVar3 != 2) && (uVar3 != 3)) {
LAB_82a2f4b4:
            lVar4 = -0x3fffffce;
            fn_82A2D260(param_1,0xffffffffc0000032);
LAB_82a2f4c8:
            uVar2 = aiStack_80[0] - *(int *)(param_1 + 0x34);
            iVar1 = (((int)uVar2 >> 0xc) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xfff) != 0)) * 8 +
                    *(int *)(param_1 + 0x30);
            *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
            *param_3 = iVar5;
            *param_4 = iVar6;
            *param_5 = param_2;
            return lVar4;
          }
        }
        *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(iVar1 + 0x14) | 0xffffff;
        if (param_6[1] != 0) {
          fn_82F68CC0(param_6[1],iVar1,0x18);
          param_2 = 0xffffff;
        }
        if ((param_2 == 0xffffff) || (param_2 / 0xaa != uVar2)) goto LAB_82a2f4c8;
      } while( true );
    }
  }
  else {
    lVar4 = -0x3fffffce;
    fn_82A2D260(param_1,0xffffffffc0000032);
  }
  return lVar4;
}

