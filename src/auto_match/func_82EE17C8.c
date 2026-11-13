typedef struct Obj_82EE17C8 {
    char pad0[0x48];
    char list[0x254 - 0x48];   /* 0x48 */
    unsigned int count;        /* 0x254 */
} Obj_82EE17C8;

extern int fn_82EE1048(void *list, unsigned int index, void **item);
extern int fn_82EE0458(Obj_82EE17C8 *self, void *item, void *out);

int fn_82EE17C8(Obj_82EE17C8 *self, unsigned short index, void *out)
{
    void *item;

    if (out == 0)
        return 0x80070057;
    if (index >= self->count)
        return 0x80070057;
    return fn_82EE0458(self, fn_82EE1048(self->list, index, &item) >= 0 ? item : 0, out);
}
