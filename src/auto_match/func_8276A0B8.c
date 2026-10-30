struct Node {int padding[3];void *value;};extern struct Node *fn_826D7C00(void *,void *);
void *fn_8276A0B8(char *object,void *key) {struct Node *node=fn_826D7C00(object+8,key);return node?node->value:0;}
