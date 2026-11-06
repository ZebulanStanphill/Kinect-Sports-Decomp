typedef struct Obj_82D80768 {
    unsigned char f00[9];
    unsigned char level;
    unsigned short a;
    unsigned short b;
} Obj_82D80768;

void fn_82D80768(Obj_82D80768 *obj, unsigned int a, unsigned int b, unsigned int level)
{
    unsigned int va;
    unsigned int vb;

    if ((level & 3) < (obj->level & 3)) {
        va = ~a << 14;
    } else {
        va = a << 14;
    }
    if ((int)level < (int)obj->level) {
        vb = ~b << 14;
    } else {
        vb = b << 14;
    }
    obj->a = (obj->a & 0x3fff) | va;
    obj->b = (obj->b & 0x3fff) | vb;
}
