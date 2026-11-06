typedef struct Node_83062E78 {
  char pad0[0x10];
  char key[0x20];
  struct Node_83062E78 *left;
  struct Node_83062E78 *right;
} Node_83062E78;

typedef struct {
  char pad[0x2c];
  Node_83062E78 *root;
  float f30;
} Owner_83062E78;

extern unsigned char fn_83068418(Node_83062E78 *);
extern int fn_83066788(void *, void *, float);

Node_83062E78 *fn_83062E78(Owner_83062E78 *self, void *arg)
{
  Node_83062E78 *n = self->root;

  while (n != 0) {
    int r;
    if (fn_83068418(n) != 0) {
      return n;
    }
    r = fn_83066788(n->key, arg, self->f30);
    if (r == 0 || r == 2) {
      n = n->left;
    } else {
      n = n->right;
    }
  }
  return 0;
}
