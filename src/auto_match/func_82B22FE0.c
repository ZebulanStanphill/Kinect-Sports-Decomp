typedef struct {
    char pad[8];
    unsigned int flags;
} Info_82B22FE0;

typedef struct {
    char pad[0x10];
    Info_82B22FE0 *info;
} Target_82B22FE0;

typedef struct {
    int unk0;
    unsigned int ref;
} Node_82B22FE0;

extern unsigned char fn_82B20868(Node_82B22FE0 *n);

unsigned char fn_82B22FE0(void *self, Node_82B22FE0 *n)
{
    Target_82B22FE0 *t;

    if (!fn_82B20868(n)) {
        return 0;
    }
    t = (Target_82B22FE0 *)((n->ref & 1) ? 0 : n->ref);
    return (t->info->flags & 0x3f80) == 16000;
}
