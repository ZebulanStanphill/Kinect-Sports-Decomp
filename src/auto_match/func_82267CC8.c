typedef struct Node_82267CC8 { struct Node_82267CC8 *next; struct Node_82267CC8 *prev; int *val; } Node_82267CC8;
typedef struct Self_82267CC8 {
  Node_82267CC8 *head;
  int pad[14];
  int f3c;
  int pad2[2];
  int f48;
} Self_82267CC8;
extern void fn_82265DE0(int, int);

void fn_82267CC8(Self_82267CC8 *p, unsigned int param_2, int param_3)
{
  Node_82267CC8 *n;
  int *o;
  p->f48 = 1;
  if (p->f3c != 0) {
    for (n = p->head->next; n != p->head; n = n->next) {
      if (*(unsigned int *)((char *)n->val + 0x40) == param_2) {
        fn_82265DE0((int)n->val, param_3);
        o = *(int **)((char *)p + 0x20);
        if (o != 0) {
          (*(void (**)(int *, unsigned, int))(*o + 4))(o, param_2, param_3);
        }
        break;
      }
    }
  }
  p->f48 = 0;
}
