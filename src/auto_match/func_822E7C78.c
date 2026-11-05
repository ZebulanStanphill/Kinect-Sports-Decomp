static __forceinline int present_822E7C78(int *p) {if(p)return *p!=0;return 0;}
extern char lbl_821ADAE0[],lbl_821ADAE8[];
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
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_82535298();
extern int fn_82536288();



extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822E7C78(int param_1)

{
  int *piVar1;
  const char *uVar2;
  int bVar3;
  int aiStack_90;
  struct { unsigned first,second,third,pad; } stack_pair_80;
  struct {unsigned a,b,c,pad;} tmp;
  struct { unsigned a[7],b[7];} strings;
  piVar1 = (int *)(*(int *)(param_1 + 0x1bc) + 0x824);
  bVar3=present_822E7C78(piVar1);
  if (bVar3) {
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    stack_pair_80.third = 0;
    if (*(int *)(param_1 + 0x214) != 0) {uVar2=lbl_821ADAE0;}else{uVar2=lbl_821ADAE8;}
    fn_82230110(strings.a,"pickup_hand");
    fn_82230110(strings.b,uVar2);
    fn_822C1730(&stack_pair_80.first,strings.a);
    fn_82230300(strings.b,1,0);
    fn_82230300(strings.a,1,0);
    aiStack_90 = *piVar1;
    tmp.a = 0;
    tmp.b = 0;
    tmp.c = 0;
    aiStack_90 =
         fn_82535298(&aiStack_90,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + 0x174) + 0x84c),
                           &tmp.a,&stack_pair_80.first);
    fn_82536288(&aiStack_90);
    fn_822CD140(&tmp.a);
    fn_822C18B8(&stack_pair_80.first);
  }
  return;
}

