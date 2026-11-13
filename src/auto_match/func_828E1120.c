typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_117;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_82230180();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_8240D928();
extern int fn_825089A0();
extern int fn_828865A0();
extern int fn_8289D8D0();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828ACD00();
extern int fn_828AD740();
extern int fn_828ADE08();
extern int fn_828C2248();
extern int fn_828C24F0();
extern int fn_828C2BD8();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E0DE0();
extern int fn_828E0FD0();
extern unsigned int iStack_104;
extern unsigned int iStack_114;
extern unsigned int iStack_fc;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_115;
extern unsigned int uStack_118;
extern unsigned int uStack_119;
extern unsigned int uStack_11a;
extern unsigned int uStack_11b;
extern unsigned int uStack_11c;
extern unsigned int uStack_11d;
extern unsigned int uStack_11e;
extern unsigned int uStack_11f;
extern unsigned int uStack_120;


void fn_828E1120(int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  char cVar7;
  unsigned __int64 uVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar8;
  double dVar9;
  unsigned char uStack_120;
  unsigned char uStack_11f;
  unsigned char uStack_11e;
  unsigned char uStack_11d;
  unsigned char uStack_11c;
  unsigned char uStack_11b;
  unsigned char uStack_11a;
  unsigned char uStack_119;
  unsigned char uStack_118;
  unsigned char auStack_117 [2];
  unsigned char uStack_115;
  int iStack_114;
  unsigned int auStack_110 [2];
  unsigned int uStack_108;
  int iStack_104;
  unsigned int uStack_100;
  int iStack_fc;
  unsigned char auStack_f8 [8];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [160];
  
  cVar7 = fn_828AD740(param_1[5]);
  if ((cVar7 == '\0') && (cVar7 = fn_828865A0(param_1), cVar7 != '\0')) {
    uVar3 = fn_828D45F8(param_1);
    iVar5 = fn_828D47D0(uVar3,3,0);
    if (iVar5 != 0) {
      uVar3 = fn_828D45F8(param_1);
      iVar5 = fn_828D47D0(uVar3,4,0);
      if ((iVar5 == 0) && (bVar2 = true, *(char *)(param_1 + 8) != '\0')) goto LAB_828e11a8;
    }
  }
  bVar2 = false;
LAB_828e11a8:
  if (((bVar2) && (cVar7 = fn_828ACCB0(param_1[6]), cVar7 == '\0')) &&
     (cVar7 = fn_828ACCE8(param_1[6]), cVar7 == '\0')) {
    cVar7 = fn_828ACD00(param_1[6]);
    if (cVar7 == '\0') {
      piVar6 = (int *)fn_825089A0();
      uVar4 = (**(int (***)())(*piVar6 + 0xc))();
      if (*(__int64 *)(param_1 + 0xc) == 0) {
        uVar8 = 0;
        iVar5 = fn_8289D8D0(param_1[5]);
        if (iVar5 != 0) {
          uVar8 = fn_8240D928();
        }
        uVar8 = uVar8 + (uVar8 & 0x7fffffff) * 2;
        *(unsigned __int64 *)(param_1 + 0xc) =
             ((uVar8 + ((uVar8 & 0xffffffff) / 5) * -5) * 1000 >> 2 & 0x3fffffff) + uVar4;
      }
      if (*(unsigned __int64 *)(param_1 + 0xc) <= uVar4) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        fn_828AC428(auStack_f0);
        uVar3 = fn_828D45F8(param_1);
        fn_828E0FD0(uVar3,auStack_a0,auStack_f8,auStack_d0,auStack_110,auStack_117,auStack_f0,
                      &uStack_119);
        param_1[9] = iStack_114;
        fn_828C24F0(&uStack_100,param_1[6],0xffffffff8315a15c);
        fn_828C2248(&uStack_108,uStack_100,iStack_114);
        fn_8223B688(auStack_c0,(unsigned __int64)uStack_108 + 8);
        *(unsigned char *)(param_1 + 8) = 0;
        iVar5 = fn_8289D8D0(param_1[5]);
        uVar1 = *(unsigned int *)(iVar5 + 0x10);
        uStack_11e = 0;
        uStack_120 = 0;
        uStack_11d = 0;
        uStack_11a = 0;
        uStack_11c = 0;
        uStack_11b = 0;
        uStack_11f = 0;
        (**(int (***)())(*param_1 + 4))
                  (param_1,uStack_115,uStack_118,&uStack_11e,&uStack_120,&uStack_11d,&uStack_11a,
                   &uStack_11c);
        fn_828C2BD8(param_1[6],param_1[7],0xffffffff8315a15c,auStack_c0);
        fn_828ADE08(param_1[6],param_1[7],uVar1,uVar1,auStack_110[0],auStack_f8,auStack_d0,
                          auStack_a0);
        *(unsigned char *)(param_1 + 10) = 0;
        fn_828E0DE0(param_1,5);
        fn_82230180(auStack_c0);
        if (iStack_104 != 0) {
          fn_822315A0();
        }
        if (iStack_fc != 0) {
          fn_822315A0();
        }
        fn_828AC488(auStack_f0);
      }
    }
  }
  else if (param_1[3] != 0) {
    piVar6 = (int *)fn_825089A0();
    dVar9 = (double)(**(int (***)())(*piVar6 + 8))();
    param_1[4] = (int)(float)dVar9;
    param_1[3] = 0;
  }
  return;
}

