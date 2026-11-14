typedef struct Msg_82FB2270 Msg_82FB2270;
typedef struct {
    char pad0[0x14];
    int (*GetType)(Msg_82FB2270 *self);
} MsgVtbl_82FB2270;
struct Msg_82FB2270 {
    MsgVtbl_82FB2270 *vt;
    int f4;
    int f8;
    unsigned int key;
    int pending;
};

typedef struct Entry_82FB2270 {
    unsigned int key;
    int value;
} Entry_82FB2270;

typedef struct Obj_82FB2270 Obj_82FB2270;
typedef struct {
    char pad0[0x158];
    unsigned short (*GetId)(Obj_82FB2270 *self);
} ObjVtbl_82FB2270;
struct Obj_82FB2270 {
    ObjVtbl_82FB2270 *vt;
    int f4;
    int f8;
    unsigned int key;
    char pad10[0x7c - 0x10];
    Entry_82FB2270 *begin;
    Entry_82FB2270 *end;
};

static __forceinline int *Find(Obj_82FB2270 *self, unsigned int key)
{
    Entry_82FB2270 *it;
    for (it = self->begin; it != self->end && it->key != key; it++) {
    }
    {
        unsigned char found = it != self->end;
        return found ? &it->value : 0;
    }
}

int fn_82FB2270(Obj_82FB2270 *self, Msg_82FB2270 *msg)
{
    int type = msg->vt->GetType(msg);
    int result = 1;
    if (self->vt->GetId(self) >= 0xffff) {
        result = 9;
    } else if (type != 7 && type != 8 && type != 9) {
        result = 4;
    } else if (msg->pending != 0) {
        result = 0x15;
    } else {
        unsigned int key = msg->key;
        if (Find(self, key) != 0) {
            result = 5;
        } else if (self->key == key) {
            result = 0x17;
        }
    }
    return result;
}
