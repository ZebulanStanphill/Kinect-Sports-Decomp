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
extern void fn_8278B208(int, int);
extern int fn_82790270(const char *, const char *, unsigned int);
extern char lbl_82196F18[];
extern char lbl_82196F10[];

typedef struct Tok_827A61A0 {
  int type;
  const char *str;
  unsigned int len;
} Tok_827A61A0;
typedef struct TokList_827A61A0 {
  Tok_827A61A0 *toks;
  unsigned int n;
} TokList_827A61A0;
typedef struct ObjList_827A61A0 {
  int *data;
  unsigned int count;
} ObjList_827A61A0;

void fn_827A61A0(void *param_1, ObjList_827A61A0 *list, TokList_827A61A0 *tl)
{
  int idx;
  Tok_827A61A0 *t;
  const char *s;
  unsigned int len, n;
  unsigned int i;

  idx = 0;
  if (tl->toks[0].type != 2 || (idx = 1, tl->n >= 2)) {
    t = tl->toks + idx;
    if (t->type == 0 || (t->type == 1 && t->len > 2)) {
      s = t->str;
      len = t->len;
      if (t->type == 1) {
        s = s + 2;
        len = len - 2;
      }
      n = len < 4 ? len : 4;
      if (fn_82790270(s, lbl_82196F18, n) == 0) {
        for (i = 0; i < list->count; i++) fn_8278B208(list->data[i], 1);
      } else {
        n = len < 5 ? len : 5;
        if (fn_82790270(s, lbl_82196F10, n) == 0) {
          for (i = 0; i < list->count; i++) fn_8278B208(list->data[i], 0);
        }
      }
    }
  }
}
