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
extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
typedef struct Val_82250768 { char str[0x20]; void *rep; } Val_82250768;
typedef struct Node_82250768 { struct Node_82250768 *left, *parent, *right; Val_82250768 v; char pad[4]; char color, isnil; } Node_82250768;
static void vd(Val_82250768 *v) { if (v->rep != 0) fn_822315A0(v->rep); fn_82230300(v->str, 1, 0); }
void fn_82250768(void *param_1, Node_82250768 *root)
{
  Node_82250768 *p;
  for (p = root; !p->isnil; root = p) {
    fn_82250768(param_1, p->right);
    p = p->left;
    vd(&root->v);
    fn_8265CA20(root);
  }
}
