#define __lwsync() __emit(0x7C2004AC)
typedef struct Obj_826F8A98 {
    char pad0[0x1c];
    char value[4];
    int key;
    unsigned int state;
    unsigned char flag;
} Obj_826F8A98;
extern void fn_8268BA10(void *dst, void *src);
int fn_826F8A98(Obj_826F8A98 *o, void *dst, int *key, unsigned char *flag)
{
    unsigned int state = o->state;
    __lwsync();
    if (state != 1) {
        return 0;
    }
    fn_8268BA10(dst, o->value);
    *key = o->key;
    *flag = o->flag;
    return 1;
}
