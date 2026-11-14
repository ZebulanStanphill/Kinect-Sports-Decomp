typedef struct Target_826F75B8 Target_826F75B8;

typedef struct TargetVtbl_826F75B8 {
    void *slots[0x128 / 4];
    void (*setValue)(Target_826F75B8 *self, int value);
    void (*setVector)(Target_826F75B8 *self, void *vec);
    void (*setPair)(Target_826F75B8 *self, void *a, void *b);
    void (*setIndexed)(Target_826F75B8 *self, int index, void *b);
} TargetVtbl_826F75B8;

struct Target_826F75B8 {
    TargetVtbl_826F75B8 *vt;
    char pad[0x62];
    unsigned char flags;
};

typedef struct Command_826F75B8 {
    int pad0;
    int type;
    int target;
    int value;
    char vec[0x10];
    char a[0xc];
    int index;
    char b[0x10];
} Command_826F75B8;

void fn_826F75B8(Command_826F75B8 *cmd)
{
    Target_826F75B8 *t = (Target_826F75B8 *)cmd->target;
    if (cmd->target == 0)
        return;
    if (t->flags & 0x10)
        return;
    switch (cmd->type) {
    case 1:
        t->vt->setValue(t, cmd->value);
        break;
    case 2:
        t->vt->setVector(t, cmd->vec);
        break;
    case 3:
        t->vt->setPair(t, cmd->a, cmd->b);
        break;
    case 4:
        t->vt->setIndexed(t, cmd->index, cmd->b);
        break;
    }
}
