typedef struct Node Node;
typedef struct { int pad[9]; void (*f24)(Node *); } Vt;
struct Node { int pad[4]; Vt *vt; };
extern Node lbl_8320A5DC;
extern void fn_828223C8(Node *cur, Node **next);

void fn_828190B8(void)
{
  Node *it;

  for (fn_828223C8(&lbl_8320A5DC, &it); it != 0; fn_828223C8(it, &it)) {
    if (it->vt->f24 != 0) {
      it->vt->f24(it);
    }
  }
}
