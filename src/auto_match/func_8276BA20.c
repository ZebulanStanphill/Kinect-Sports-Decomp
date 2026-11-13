typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_826A8E58();
extern int fn_82766D88();
extern int fn_827673B0();
extern int fn_82768DE0();
extern int fn_8276AB50();
extern int fn_8276B860();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_8276BA20(unsigned __int64 param_1,__int64 param_2)

{
  bool bVar1;
  unsigned __int64 *puVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned short uVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned short uStack_68;
  unsigned short uStack_66;
  unsigned int uStack_64;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puVar2 = (unsigned __int64 *)fn_82768DE0(auStack_50,param_2 + 0x2c);
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_58 = 0;
  uStack_60 = *puVar2;
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  bVar1 = false;
  cVar3 = fn_826A8E58(&uStack_60,&uStack_58);
  if (cVar3 == '\0') {
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_58 = 0;
    piVar7 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
    do {
      if (bVar1) {
        uVar5 = (unsigned int)*(unsigned short *)((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) * 8 + *piVar7 + 0xc);
        if (uVar8 == uVar5 - 1) goto LAB_8276bac0;
        uStack_68 = (unsigned short)uVar4;
        uStack_66 = (unsigned short)uVar8;
        fn_8276AB50(&uStack_48,&uStack_68);
        bVar1 = false;
      }
      else {
        bVar1 = true;
        uVar4 = (unsigned int)*(unsigned short *)((((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) * 8 + *piVar7 + 0xc);
        uVar5 = uVar4;
LAB_8276bac0:
        uVar8 = uVar5;
        fn_82766D88(&uStack_60);
        piVar7 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
      }
      uVar6 = (unsigned short)uVar4;
      cVar3 = fn_826A8E58(&uStack_60,&uStack_58);
    } while (cVar3 == '\0');
  }
  if (bVar1) {
    uStack_66 = (unsigned short)uVar8;
    uStack_68 = uVar6;
    fn_8276AB50(&uStack_48,&uStack_68);
  }
  fn_827673B0(&uStack_48,0,uStack_44,0);
  fn_8276B860(param_1,&uStack_48);
  fn_8267BE38(uStack_48);
  return param_1;
}

