typedef struct Msg_82BE2820 {
    char pad[0x14];
    int id;
} Msg_82BE2820;

typedef struct Obj_82BE2820 {
    char pad[0x10];
    int f10;
} Obj_82BE2820;

extern char lbl_82196582[];
extern void fn_82BE5240();
extern void fn_82BEB838(Obj_82BE2820 *o, Msg_82BE2820 *m);

void fn_82BE2820(Obj_82BE2820 *o, Msg_82BE2820 *m)
{
    int code;
    switch (m->id) {
    case 0x1011: code = 0xd2; break;
    case 0x1023: code = 0xd3; break;
    case 0x1073: code = 0xd4; break;
    default: goto done;
    }
    fn_82BE5240(o, code, lbl_82196582);
    o->f10 = 0;
done:
    fn_82BEB838(o, m);
}
