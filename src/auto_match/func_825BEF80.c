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
typedef struct Elem12 {
    int a;
    int b;
    int c;
} Elem12;

typedef struct List {
    int pad0;
    int pad4;
    unsigned int count;
} List;

extern int fn_825200F0(void *out, Elem12 *src);
extern int fn_827D96A0(void *item);
extern void *fn_827DDDD8(void *set, int *key);
extern int fn_827DDFB8(void *set, void *item);
extern unsigned int fn_82A1E650(int handle, int timeout);


int fn_825BEF80(int param_1, int *param_2, void *param_3)
{
  unsigned int i;
  int key[4];
  unsigned char buf[32];

  if (fn_82A1E650(*(int *)(param_1 + 0x1b4), 0) != 0x102) {
    for (i = 0; i < (*(List **)(param_1 + 0x5c))->count; i++) {
      fn_825200F0(buf, &(*(Elem12 **)(param_1 + 100))[i]);
      if ((*(code *)(*param_2 + 4))(param_2, buf) != 0) {
        key[0] = fn_827D96A0(buf);
        if (fn_827DDDD8(param_3, key) == 0) {
          fn_827DDFB8(param_3, buf);
        }
      }
    }
  }
  return 0;
}
