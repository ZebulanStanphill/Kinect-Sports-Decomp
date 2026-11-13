extern unsigned int *auStack_38;
extern int fn_82F72738();
extern int fn_82F72DD0();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F73928();
extern int fn_82F73988();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


unsigned __int64 * fn_82F74400(unsigned __int64 *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [8];
  
  *(unsigned int *)param_1 = *param_2;
  *(unsigned int *)((int)param_1 + 4) = param_2[1];
  if (*(char *)((int)param_1 + 4) < '\x02') {
    if (*lbl_832635C0 == '\0') {
      if (*(char *)((int)param_1 + 4) < '\x02') {
        puVar4 = (unsigned int *)fn_82F73988(auStack_38,1,param_1);
        *(unsigned int *)param_1 = *puVar4;
        *(unsigned int *)((int)param_1 + 4) = puVar4[1];
      }
    }
    else {
      fn_82F72738(&uStack_40);
      uStack_50 = uStack_40;
      fn_82F735D8(&uStack_50,0x20);
      uStack_48 = uStack_50;
      fn_82F73228(&uStack_48,param_1);
      *param_1 = uStack_48;
      if ((int)(*(unsigned int *)((int)param_1 + 4) & 0xff000000) < 0x1000001) {
        if (*lbl_832635C0 != '@') {
          fn_82F73680(param_1,0xffffffff82169da4);
          uVar1 = *(unsigned int *)((int)param_1 + 4);
          while ((((int)(uVar1 & 0xff000000) < 0x1000001 && (*lbl_832635C0 != '\0')) &&
                 (*lbl_832635C0 != '@'))) {
            uVar2 = fn_82F76E68(&uStack_50);
            puVar3 = (unsigned __int64 *)fn_82F73928(auStack_38,0x60,uVar2);
            uStack_48 = *puVar3;
            fn_82F735D8(&uStack_48,0x27);
            fn_82F73228(param_1,&uStack_48);
            if (*lbl_832635C0 == '@') {
              lbl_832635C0 = lbl_832635C0 + 1;
            }
            if (((int)(*(unsigned int *)((int)param_1 + 4) & 0xff000000) < 0x1000001) &&
               (*lbl_832635C0 != '@')) {
              fn_82F73680(param_1,0xffffffff82169e28);
            }
            uVar1 = *(unsigned int *)((int)param_1 + 4);
          }
          if ((int)(*(unsigned int *)((int)param_1 + 4) & 0xff000000) < 0x1000001) {
            if (*lbl_832635C0 == '\0') {
              fn_82F72DD0(param_1,1);
            }
            fn_82F735D8(param_1,0x7d);
          }
        }
        if (*lbl_832635C0 == '@') {
          lbl_832635C0 = lbl_832635C0 + 1;
        }
      }
    }
  }
  return param_1;
}

