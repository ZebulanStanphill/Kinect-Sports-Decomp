typedef struct Obj_828DBF08 Obj_828DBF08;
typedef struct { char data[0x1c]; } Name_828DBF08;
typedef struct { char data[0x10]; } Holder_828DBF08;
typedef struct {
    char pad0[0x18];
    int x18;
    char pad1c[0x6c - 0x1c];
    Obj_828DBF08 *obj;
    char pad70[0x80 - 0x70];
    int a;
    int b;
    int c;
    int d;
    int e;
    int err;
    unsigned __int64 id;
    int f84;
    Name_828DBF08 name;
    Holder_828DBF08 holder;
} Msg_828DBF08;

extern void fn_828B1878(Obj_828DBF08 *o, unsigned __int64 id, int unused, int err, int f84, int a, int b, int c,
                        int d, int e, Name_828DBF08 *f, Holder_828DBF08 *h);

int fn_828DBF08(Msg_828DBF08 *msg)
{
    fn_828B1878(msg->obj, msg->id, msg->x18, msg->err, msg->f84, msg->a, msg->b, msg->c, msg->d, msg->e,
                &msg->name, &msg->holder);
    return 1;
}
