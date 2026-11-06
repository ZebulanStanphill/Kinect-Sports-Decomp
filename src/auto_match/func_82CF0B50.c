typedef struct Node_82CF0B50 Node_82CF0B50;
struct Node_82CF0B50 {
  float f[12];
  Node_82CF0B50 **children;
  int count;
};
void fn_82CF0B50(Node_82CF0B50 *n, int idx, float scale);
void fn_82CF0B50(Node_82CF0B50 *n, int idx, float scale)
{
  int i;
  n->f[idx] = n->f[idx] * scale;
  ((unsigned short *)n)[idx + 16] = 0;
  for (i = 0; i < n->count; i++)
    fn_82CF0B50(n->children[i], idx, scale);
}
