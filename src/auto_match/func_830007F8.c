typedef struct Node_830007F8 Node_830007F8;
struct Node_830007F8 {
  int pad0[3];
  int key;
  Node_830007F8 *next;
  int sub;
};
extern unsigned char fn_83008D78(int, int);

unsigned char fn_830007F8(Node_830007F8 *head, int key)
{
  unsigned char r = 0;
  unsigned char done = 0;
  Node_830007F8 *n = head;
  do {
    if (n == 0) return r;
    r = (unsigned char)(key == n->key);
    if (r == 0 && done == 0 && n->sub != 0) {
      r = fn_83008D78(head->sub, key);
      done = 1;
    }
    n = n->next;
  } while (r == 0);
  return r;
}
