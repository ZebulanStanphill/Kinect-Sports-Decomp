#define true 1
extern int fn_82CFF8D0();
extern int fn_82CFF928();


void fn_82D71668(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int (**pcVar2)();
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((param_1[2] & 0x80000000U) == 0) {
    uVar4 = fn_82CFF8D0(*param_1,param_1[2] << 2);
    (**(int (***)())(*param_3 + 0x14))(param_3,3,0xffffffff82138a78,*param_1,param_1[1] << 2,uVar4);
  }
  iVar6 = 0;
  do {
    piVar3 = *(int **)(*param_1 + iVar6);
    piVar7 = piVar3 + 4;
    iVar1 = *piVar3;
    fn_82CFF928(param_3,0xffffffff82139c04,piVar3,iVar1 + 0x10,0x200);
    iVar6 = iVar6 + 4;
    do {
      iVar5 = 0x10;
      switch(*(unsigned char *)piVar7) {
      case 1:
        return;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        iVar5 = 0x20;
      case 2:
      case 3:
      case 6:
      case 10:
      case 0xb:
      case 0xe:
        pcVar2 = *(int (***)())((unsigned int)*(unsigned char *)((int)piVar7 + 1) * 0x50 + *param_2 + 0x16cc);
        if (pcVar2 != (int (**)())0x0) {
          (*pcVar2)(piVar7,(unsigned char *)((int)piVar7 + iVar5),param_2,param_3);
        }
      case 0:
        piVar7 = (int *)((unsigned int)(unsigned char)*piVar7 + (int)piVar7);
      }
    } while (piVar7 < (int *)((int)piVar3 + iVar1 + 0x10));
  } while( true );
}

