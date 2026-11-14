typedef struct Object_82545810 {
    unsigned int flags;
} Object_82545810;

typedef struct Manager_82545810 {
    char pad0[0x2ed8];
    Object_82545810 *f2ed8;
    char pad2edc[0x3144 - 0x2edc];
    Object_82545810 *f3144;
    Object_82545810 *f3148;
    char pad314c[0x3158 - 0x314c];
    Object_82545810 *f3158;
    Object_82545810 *f315c[16];
    char pad319c[0x31b0 - 0x319c];
    Object_82545810 *f31b0[26];
    char pad3218[0x3244 - 0x3218];
    Object_82545810 *f3244;
    Object_82545810 *f3248;
} Manager_82545810;

extern Manager_82545810 *lbl_8320A898;
extern void fn_82544E80(Manager_82545810 *mgr);
extern void fn_8262FEC8(Object_82545810 *obj);

void fn_82545810(Object_82545810 **handle)
{
    Object_82545810 *obj = *handle;
    Manager_82545810 *mgr = lbl_8320A898;
    int found = 0;
    int i;

    switch (obj->flags & 0xf) {
    case 1:
        for (i = 0; i < 16; i++) {
            if (mgr->f315c[i] == obj)
                found = 1;
        }
        break;
    case 3:
        for (i = 0; i < 26; i++) {
            if (mgr->f31b0[i] == obj)
                found = 1;
        }
        break;
    case 2:
        if (mgr->f3144 == obj)
            found = 1;
        break;
    case 4:
        if (mgr->f3148 == obj)
            found = 1;
        if (mgr->f3158 == obj)
            found = 1;
        break;
    case 5:
        found = mgr->f2ed8 == obj;
        break;
    case 6:
        found = mgr->f3248 == obj;
        break;
    case 7:
        found = mgr->f3244 == obj;
        break;
    case 8:
    case 9:
        found = 0;
        break;
    default:
        goto release;
    }
    if (found)
        fn_82544E80(mgr);
release:
    fn_8262FEC8(*handle);
    *handle = 0;
}
