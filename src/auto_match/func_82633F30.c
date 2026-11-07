typedef struct Bits_82633F30 {
    unsigned int pad0 : 16;
    unsigned int type : 4;
    unsigned int pad1 : 2;
    unsigned int flag : 1;
    unsigned int pad2 : 9;
} Bits_82633F30;

typedef struct Obj_82633F30 {
    int field_0;
    Bits_82633F30 bits;
} Obj_82633F30;

extern unsigned char fn_82633E88(Obj_82633F30 *o, int x);

void fn_82633F30(unsigned char enable, int a, int b, int c, Obj_82633F30 *o, int x)
{
    Bits_82633F30 w;
    unsigned int type;
    int on;

    if (enable == 0) {
        return;
    }
    w = o->bits;
    type = w.type;
    if (((1 << type) & 0x607eU) == 0) {
        return;
    }
    on = fn_82633E88(o, x) != 0;
    switch (type) {
    case 1:
    case 2:
    case 5:
    case 6:
        w.flag = on;
        break;
    case 3:
    case 13:
        w.type = on ? 13 : 3;
        break;
    case 4:
    case 14:
        w.type = on ? 14 : 4;
        break;
    default:
        return;
    }
    o->bits = w;
}
