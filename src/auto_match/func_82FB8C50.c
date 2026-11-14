typedef struct Info_82FB8C50 {
    char pad[0x1c];
    unsigned int kind;  /* 0x1c */
} Info_82FB8C50;

typedef struct Node_82FB8C50 {
    int pad;
    Info_82FB8C50 *info;    /* 0x4 */
} Node_82FB8C50;

extern void fn_82FB8358(void *self, Node_82FB8C50 *node);
extern void fn_82FB8A98(void *self, Node_82FB8C50 *node);

void fn_82FB8C50(void *self, Node_82FB8C50 *node)
{
    switch (node->info->kind) {
    case 2:
    case 3:
        fn_82FB8A98(self, node);
        break;
    case 0:
    case 1:
        fn_82FB8358(self, node);
        break;
    }
}
