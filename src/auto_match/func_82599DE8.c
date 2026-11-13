typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_82549610();
extern int fn_82549660();
extern int fn_8259C738();
extern int fn_825B4B38();
extern int fn_82A1BB18();
extern int fn_82A1F238();
extern int iRam83296d40;


void fn_82599DE8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int auStack_30 [12];
  
  fn_82549610(auStack_30,0xffffffff83296d4c);
  if (iRam83296d40 == 0) {
    fn_82549660(0x200000,1);
  }
  if ((unsigned __int64)*(unsigned int *)(iRam83296d40 + 0xc) <= (param_2 & 0xffffffff)) {
    bVar1 = true;
    if ((param_2 & 0xffffffff) <
        ((unsigned __int64)*(unsigned int *)(iRam83296d40 + 4) + (unsigned __int64)*(unsigned int *)(iRam83296d40 + 0xc) &
        0xffffffff)) goto LAB_82599e50;
  }
  bVar1 = false;
LAB_82599e50:
  fn_82A1BB18();
  fn_8259C738(auStack_30[0]);
  if (bVar1) {
    fn_82549610(auStack_30,0xffffffff83296d4c);
    if (iRam83296d40 == 0) {
      fn_82549660(0x200000,1);
    }
    iVar2 = iRam83296d40;
    *(int *)(iRam83296d40 + 0x14) = *(int *)(iRam83296d40 + 0x14) + 1;
    fn_825B4B38(iVar2,param_2);
    fn_82A1BB18();
    fn_8259C738(auStack_30[0]);
  }
  else {
    fn_82A1F238(param_2);
  }
  return;
}

