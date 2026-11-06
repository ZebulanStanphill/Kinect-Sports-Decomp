typedef struct Obj_82575818 {
    char pad[0x1BC];
    char *owner;
    unsigned int n;
} Obj_82575818;

extern void fn_82522ED8(void *p);
extern unsigned char fn_82575E90(Obj_82575818 *obj, char *slot);

void fn_82575818(char *defaultOwner, Obj_82575818 **items, unsigned int count)
{
    Obj_82575818 **p;
    Obj_82575818 *obj;
    char *owner;
    unsigned int n;

    if (items != 0) {
        if (count != 0) {
            p = items;
            n = count;
            do {
                obj = *p;
                if (obj != 0) {
                    owner = obj->owner;
                    if (owner == 0) {
                        owner = defaultOwner;
                    }
                    if (fn_82575E90(obj, owner + 0x78) == 0 &&
                        fn_82575E90(obj, owner + 0x70) == 0 &&
                        fn_82575E90(obj, owner + 0x68) == 0) {
                        fn_82575E90(obj, owner + 0x60);
                    }
                    *p = 0;
                }
                n--;
                p++;
            } while (n != 0);
        }
        fn_82522ED8(items);
    }
}
