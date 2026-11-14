typedef struct Obj_8302C3E0 Obj_8302C3E0;

typedef struct ObjVt_8302C3E0 {
    char pad0[0x28];
    void (*send)(Obj_8302C3E0 *self, int id, int value, int flags);  /* 0x28 */
    char pad2c[0xa0 - 0x2c];
    void (*setEnabled)(Obj_8302C3E0 *self, int enabled);             /* 0xa0 */
} ObjVt_8302C3E0;

struct Obj_8302C3E0 {
    ObjVt_8302C3E0 *vt;
    char pad4[0x14];
    unsigned short count;      /* 0x18 */
};

typedef struct Msg_8302C3E0 {
    int kind;                  /* 0x00 */
    int id;                    /* 0x04 */
    int flags;                 /* 0x08 */
    char data[9];              /* 0x0c */
    unsigned char enable;      /* 0x15 */
    unsigned char extra;       /* 0x16 */
    char pad17;
    int value;                 /* 0x18 */
    int arg;                   /* 0x1c */
} Msg_8302C3E0;

extern int fn_82FF3390(Obj_8302C3E0 *self, int id, void *data, int flags);
extern int fn_82FF33A8(Obj_8302C3E0 *self, int id, void *data, int flags);
extern int fn_82FF33C0(Obj_8302C3E0 *self, int id, void *data, unsigned char extra, int flags);
extern void fn_8302C380(Obj_8302C3E0 *self, int id, int arg);

int fn_8302C3E0(Obj_8302C3E0 *self, Msg_8302C3E0 *msg)
{
    int result = 1;

    if (msg->enable != 0) {
        int enabled = 0;
        if (msg->kind == 1)
            enabled = 1;
        self->vt->setEnabled(self, enabled);
    }
    if (self->count != 0) {
        switch ((unsigned int)msg->kind) {
        case 0:
            result = fn_82FF3390(self, msg->id, msg->data, msg->flags);
            break;
        case 1:
            result = fn_82FF33A8(self, msg->id, msg->data, msg->flags);
            break;
        case 2:
            result = fn_82FF33C0(self, msg->id, msg->data, msg->extra, msg->flags);
            break;
        case 3:
            self->vt->send(self, msg->id, msg->value, msg->flags);
            break;
        case 4:
            fn_8302C380(self, msg->id, msg->arg);
            break;
        }
    }
    return result;
}
