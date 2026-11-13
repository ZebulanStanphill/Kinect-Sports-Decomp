typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_78;
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8305D680();
extern int fn_8305D6B8();
extern int fn_8305D830();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_83066928();
extern int fn_83068418();
extern unsigned int lbl_8217E6BC;


unsigned __int64
fn_83069D38(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  bool bVar2;
  char cVar6;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar7;
  unsigned int *apuStack_80 [2];
  unsigned char auStack_78 [24];
  unsigned char auStack_60 [96];
  
  cVar6 = fn_83068418();
  if ((cVar6 == '\0') && ((*(int *)(param_2 + 0x34) == 0 || (*(int *)(param_2 + 0x30) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_5 + 0x10);
    fn_8305D6B8(uVar1,auStack_78);
    bVar2 = true;
    lVar7 = 0;
    iVar4 = fn_8305D680(uVar1);
    if (0 < iVar4) {
      do {
        fn_8305D830(uVar1,lVar7,auStack_60);
        iVar4 = fn_83066928(param_1,auStack_60,param_3);
        if (iVar4 == 5) {
          bVar2 = false;
          break;
        }
        lVar7 = lVar7 + 1;
        iVar4 = fn_8305D680(uVar1);
      } while ((int)lVar7 < iVar4);
    }
    if (bVar2) {
      puVar5 = (unsigned int *)fn_8265C9E0(0x48);
      if (puVar5 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)0x0;
      }
      else {
        fn_8305F2E8(puVar5);
        *puVar5 = &lbl_8217E6BC;
      }
      apuStack_80[0] = puVar5;
      fn_8305E0F8(puVar5,param_5 + 0x68);
      fn_8305EC98(puVar5,param_3);
      puVar5[0x11] = param_2;
      fn_8257A9F0(param_5 + 0x98,apuStack_80);
    }
    uVar3 = 1;
  }
  return uVar3;
}

