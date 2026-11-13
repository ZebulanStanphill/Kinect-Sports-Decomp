#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_84;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_a4;
extern int fn_829F4D48();
extern int fn_829F4D58();
extern int fn_829F4D70();
extern int fn_82A05998();
extern int fn_82A05A90();
extern int memset();
extern unsigned int lbl_821AAD20;
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A087D0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int *piVar8;
  unsigned __int64 uVar7;
  double dVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs55 [16];
  unsigned char in_vs59 [16];
  unsigned char auVar11 [16];
  unsigned int in_register_000103c0;
  unsigned int in_register_000103c4;
  unsigned int in_register_000103c8;
  unsigned int in_vr60;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_b0 [12];
  float fStack_a4;
  unsigned char auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  unsigned char auStack_90 [12];
  float fStack_84;

  piVar8 = (int *)(param_1 + 0x410);
  memset(piVar8,0,0x7c);
  fn_829F4D48(*(unsigned int *)(param_1 + 0x4144));
  uVar4 = 0;
  uVar5 = 0;
  dVar10 = (double)lbl_821AAD20;
  puVar6 = (unsigned int *)(param_1 + 0x57c);
  do {
    memset(puVar6 + 1,0,0x100);
    *puVar6 = 0;
    puVar6[-2] = 0xffffffff;
    uVar7 = 0;
    puVar6[-1] = 0xffffffff;
    do {
      fn_829F4D58(uVar4,auStack_b0);
      dVar9 = (double)fStack_a4;
      if (dVar9 <= dVar10) break;
      if ((uVar7 & 0xffffffff) == 0) {
        puVar6[-2] = 0;
      }
      else if (dVar9 <= (double)*(float *)((int)(((unsigned int)puVar6[-2] + uVar5 & 0xffffffff) << 4) +
                                           param_1 + 0x58c)) {
        if ((puVar6[-1] == 0xffffffff) ||
           ((double)*(float *)((int)(((unsigned int)puVar6[-1] + uVar5 & 0xffffffff) << 4) + param_1 + 0x58c
                              ) < dVar9)) {
          puVar6[-1] = (int)uVar7;
        }
      }
      else {
        puVar6[-1] = puVar6[-2];
        puVar6[-2] = (int)uVar7;
      }
      lVar3 = uVar5 + uVar7;
      uVar7 = uVar7 + 1;
      altv300_23(in_vs55,in_vs42);
      altv300_21(in_vs32,in_vs41);
      puVar1 = (unsigned int *)((int)((lVar3 + 0x58U & 0xffffffff) << 4) + param_1 & 0xfffffff0);
      *puVar1 = in_register_000103e0 | in_register_000103f0;
      puVar1[1] = in_register_000103e4 | in_register_000103f4;
      puVar1[2] = in_register_000103e8 | in_register_000103f8;
      puVar1[3] = in_vr62 | in_vr63;
      *piVar8 = *piVar8 + 1;
    } while ((uVar7 & 0xffffffff) < 8);
    *puVar6 = (int)uVar7;
    if ((uVar7 & 0xffffffff) != 0) {
      altv207_13(in_vs40,in_vs59);
      puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + (int)in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103c0;
      puVar2[1] = in_register_000103c4;
      puVar2[2] = in_register_000103c8;
      puVar2[3] = in_vr60;
      fn_82A05998((double)fStack_98,(double)fStack_94,puVar6 + -0x3b);
    }
    if ((uVar7 & 0xffffffff) == 1) {
      fn_82A05A90(puVar6 + -0x3b);
    }
    else {{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar11, &_vt0, 16); }
      puVar6[-0x21] = 0;
      puVar6[-0x20] = 0;
      memcpy((void *)((const void *)((unsigned int)(puVar6 + -0x1f) & 0xfffffff0)), auVar11, 16);
      memcpy((void *)((const void *)((unsigned int)(puVar6 + -0x1b) & 0xfffffff0)), auVar11, 16);
      if ((((uVar7 & 0xffffffff) == 8) && (*(int *)(param_1 + 0x4148) == 0)) &&
         (((uVar4 & 0xffffffff) == 0xc || ((uVar4 & 0xffffffff) == 0xd)))) {
        do {
          fn_829F4D58(uVar4,auStack_90);
          if ((double)fStack_84 <= dVar10) break;
          uVar7 = uVar7 + 1;
          *piVar8 = *piVar8 + 1;
        } while ((uVar7 & 0xffffffff) < 0xe);
      }
    }
    uVar5 = uVar5 + 0x1f;
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 0x7c;
    piVar8 = piVar8 + 1;
    if (0x3c0 < (uVar5 & 0xffffffff)) {
      fn_829F4D70();
      return;
    }
  } while( true );
}
