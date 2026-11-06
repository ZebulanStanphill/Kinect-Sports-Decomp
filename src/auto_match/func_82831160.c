typedef struct { int v[5]; } B20;
typedef struct { int a,b,c; B20 val; char x,y; } Node;
extern Node *fn_82830FB8(int);
Node *fn_82831160(int self, B20 *src)
{
  Node *n = fn_82830FB8(self);
  B20 *d = &n->val;
  if (d) {
    *d = *src;
  }
  return n;
}
