typedef struct Msg_8303E8F0 Msg_8303E8F0;
typedef struct {
    char pad0[0x14];
    int (*GetType)(Msg_8303E8F0 *self);
} MsgVtbl_8303E8F0;
struct Msg_8303E8F0 {
    MsgVtbl_8303E8F0 *vt;
    int f4;
    int f8;
    unsigned int key;
    int pending;
};

typedef struct Entry_8303E8F0 {
    unsigned int key;
    int value;
} Entry_8303E8F0;

typedef struct Obj_8303E8F0 Obj_8303E8F0;
typedef struct {
    char pad0[0x158];
    unsigned short (*GetId)(Obj_8303E8F0 *self);
} ObjVtbl_8303E8F0;
struct Obj_8303E8F0 {
    ObjVtbl_8303E8F0 *vt;
    int f4;
    int f8;
    unsigned int key;
    char pad10[0x7c - 0x10];
    Entry_8303E8F0 *begin;
    Entry_8303E8F0 *end;
};

static __forceinline int *Find(Obj_8303E8F0 *self, unsigned int key)
{
    Entry_8303E8F0 *it;
    for (it = self->begin; it != self->end && it->key != key; it++) {
    }
    {
        unsigned char found = it != self->end;
        return found ? &it->value : 0;
    }
}

int fn_8303E8F0(Obj_8303E8F0 *self, Msg_8303E8F0 *msg)
{
    int type = msg->vt->GetType(msg);
    int result = 1;
    if (self->vt->GetId(self) >= 0xffff) {
        result = 9;
    } else if (type != 3 && type != 0xb && type != 2 && type != 4 && type != 5) {
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
