extern int fn_8251FA58(void *);
/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_8260BF98 {
  unsigned short next;
  unsigned short pad2;
  unsigned short link;
  char pad[0x44];
  void *ev;
} Node_8260BF98;

void fn_8260BF98(Node_8260BF98 *p)
{
  Node_8260BF98 *q = p;
  unsigned short l = q->link;
  while (l != 0) {
    q = (Node_8260BF98 *)((char *)q + q->next);
    l = q->link;
  }
  p = q;
  if (p->ev != 0) {
    __lwsync();
    fn_8251FA58(p->ev);
    p->ev = 0;
  }
}
