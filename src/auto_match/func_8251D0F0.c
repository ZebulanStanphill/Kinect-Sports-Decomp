typedef struct Slot_8251D0F0 {
    int index;       /* 0x00 */
    void *user;      /* 0x04 */
    int field08;     /* 0x08 */
    int field0C;     /* 0x0c */
    int field10;     /* 0x10 */
    int field14;     /* 0x14 */
    int signedIn;    /* 0x18 */
    int field1C;     /* 0x1c */
    char name[0x10]; /* 0x20 */
} Slot_8251D0F0;

typedef Slot_8251D0F0 Profile_8251D0F0;

typedef struct Event_8251D0F0 {
    int type;       /* 0x0 */
    int size;       /* 0x4 */
    void *previous; /* 0x8 */
    void *current;  /* 0xc */
} Event_8251D0F0;

typedef struct ProfileManager_8251D0F0 {
    char pad000[0x28];
    Slot_8251D0F0 slots[4];    /* 0x028 */
    Profile_8251D0F0 *pending; /* 0x0e8 */
    Slot_8251D0F0 *active;     /* 0x0ec */
    char pad0F0[0x30];
    void (*onChange)(void *user); /* 0x120 */
} ProfileManager_8251D0F0;

extern ProfileManager_8251D0F0 lbl_832960A0;

extern void fn_82488DB8(void *destination, const void *source);
extern void fn_822314E8(void *name);
extern void fn_8265CA20(void *memory);
extern void fn_82596630(void *user);
extern void fn_8251D290(ProfileManager_8251D0F0 *manager, Slot_8251D0F0 *slot);
extern void fn_8251D060(void);
extern void *XMemSet(void *destination, int value, unsigned int count);
extern void fn_8257CB40(void *listeners, Event_8251D0F0 *event, int flags);

static __forceinline void *ActiveUser(ProfileManager_8251D0F0 *manager)
{
    return manager->active != 0 ? manager->active->user : 0;
}

void fn_8251D0F0(void)
{
    ProfileManager_8251D0F0 *manager = &lbl_832960A0;
    Slot_8251D0F0 *slot;
    Profile_8251D0F0 *profile;
    void *previous = 0;
    int i;

    for (i = 0; 4 > i; i++) {
        slot = &manager->slots[i];
        if (slot->user == 0) {
            goto found;
        }
    }
    return;
found:
    profile = manager->pending;
    slot->index = profile->index;
    slot->user = profile->user;
    slot->field08 = profile->field08;
    slot->field0C = profile->field0C;
    slot->field10 = profile->field10;
    slot->field14 = profile->field14;
    slot->signedIn = profile->signedIn;
    slot->field1C = profile->field1C;
    fn_82488DB8(slot->name, profile->name);
    profile = manager->pending;
    manager->pending = 0;
    if (profile != 0) {
        fn_822314E8(profile->name);
        fn_8265CA20(profile);
    }
    if (slot->signedIn != 0) {
        void *user;
        previous = ActiveUser(manager);
        user = ActiveUser(manager);
        if (user != 0) {
            if (manager->onChange != 0) {
                manager->onChange(user);
            }
            fn_82596630(user);
        }
    }
    if (slot->signedIn != 0) {
        manager->active = slot;
    }
    fn_8251D290(manager, slot);
    if (slot->signedIn != 0) {
        fn_8251D060();
        if (previous != 0) {
            Event_8251D0F0 event;
            XMemSet(&event.previous, 0, 8);
            event.type = 0x54;
            event.size = 0x10;
            event.current = ActiveUser(manager);
            event.previous = previous;
            fn_8257CB40((char *)previous + 0x78, &event, 1);
        }
    }
}
