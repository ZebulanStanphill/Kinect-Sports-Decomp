typedef struct Obj_82FF3E80 {
    char pad[0x80];
    unsigned short a;
    unsigned short b;
    unsigned short mode;
} Obj_82FF3E80;

void fn_82FF3E80(Obj_82FF3E80 *o, unsigned char enabled, unsigned char reset, unsigned short mode, unsigned short a, unsigned short b)
{
    if (enabled) {
        if (reset) {
            o->mode = 0;
            o->a = 0;
            o->b = 0;
        } else {
            o->mode = mode;
            o->a = a;
            o->b = b;
        }
    } else {
        o->a = 0;
        o->b = 0;
        o->mode = 1;
    }
}
