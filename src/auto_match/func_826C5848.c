typedef struct Iface_826C5848 {
    void *vt;
} Iface_826C5848;

typedef struct Obj_826C5848 {
    char pad[0x40];
    char sub[1];
} Obj_826C5848;

extern void fn_826993D0(void *sub, int b, unsigned int flags);
extern void fn_8269EC68(Obj_826C5848 *o, int a, int b, unsigned int flags, Iface_826C5848 *iface);

/* The last argument is the interface pointer of the object that contains o at offset 0x68
   (null when that container pointer is null). */
void fn_826C5848(Obj_826C5848 *o, int a, int b, unsigned int flags)
{
    if (flags & 2) {
        fn_826993D0(o->sub, b, flags);
    }
    fn_8269EC68(o, a, b, flags, (char *)o - 0x68 != 0 ? (Iface_826C5848 *)o : 0);
}
