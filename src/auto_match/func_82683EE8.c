typedef struct Obj_82683EE8 {
    int pad0;
    void *table;
} Obj_82683EE8;

extern unsigned char fn_82683D70(void *key, unsigned char *out);

unsigned char fn_82683EE8(Obj_82683EE8 *self, void *key)
{
    unsigned char out;
    return self->table ? fn_82683D70(key, &out) : 0;
}
