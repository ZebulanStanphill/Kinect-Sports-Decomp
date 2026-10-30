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
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82FECEE8(int, void *);
extern int fn_82FF0478(void *, int, int, __int64, int);
extern int fn_82FF53D0(unsigned, unsigned);
extern int fn_8301B488(unsigned, unsigned);
extern char lbl_83264558[];
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_832643DC;

void fn_82FF0A80(char *param_1, __int64 *param_2, unsigned char param_3, unsigned char param_4)
{
  RtlEnterCriticalSection(lbl_83264558);
  if (*(int *)param_2 != 0) {
    *(unsigned char *)(param_1 + 0xd6) = 0;
    fn_82FF0478(param_1,1,0x1000000,*param_2,0);
  }
  if ((param_3 == 1) || ((*(unsigned char *)(param_1 + 0xd8) & 0xe0) == 0x20)) {
    *(unsigned char *)(param_1 + 0xda) = *(unsigned char *)(param_1 + 0xda) | 0x80;
    fn_82FECEE8(1,param_1);
    if (*(unsigned *)(param_1 + 0x58) != 0) {
      fn_82FF53D0(lbl_832642F4, *(unsigned *)(param_1 + 0x58));
    }
    if (*(unsigned *)(param_1 + 0x17c) != 0) {
      fn_8301B488(lbl_832642F8, *(unsigned *)(param_1 + 0x17c));
    }
  }
  else {
    fn_82FECEE8(0,param_1);
  }
  if ((*(unsigned char *)(param_1 + 0xd8) & 0xe0) == 0x40) {
    (**(void (***)(void *, int, int))(param_1 + 4))(param_1 + 4,0,0);
  }
  RtlLeaveCriticalSection(lbl_83264558);
  if (param_4 != 0) {
    lbl_832643DC = lbl_832643DC + 1;
  }
}
