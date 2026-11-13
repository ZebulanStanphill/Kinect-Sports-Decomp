typedef struct Obj_83028B30 Obj_83028B30;

typedef struct ObjVt_83028B30 {
    char pad0[0xa0];
    void (*setEnabled)(Obj_83028B30 *self, int enabled);   /* 0xa0 */
} ObjVt_83028B30;

struct Obj_83028B30 {
    ObjVt_83028B30 *vt;
    char pad4[0x14];
    unsigned short count;      /* 0x18 */
};

typedef struct Msg_83028B30 {
    int kind;                  /* 0x00 */
    int pad4;
    unsigned int id;           /* 0x08 */
    char data[9];              /* 0x0c */
    unsigned char flag;        /* 0x15 */
} Msg_83028B30;

extern int fn_82FF3390(Obj_83028B30 *self, int id, void *data, int flags);
extern int fn_82FF33A8(Obj_83028B30 *self, int id, void *data, int flags);
extern int fn_82FF33C0(Obj_83028B30 *self, int id, void *data, unsigned char flag, int flags);

int fn_83028B30(Obj_83028B30 *self, Msg_83028B30 *msg)
{
    int result = 1;

    if (msg->id == 0) {
        int enabled = 0;
        if (msg->kind == 1)
            enabled = 1;
        self->vt->setEnabled(self, enabled);
    }
    if (self->count != 0) {
        switch ((unsigned int)msg->kind) {
        case 0:
            result = fn_82FF3390(self, msg->id, msg->data, 0);
            break;
        case 1:
            result = fn_82FF33A8(self, msg->id, msg->data, 0);
            break;
        case 2:
            result = fn_82FF33C0(self, msg->id, msg->data, msg->flag, 0);
            break;
        }
    }
    return result;
}
