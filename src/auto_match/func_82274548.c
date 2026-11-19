typedef struct Screen_82274548 Screen_82274548;
typedef struct Manager_82274548 Manager_82274548;

typedef struct {
    char pad0[0xc];
    void (*setState)(Screen_82274548 *self, Manager_82274548 *manager, int state); /* 0x0c */
    char pad10[8];
    void (*deactivate)(Screen_82274548 *self); /* 0x18 */
} ScreenVt_82274548;

struct Screen_82274548 {
    ScreenVt_82274548 *vt;
    char pad4[0x2c];
    int focus; /* 0x30 */
};

typedef struct Entry_82274548 {
    Screen_82274548 *screen;
    int arg;
} Entry_82274548;

typedef struct Vector_82274548 {
    Entry_82274548 *first; /* 0x00 */
    Entry_82274548 *last;  /* 0x04 */
    Entry_82274548 *end;   /* 0x08 */
    int alloc;             /* 0x0c */
} Vector_82274548;

struct Manager_82274548 {
    char pad0[0x14];
    int depth; /* 0x14 */
    int dirty; /* 0x18 */
    char pad1c[8];
    Vector_82274548 stack; /* 0x24 */
    Vector_82274548 queue; /* 0x34 */
};

extern Manager_82274548 *fn_82275128(void);
extern void fn_8227EB10(Screen_82274548 *screen, int flag);
extern void fn_824BF8A8(Vector_82274548 *self, const Entry_82274548 *value);

static __forceinline int Empty(Vector_82274548 *v)
{
    return v->first == v->last;
}

void fn_82274548(Screen_82274548 *screen, int arg, int push, int flush)
{
    Manager_82274548 *manager;
    Screen_82274548 *top;
    Entry_82274548 *it;
    Entry_82274548 entry;

    manager = fn_82275128();
    if (push != 0) {
        if (!Empty(&manager->stack)) {
            top = manager->stack.last[-1].screen;
            fn_8227EB10(top, 0);
            top->vt->deactivate(top);
            top->focus = 0;
            top->vt->setState(top, manager, 2);
        }
        entry.screen = screen;
        entry.arg = arg;
        fn_824BF8A8(&manager->stack, &entry);
        if (flush != 0) {
            manager->depth++;
            for (it = manager->queue.first; it != manager->queue.last; it++) {
                top = it->screen;
                fn_8227EB10(top, 0);
                top->vt->deactivate(top);
                top = it->screen;
                top->focus = 0;
                top->vt->setState(top, manager, 2);
            }
        }
    } else {
        if (manager->depth > 0) {
            screen->focus = 0;
            screen->vt->setState(screen, manager, 2);
        }
        entry.screen = screen;
        entry.arg = arg;
        fn_824BF8A8(&manager->queue, &entry);
    }
    manager->dirty = 1;
}
