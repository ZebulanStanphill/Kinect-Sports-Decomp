typedef struct Obj_826C2F50 {
    int pad0;
    void *owner;
    char *item;
} Obj_826C2F50;

extern void fn_82696BC8(void *owner, void *item);

void fn_826C2F50(Obj_826C2F50 *o)
{
    fn_82696BC8(o->owner, o->item ? o->item - 0x10 : 0);
}
