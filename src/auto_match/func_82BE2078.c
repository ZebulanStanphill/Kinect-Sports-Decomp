typedef struct Zone_82BE2078 {
    char pad0[0x38];
    const char *name; /* 0x38 */
    char pad3c[0x50 - 0x3c];
    int active; /* 0x50 */
} Zone_82BE2078;

typedef struct List_82BE2078 {
    char pad0[0x8];
    int current;        /* 0x08 */
    unsigned int count; /* 0x0c */
} List_82BE2078;

typedef struct Manager_82BE2078 {
    char pad0[0x10];
    int ok; /* 0x10 */
    char pad14[0x160 - 0x14];
    List_82BE2078 zoneNames; /* 0x160 */
    List_82BE2078 zones;     /* 0x170 */
} Manager_82BE2078;

extern char lbl_82196582[];
extern void (*lbl_831751CC)(void *p);

extern char *fn_82BE2008(Manager_82BE2078 *self, const char *name);
extern char *fn_82BE19A0(const char *s);
extern int fn_82BE5240(void *self, int code, const char *format, ...);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *memory, char *name);
extern int fn_82BE52B8(List_82BE2078 *list, void *node);
extern void fn_82BE5340(List_82BE2078 *list);
extern void fn_82BE5350(List_82BE2078 *list);
extern Zone_82BE2078 *fn_82BE5378(List_82BE2078 *list);
extern int stricmp(const char *a, const char *b);

int fn_82BE2078(Manager_82BE2078 *self, const char *name)
{
    char *copy;
    void *memory;
    void *node;
    List_82BE2078 *zones;
    Zone_82BE2078 *zone;

    if (fn_82BE2008(self, name) != 0) {
        return 0;
    }
    copy = fn_82BE19A0(name);
    if (copy == 0) {
        fn_82BE5240(self, 0x65, lbl_82196582);
        self->ok = 0;
        return 0;
    }
    memory = fn_82BE56B0(0xc);
    if (memory != 0) {
        node = fn_82BEB628(memory, copy);
    } else {
        node = 0;
    }
    if (node == 0) {
        fn_82BE5240(self, 0x65, "CMassiveListNode in ZoneNameAdd");
        self->ok = 0;
        lbl_831751CC(copy);
        return 0;
    }
    fn_82BE52B8(&self->zoneNames, node);
    if (self->zones.count != 0) {
        zones = &self->zones;
        fn_82BE5340(zones);
        while (self->zones.current != 0) {
            zone = fn_82BE5378(zones);
            if (stricmp(name, zone->name) == 0) {
                fn_82BE5378(zones)->active = 1;
                return 1;
            }
            fn_82BE5350(zones);
        }
    }
    return 1;
}
