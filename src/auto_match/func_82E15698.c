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
extern void fn_82CE7E68(void *);
extern void fn_82CE7EE0(void *);
extern void fn_82D04C78(void *, void *);
typedef struct Node Node;
typedef struct {
  char pad[0x10];
  void *(*f10)(Node *, void *);
  char pad2[0x24 - 0x14];
  Node *(*f24)(Node *);
} VT;
struct Node { VT *vt; };
void fn_82E15698(Node *self, void *path)
{
  char buf[56];
  Node *parent;
  void *name;
  parent = self->vt->f24(self);
  if (parent != 0) {
    fn_82E15698(parent, path);
  }
  fn_82CE7EE0(buf);
  name = self->vt->f10(self, buf);
  fn_82D04C78(path, "/");
  fn_82D04C78(path, name);
  fn_82CE7E68(buf);
}
