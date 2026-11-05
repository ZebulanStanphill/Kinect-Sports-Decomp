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
extern unsigned int *auStack_50;
extern int fn_822D5340();
extern int fn_8240D930();
extern int fn_8289D8D0();
extern int fn_828B2360();
extern unsigned char fn_828B4718();
extern int fn_828D7760();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


static __forceinline void invoke(unsigned d,unsigned h,int *o,unsigned a,unsigned b){fn_828D7760(d,h,(*(code*)(*o+0x44))(o),a,b);}
void fn_828B2500(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar5;
  uint uVar2;
  uint uVar3;
  unsigned char cVar6;
  undefined4 uVar4;
  struct {undefined4 buffer[4];struct {unsigned first,second,third;} pair;} tmp;

  undefined4 uStack_38;
  
  piVar5 = (int *)fn_828B2360(param_1,param_3);
  if ((piVar5 != (int *)0x0) && (uVar2 = (*(code *)(*piVar5 + 4))(piVar5), (uVar2 & 0xffffffff) != 0)) {
    uVar3 = fn_8289D8D0(fn_8240D930(param_2));
    if ((uVar3 & 0xffffffff) != 0) {
      tmp.pair.first = 0;
      tmp.pair.second = 0;
      tmp.pair.third=0;
      cVar6 = fn_828B4718(uVar2,&tmp.pair.first,tmp.buffer);
            if (cVar6 != '\0') {
        
        invoke(param_2,uVar3,param_3,tmp.pair.first,tmp.buffer[0]);
      }
      fn_822D5340(&tmp.pair.first);
    }
  }
  return;
}

