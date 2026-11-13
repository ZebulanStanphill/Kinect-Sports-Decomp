typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_30;
extern int fn_827672A0();


double fn_82769828(int param_1,int param_2)

{
  bool bVar1;
  unsigned char *puVar2;
  unsigned int auStack_30;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  
  auStack_30 = *(unsigned int *)(param_1 + 8);
  puVar2 = (unsigned char *)(**(int **)(param_1 + 8) + param_2 * 8 + *(int *)(param_1 + 0x10) + 4);
  fn_827672A0(&auStack_30,CONCAT31(CONCAT21(CONCAT11(puVar2[3],puVar2[2]),puVar2[1]),*puVar2));
  if ((sStack_24 <= sStack_28) || (bVar1 = true, sStack_22 <= sStack_26)) {
    bVar1 = false;
  }
  if (!bVar1) {
    sStack_22 = 0;
    sStack_26 = 0;
  }
  return (double)(__int64)((int)sStack_22 - (int)sStack_26);
}

