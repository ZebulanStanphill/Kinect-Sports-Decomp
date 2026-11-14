typedef struct Obj_83028A28 Obj_83028A28;

typedef struct ObjVt_83028A28 {
    char pad0[0x28];
    void (*send)(Obj_83028A28 *self, int id, int value, int flags);  /* 0x28 */
    char pad2c[0xa0 - 0x2c];
    void (*setEnabled)(Obj_83028A28 *self, int enabled);             /* 0xa0 */
} ObjVt_83028A28;

struct Obj_83028A28 {
    ObjVt_83028A28 *vt;
    char pad4[0x14];
    unsigned short count;      /* 0x18 */
};

typedef struct Msg_83028A28 {
    int kind;                  /* 0x00 */
    int id;                    /* 0x04 */
    int flags;                 /* 0x08 */
    char data[9];              /* 0x0c */
    unsigned char enable;      /* 0x15 */
    unsigned char extra;       /* 0x16 */
    char pad17;
    int value;                 /* 0x18 */
} Msg_83028A28;

extern int fn_82FF3390(Obj_83028A28 *self, int id, void *data, int flags);
extern int fn_82FF33A8(Obj_83028A28 *self, int id, void *data, int flags);
extern int fn_82FF33C0(Obj_83028A28 *self, int id, void *data, unsigned char extra, int flags);

int fn_83028A28(Obj_83028A28 *self, Msg_83028A28 *msg)
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
        }
    }
    return result;
}
