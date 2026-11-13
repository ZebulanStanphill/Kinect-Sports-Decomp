typedef struct Node_82FB3DD8 {
  int f0;
  struct Node_82FB3DD8 *next;
  int f8, fc;
  unsigned char on;
  char pad[0x2f];
  int count;
} Node_82FB3DD8;

typedef struct Obj_82FB3DD8 {
  char pad[0x44];
  Node_82FB3DD8 *head;
} Obj_82FB3DD8;

extern int fn_82FA97D0(Node_82FB3DD8 *n, int arg);

int fn_82FB3DD8(Obj_82FB3DD8 *o, int arg)
{
  Node_82FB3DD8 *n;
  for (n = o->head; n != 0; n = n->next) {
    if (n->on && n->count != 0) return fn_82FA97D0(n, arg);
  }
  return 2;
}
