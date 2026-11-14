typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Msg_825BFD70 {
    int type;
    int size;
    int arg;
    int result;
    __vector4 value;
} Msg_825BFD70;

typedef struct Obj_825BFD70 Obj_825BFD70;
typedef struct ObjVt_825BFD70 {
    void *s[3];
    void (*send)(Obj_825BFD70 *self, Msg_825BFD70 *msg);   /* 0x0c */
} ObjVt_825BFD70;
struct Obj_825BFD70 {
    ObjVt_825BFD70 *vt;
};

typedef struct Target_825BFD70 {
    char pad[0x34];
    int id;
} Target_825BFD70;

extern void XMemSet(void *dst, int value, unsigned int size);

int fn_825BFD70(Obj_825BFD70 *self, Target_825BFD70 *target, int arg, __vector4 value)
{
    Msg_825BFD70 msg;
    int id = target->id;

    if (id == -2) {
        XMemSet(&msg.arg, 0, sizeof(msg) - 8);
        msg.type = 0x1e;
        msg.size = sizeof(msg);
        msg.value = value;
        msg.result = -1;
        msg.arg = arg;
        self->vt->send(self, &msg);
        id = msg.result;
    }
    return id;
}
