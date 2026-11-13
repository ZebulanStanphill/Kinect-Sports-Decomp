extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern int fn_82AA66A8();
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82B4ABF8();
extern int fn_82B85298();
extern int fn_82B8AB60();
extern unsigned int uStack_30;


void fn_82B4BAA8(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 *puVar4;
  unsigned int uVar5;
  unsigned __int64 uStack_30;
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [8];
  
  uVar5 = param_2[1];
  uVar1 = uVar5 & 3;
  if ((uVar5 & 3) != 0) {
    if (uVar1 == 1) {
      puVar3 = (unsigned int *)fn_82AD17B0(param_1,*param_2);
      if ((param_2[1] & 0xfffe0000U) != 0) {
        return;
      }
      uVar5 = *puVar3;
      *puVar3 = uVar5 & 0xf1ffffff | 0x2000000;
      uVar5 = (param_2[1] & 0x3fcU) << 3 | uVar5 & 0xf1ffe01f | 0x2000000;
    }
    else {
      if (uVar1 < 3) {
        puVar3 = (unsigned int *)fn_82ACA920(param_1,*param_2,*(unsigned int *)(*param_2 + 0xc));
        uVar5 = *puVar3;
        if ((param_2[1] & 0xfffe0000U) != 0) {
          return;
        }
        *puVar3 = uVar5 & 0xf1ffffff | 0x2000000;
        *puVar3 = ((uVar5 >> 5 & 0xff) >> ((unsigned int)param_2[1] >> 1 & 0x3e) & 3) << 5 |
                  uVar5 & 0xf1ffe01f | 0x2000000;
        return;
      }
      if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      puVar4 = (unsigned __int64 *)*param_2;
      if ((uVar5 >> 0x10 & 1) == 0) goto LAB_82b4bc2c;
      uVar2 = fn_82B4ABF8(param_1,puVar4,*puVar4,0);
      puVar3 = (unsigned int *)fn_82AD17B0(param_1,uVar2);
      uVar5 = *puVar3 & 0xf1ffffff | 0x2000000;
    }
    *puVar3 = uVar5;
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x234) ==
       (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) ||
     (((*(unsigned int *)((uVar5 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) == 0 &&
      ((*(unsigned int *)(param_1 + 0x2c) & 2) == 0)))) {
    puVar4 = (unsigned __int64 *)
             fn_82B8AB60(auStack_20,param_1,(unsigned int)param_2[1] >> 0x11,
                               (unsigned int)param_2[1] >> 2 & 0x3fff);
  }
  else {
    puVar4 = (unsigned __int64 *)
             fn_82B85298(auStack_28,param_1,*(unsigned int *)(param_1 + 0x234),
                               (unsigned int)param_2[1] >> 0x11,(unsigned int)param_2[1] >> 2 & 0x3fff);
  }
  uStack_30 = *puVar4;
  puVar4 = &uStack_30;
LAB_82b4bc2c:
  fn_82B4BAA8(param_1,puVar4);
  return;
}

