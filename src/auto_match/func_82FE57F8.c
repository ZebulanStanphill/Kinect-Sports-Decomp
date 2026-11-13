#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
extern int memset();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82FE57F8(int *param_1,unsigned __int64 param_2,int param_3,__int64 param_4,unsigned int param_5)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;

  memset(param_4,0,(param_2 & 0x3fffffff) << 2);
  uVar5 = 1;
  iVar6 = 0;
  do {
    if (param_5 == 0) {
      return;
    }
    if (((uVar5 & param_5) != 0) || (param_5 == 8)) {
      if (param_5 == 8) {
        param_5 = 0;
      }
      else if ((uVar5 & 8) != 0) goto LAB_82fe5998;
      uVar1 = *(unsigned short *)(param_1 + 3);
      iVar2 = *param_1;
      altv300_21(in_vs32,in_vs41);
      uVar7 = param_2;
      lVar8 = param_4;
      do {
        uVar7 = uVar7 - 4;
        puVar3 = (unsigned int *)
                 ((((unsigned int)uVar1 * iVar6 + param_3) * 4 - (int)param_4) + iVar2 + (int)lVar8 &
                 0xfffffff0);
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
        puVar4 = (unsigned int *)(in_r0 + (int)lVar8 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        lVar8 = lVar8 + 0x10;
      } while (uVar7 != 0);
      param_5 = param_5 & ~uVar5;
      iVar6 = iVar6 + 1;
    }
LAB_82fe5998:
    uVar5 = uVar5 << 1;
  } while( true );
}
