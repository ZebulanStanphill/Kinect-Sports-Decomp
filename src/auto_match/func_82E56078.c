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
extern void fn_82E50CB8(void *);
extern void fn_82E50F10(void *);
extern void *memmove(void *, const void *, unsigned int);

typedef struct {
  char pad[0x5c];
  unsigned count;
  int f60;
  unsigned short *data;
} Obj_82E56078;

int fn_82E56078(Obj_82E56078 *param_1, unsigned short param_2)
{
  unsigned i;
  int hr;
  unsigned n;
  unsigned short *p;
  unsigned *pc = &param_1->count;

  hr = 0;
  if (param_1->count == 0) {
    return 0x80070057;
  }
  fn_82E50CB8((char *)param_1 + 8);
  n = param_1->count;
  i = 0;
  if (param_1->count != 0) {
    do {
      if (param_2 == param_1->data[i]) {
        if (n - 1 > i) {
          p = param_1->data + i;
          memmove(p, p + 1, (n - i - 1) * 2);
        }
        param_1->count = param_1->count - 1;
        param_1->data[param_1->count] = 0;
        goto done;
      }
      i = i + 1;
    } while (i < *pc);
  }
  hr = 0x80070057;
done:
  fn_82E50F10((char *)param_1 + 8);
  return hr;
}
