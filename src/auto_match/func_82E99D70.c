#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4FB68();
extern int fn_82EDF8B8();


int * fn_82E99D70(int *param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar2 = *(unsigned int *)(param_2 + 4);
  uVar3 = (int)uVar1 >> 0x1f;
  if (param_4 == 1) {
    *(unsigned short *)(param_3 + 0xe) = 0xc;
    *(unsigned int *)(param_3 + 0x10) = 0x31313450;
  }
  piVar4 = (int *)fn_8265C940(0x3980,0x248c8000);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
    *param_1 = 1;
  }
  else {
    piVar4[0xe42] = 0;
    piVar4[0xe41] = 0;
    piVar4[0xe44] = -1;
    piVar4[0xe43] = -1;
    fn_82EDF8B8();
    fn_82E4FB68(param_1,param_2,param_3,piVar4,0,CONCAT44(uVar2,(uVar1 ^ uVar3) - uVar3),param_5
                   );
    if (*param_1 == 0) {
      piVar4[0xe46] = 0;
    }
    else {
      if (*piVar4 != 0) {
        fn_8265C990(*piVar4,0x248c8000);
        *piVar4 = 0;
      }
      if (piVar4[1] != 0) {
        fn_8265C990(piVar4[1],0x248c8000);
        piVar4[1] = 0;
      }
      fn_8265C990(piVar4,0x248c8000);
      piVar4 = (int *)0x0;
    }
  }
  return piVar4;
}

