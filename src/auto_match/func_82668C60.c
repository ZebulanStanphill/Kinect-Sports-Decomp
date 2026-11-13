typedef struct Node_82668C60 Node_82668C60;
typedef struct Tree_82668C60 {
    int alval;
    Node_82668C60 *head;
    unsigned int size;
    char alnod;
} Tree_82668C60;

extern void *fn_82669730(Tree_82668C60 *self, unsigned char *a, unsigned char b);
extern Node_82668C60 *fn_82669780(char *al, unsigned int count, void *hint);
extern Node_82668C60 **fn_8265D5A8(Node_82668C60 *node);
extern Node_82668C60 **fn_82F92208(Node_82668C60 *node);
extern Node_82668C60 **fn_82F953B8(Node_82668C60 *node);
extern char *fn_82F95398(Node_82668C60 *node);
extern char *fn_82F953A8(Node_82668C60 *node);

Tree_82668C60 *fn_82668C60(Tree_82668C60 *self, unsigned char *a, unsigned char b)
{
    fn_82669730(self, a, b);
    self->size = 0;
    self->head = fn_82669780(&self->alnod, 1, 0);
    *fn_8265D5A8(self->head) = self->head;
    *fn_82F92208(self->head) = self->head;
    *fn_82F953B8(self->head) = self->head;
    *fn_82F95398(self->head) = 1;
    *fn_82F953A8(self->head) = 1;
    return self;
}
