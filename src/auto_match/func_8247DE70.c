typedef struct SharedPtr_8247DE70 {
    void *pointer; /* 0x00 */
    void *counter; /* 0x04 */
} SharedPtr_8247DE70;

typedef struct Settings_8247DE70 {
    char pad00[0x5a];
    unsigned char mode; /* 0x5a */
} Settings_8247DE70;

typedef struct Profile_8247DE70 {
    char pad00[0x8];
    unsigned __int64 id; /* 0x08 */
    char pad10[0x60];
    Settings_8247DE70 *settings; /* 0x70 */
    char pad74[0x4];
    int level; /* 0x78 */
} Profile_8247DE70;

typedef struct Manager_8247DE70 {
    char pad00[0x50];
    SharedPtr_8247DE70 profile; /* 0x50 */
} Manager_8247DE70;

typedef struct View_8247DE70 {
    char pad00[0x54];
    int level;                  /* 0x54 */
    unsigned int mode;          /* 0x58 */
    void *buffer;               /* 0x5c */
    unsigned __int64 id;        /* 0x60 */
    SharedPtr_8247DE70 profile; /* 0x68 */
} View_8247DE70;

typedef struct Screen_8247DE70 {
    char pad00[0x48];
    View_8247DE70 view; /* 0x48 */
} Screen_8247DE70;

extern Manager_8247DE70 *lbl_832975B0;
extern Manager_8247DE70 *fn_82250A18(void);
extern void fn_82517978(SharedPtr_8247DE70 *out, void *pointer, void *counter, int flags);
extern void fn_8265CA20(void *memory);
extern void fn_822315A0(void *counter);
extern void fn_824C04E0(View_8247DE70 *view, int refresh);

static __forceinline Manager_8247DE70 *GetManager_8247DE70(void)
{
    if (lbl_832975B0 == 0) {
        return fn_82250A18();
    }
    return lbl_832975B0;
}

static __forceinline void FreeBuffer_8247DE70(void **buffer)
{
    if (*buffer != 0) {
        fn_8265CA20(*buffer);
        *buffer = 0;
    }
}

static __forceinline void Assign_8247DE70(SharedPtr_8247DE70 *target, void *pointer, void *counter)
{
    SharedPtr_8247DE70 copy;
    void *oldCounter;

    copy.pointer = 0;
    copy.counter = 0;
    fn_82517978(&copy, pointer, counter, 0);
    oldCounter = target->counter;
    target->counter = copy.counter;
    target->pointer = copy.pointer;
    if (oldCounter != 0) {
        fn_822315A0(oldCounter);
    }
}

void fn_8247DE70(Screen_8247DE70 *self)
{
    SharedPtr_8247DE70 profile;
    Manager_8247DE70 *manager;
    View_8247DE70 *view;

    manager = GetManager_8247DE70();
    profile.pointer = 0;
    profile.counter = 0;
    fn_82517978(&profile, manager->profile.pointer, manager->profile.counter, 0);
    view = &self->view;
    view->level = ((Profile_8247DE70 *)profile.pointer)->level;
    view->mode = ((Profile_8247DE70 *)profile.pointer)->settings->mode;
    FreeBuffer_8247DE70(&view->buffer);
    view->id = ((Profile_8247DE70 *)profile.pointer)->id;
    Assign_8247DE70(&view->profile, profile.pointer, profile.counter);
    fn_824C04E0(view, 1);
    if (profile.counter != 0) {
        fn_822315A0(profile.counter);
    }
}
