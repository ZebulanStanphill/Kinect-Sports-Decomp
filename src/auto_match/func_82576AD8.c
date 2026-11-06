typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82544528();
extern int fn_82544918();
extern void fn_8263CBB0(unsigned, unsigned, unsigned, unsigned);
extern void fn_825D8490(int,float,int,int);
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83282270[];


void fn_82576AD8(int *param_2,float delta,int param_4)

{
  int *piVar1;
  unsigned uVar2;
  
  fn_82544918(1,lbl_8320A898);
  if (lbl_83282270[*(int *)(*(int *)(*(int *)(*param_2 + 0x8ac) + 0xb9e4) + param_4 * 4)] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,0x10,
                      lbl_83282270
                      [*(int *)(*(int *)(*(int *)(*param_2 + 0x8ac) + 0xb9e4) + param_4 * 4)],0x8000
                     );
  }
  for (piVar1 = (int *)param_2[5]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      ((void (*)(int,float,int))(*(int *)(*(int *)*piVar1 + 0x1c)))(*piVar1,delta,param_4);
    }
  }
  if ((unsigned)param_2[0x20] != 0) {
    piVar1 = *(int **)(param_2[0x20]+0xe0);
    uVar2 = fn_82544528();
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,1,uVar2,0x40000000);
    while (piVar1) {
      if (*(unsigned char *)((char *)piVar1+12)) fn_825D8490(*piVar1,delta,param_4,1);
      piVar1=(int *)piVar1[4];
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0x10,0,0x8000);
}

