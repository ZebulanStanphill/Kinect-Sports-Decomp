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
typedef struct HeapVt_8260C440 HeapVt_8260C440;
typedef struct Heap_8260C440 { HeapVt_8260C440 *vt; } Heap_8260C440;
struct HeapVt_8260C440 { void *s[6]; void (*free)(Heap_8260C440 *, void *, unsigned int); };
extern void fn_822315A0(void *);
extern void fn_8256D798(void *, int, int);
extern void fn_825BF428(void *);
extern void fn_827D9A90(void *);
extern void fn_827D9F20(void *);
extern void fn_827DDF38(void *);
extern unsigned int fn_82811400(void *, int);
extern unsigned int lbl_821CAAD0;
extern Heap_8260C440 *lbl_83156AA0;

unsigned int *fn_8260C440(unsigned int *param_1, unsigned int param_2)
{
  unsigned char auStack_40[32];

  *param_1 = (unsigned int)&lbl_821CAAD0;
  fn_8256D798(param_1 + 0x5b, 1, 0);
  fn_825BF428(param_1 + 0x50);
  fn_827DDF38(param_1 + 0x32);
  fn_827D9F20(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    fn_822315A0((void *)param_1[0x17]);
  }
  if (param_1[0x15] != 0) {
    fn_822315A0((void *)param_1[0x15]);
  }
  if (param_1[0x13] != 0) {
    fn_822315A0((void *)param_1[0x13]);
  }
  fn_827D9A90(param_1);
  if ((param_2 & 1) != 0) {
    lbl_83156AA0->vt->free(lbl_83156AA0, param_1, fn_82811400(auStack_40, 4));
  }
  return param_1;
}
