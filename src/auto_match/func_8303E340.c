typedef struct Obj {
    unsigned char pad[0x2c];
    unsigned char flag;
} Obj;

int fn_8303E340(Obj *o, int **pp, int *len)
{
    int v = *(*pp)++;
    o->flag = v != 0;
    *pp += 3;
    *len -= 0xc;
    return 1;
}
