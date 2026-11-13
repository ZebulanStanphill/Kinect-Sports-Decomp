#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_100;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_82A866E0();
extern int fn_82A86F50();
extern int fn_82A8C620();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_110;
extern unsigned int iStack_114;
extern unsigned int iStack_11c;
extern unsigned int lbl_8315FA94;
extern unsigned int lbl_8315FA9C;
extern unsigned int uStack_118;
extern unsigned int uStack_c4;


unsigned __int64 fn_82A86818(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  char cStack_120;
  char acStack_11f [3];
  int iStack_11c;
  unsigned int uStack_118;
  int iStack_114;
  int iStack_110;
  unsigned int auStack_10c [3];
  unsigned char auStack_100 [48];
  unsigned char auStack_d0 [12];
  unsigned int uStack_c4;
  unsigned char auStack_a0 [160];
  
  if (param_1[9] != 0) {
    fn_82F68CC0(auStack_d0,param_1,0x2c);
    cVar1 = (**(int (***)())(*param_2 + 4))(param_2);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_a0,0x21,&uStack_118), cVar1 != '\0'))
    {
      fn_82A86F50(auStack_100,auStack_a0,0x21);
      fn_82A8C620(auStack_100,0,0x20,param_1);
      puVar4 = param_1 + 1;
      fn_82A8C620(auStack_100,0x20,0x20,puVar4);
      puVar3 = param_1 + 2;
      fn_82A8C620(auStack_100,0x40,0x20,puVar3);
      fn_82A8C620(auStack_100,0x60,0x20,param_1 + 3);
      puVar5 = param_1 + 5;
      fn_82A8C620(auStack_100,0x80,0x20,puVar5);
      puVar2 = param_1 + 8;
      fn_82A8C620(auStack_100,0xa0,0x20,puVar2);
      fn_82A866E0(auStack_100,0xc0,1,acStack_11f);
      fn_82A866E0(auStack_100,0xc1,1,&cStack_120);
      fn_82A8C620(auStack_100,0xc2,0x20,&iStack_110);
      fn_82A8C620(auStack_100,0xe2,0x20,&uStack_118);
      param_1[4] = 0;
      param_1[6] = 0;
      param_1[7] = 1;
      param_1[10] = 0;
      if (uStack_c4 < (unsigned int)param_1[3]) {
        fn_82F68CC0(param_1,auStack_d0,0x2c);
      }
      else {
        if (acStack_11f[0] != '\0') {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1[9],0);
        }
        if ((((cStack_120 == '\0') || (((param_4 & 0xffffffff) != 0 && (*puVar5 <= param_3)))) &&
            ((*(int (**)())lbl_8315FA9C)
                       (CONCAT44(*param_1,*param_1) & 0xfffffffffffffeff,*puVar4,*puVar3,0,
                        &iStack_114,&iStack_11c,auStack_10c), iStack_114 == iStack_110)) &&
           ((auStack_10c[0] == uStack_118 && (iStack_11c * uStack_118 <= *puVar5)))) {
          uVar6 = 0;
          if (*puVar2 != 0) {
            do {
              if (cStack_120 == '\0') {
                param_4 = (__int64)(int)uVar6 * (__int64)(int)*puVar5 +
                          (unsigned __int64)(unsigned int)param_1[9];
              }
              uVar7 = 0;
              if (uStack_118 != 0) {
                do {
                  cVar1 = (**(int (***)())(*param_2 + 0x10))
                                    (param_2,(__int64)(int)uVar7 * (__int64)iStack_11c + param_4,
                                     iStack_110,&uStack_118);
                  if (cVar1 == '\0') {
                    return 0;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uStack_118);
              }
              if ((cStack_120 != '\0') &&
                 (cVar1 = (*(int (**)())lbl_8315FA94)
                                    (*param_1,*puVar4,*puVar3,0,iStack_11c,*puVar5,param_4,
                                     (__int64)(int)*puVar5 * (__int64)(int)uVar6 +
                                     (unsigned __int64)(unsigned int)param_1[9]), cVar1 == '\0')) {
                return 0;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *puVar2);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

