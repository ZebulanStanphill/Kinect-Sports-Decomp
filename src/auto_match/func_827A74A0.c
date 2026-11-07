extern char lbl_82010C6C[];

typedef struct Msg_827A74A0 {
    void *vtbl;
    int f4;
    int f8;
    short fC;
    short fE;
    short f10;
    short f12;
    short f14;
    short f16;
} Msg_827A74A0;

typedef struct Name_827A74A0 {
    char data[0x38];
} Name_827A74A0;

typedef struct Obj_827A74A0 {
    char pad0[0xc];
    void *src;
    char pad10[0x1c];
    char queue[4];
} Obj_827A74A0;

extern void *fn_826FDED0(Name_827A74A0 *n, void *src);
extern void fn_82726AB8(Obj_827A74A0 *o, void *name);
extern void fn_826FDF58(Name_827A74A0 *n);
extern void fn_8278BD68(void *queue, Msg_827A74A0 *m);
extern void fn_8278B290(Msg_827A74A0 *m);
extern void fn_8267C488(Msg_827A74A0 *m);

void fn_827A74A0(Obj_827A74A0 *o)
{
    Name_827A74A0 name;
    Msg_827A74A0 msg;

    fn_82726AB8(o, fn_826FDED0(&name, o->src));
    fn_826FDF58(&name);
    msg.f4 = 1;
    msg.f8 = 0;
    msg.vtbl = lbl_82010C6C;
    msg.fC = 0;
    msg.fE = 0;
    msg.f10 = 0;
    msg.f12 = 0;
    msg.f14 = 0;
    msg.f16 = 0;
    fn_8278BD68(o->queue, &msg);
    msg.vtbl = lbl_82010C6C;
    fn_8278B290(&msg);
    fn_8267C488(&msg);
}
