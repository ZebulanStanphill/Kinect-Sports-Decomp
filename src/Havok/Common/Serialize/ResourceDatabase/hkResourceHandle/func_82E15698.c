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
