#define true 1
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82882F30();
extern int fn_82882FB8();
extern int fn_82886518();
extern int fn_8288D9D8();
extern int fn_82897BD0();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5738();
extern int fn_828BE158();
extern unsigned int uStack_40;


void fn_8288EE68(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_40;
  int *piStack_3c;
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [48];
  
  uStack_40 = fn_82897BD0(param_2);
  piStack_3c = (int *)0x0;
  fn_82882F30(&uStack_40);
  piVar2 = piStack_3c;
  do {
    piStack_3c = piVar2;
    if (piVar2 == (int *)0x0) {
LAB_8288ef44:
      uVar3 = fn_8265C9E0(0xa0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_823AA970(param_2);
        uVar4 = fn_8288D9D8(uVar3,param_1,uVar4,0);
      }
      fn_82886518(uVar4,1000,0xffffffffffffffff);
      uVar1 = *(unsigned int *)(param_1 + 0x10);
      uVar5 = fn_82897BD0(param_2);
      fn_828BE158(uVar1,uVar4,uVar5,0);
      return;
    }
    iVar6 = (**(int (***)())(*piVar2 + 4))(piVar2);
    if ((iVar6 == 0xd) && (*(char *)((int)piVar2 + 0x9d) != '\0')) {
      fn_828B5580(auStack_30,param_1 + 0x14);
      fn_828B5580(auStack_38,piVar2 + 0x20);
      cVar7 = fn_828B5738(auStack_38,auStack_30);
      fn_828B55B0(auStack_38);
      fn_828B55B0(auStack_30);
      if (cVar7 != '\0') {
        (**(int (***)())*piVar2)(piVar2,1);
        goto LAB_8288ef44;
      }
    }
    fn_82882FB8(&uStack_40);
    piVar2 = piStack_3c;
  } while( true );
}

