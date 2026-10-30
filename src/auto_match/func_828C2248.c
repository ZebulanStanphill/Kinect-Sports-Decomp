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
typedef struct Node_828C2248 { unsigned p0[10]; char *f28; unsigned f2c; } Node_828C2248;
typedef struct Out_828C2248 { char *p; unsigned rc; } Out_828C2248;
extern void fn_822315A0(unsigned);
extern unsigned char fn_8223AAC0(unsigned);
extern void fn_828A1958(Node_828C2248 **);

Out_828C2248 *fn_828C2248(Out_828C2248 *param_1, int param_2, unsigned param_3)
{
  Node_828C2248 **head = *(Node_828C2248 ***)(*(int *)(param_2 + 4) + 4);
  Node_828C2248 *it = *head;
  while (it != (Node_828C2248 *)head) {
    if (*(unsigned *)(it->f28 + 4) == param_3) {
      Node_828C2248 *n2 = it;
      unsigned rc = n2->f2c;
      char *p = n2->f28;
      param_1->p = 0;
      param_1->rc = 0;
      if (rc != 0 && fn_8223AAC0(rc) != 0) {
        if (param_1->rc != 0) {
          fn_822315A0(param_1->rc);
        }
        param_1->rc = rc;
        param_1->p = p;
      }
      return param_1;
    }
    fn_828A1958(&it);
  }
  param_1->p = 0;
  param_1->rc = 0;
  return param_1;
}
