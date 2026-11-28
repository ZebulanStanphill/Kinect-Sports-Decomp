typedef struct Node_825604A0 Node_825604A0;
typedef struct State_8239FC88 State_8239FC88;

typedef struct Manager_8239FC88 {
    char reserved[8];
    void ***entries;
    char padding[0x24];

    struct Slot_8239FC88 {
        State_8239FC88 *first;
        State_8239FC88 *second;
    } *slots;
} Manager_8239FC88;

struct State_8239FC88 {
    char reserved[0x10];
    int item;
    char padding[0x0c];
    unsigned int action[131];
    int active;
    char padding230[0x10];
    Manager_8239FC88 *manager;
    char padding244[0x3c];
    const void *selected;
    int unused;
    int priority;
    int mode;
    float elapsed;
    int unused294;
    unsigned int alternate;
};

typedef struct Config_8239FC88 {
    int unused;
    unsigned char enabled;
} Config_8239FC88;

extern unsigned char lbl_831D2980[];
extern Config_8239FC88 *lbl_832975B0;
extern Config_8239FC88 *fn_82250A18(void);
extern int fn_82399CB8(Manager_8239FC88 *);
extern int fn_82397F88(Manager_8239FC88 *);
extern int fn_82359558(int, int);
extern unsigned int fn_822AA770(void *);
extern int fn_824CCD80(int);
extern void fn_825603C8(int, unsigned int *, int);
extern void fn_825604A0(Node_825604A0 *);

void fn_8239FC88(State_8239FC88 *self, int mode, int priority)
{
    if (mode == self->mode) {
        return;
    }
    switch ((unsigned int)mode) {
    case 3:
        switch (self->alternate) {
        case 1:
            self->selected = lbl_831D2980 + 0x200;
            break;
        case 0:
            self->selected = lbl_831D2980 + 0x1b8;
            break;
        }
        self->alternate = 1 - self->alternate;
        break;
    case 1:
    case 2: {
        int index = fn_82399CB8(self->manager);
        void *entry = (*self->manager->entries)[index];
        if (fn_82397F88(self->manager)) {
            State_8239FC88 *other = (self->manager->slots - index + 1)->first;
            if (other->active != 0) {
                fn_825604A0((Node_825604A0 *)other->action);
                other->active = 0;
            }
        } else {
            Config_8239FC88 *config = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
            if (config->enabled != 0) {
                int item = self->item;
                unsigned int result = fn_82359558((int)self->manager, item);
                if (fn_822AA770(entry) == result) {
                    if (self->active != 1) {
                        fn_825603C8(fn_824CCD80(item), self->action, 1);
                        self->active = 1;
                    }
                } else if (self->active != 0) {
                    fn_825604A0((Node_825604A0 *)self->action);
                    self->active = 0;
                }
            }
        }
        break;
    }
    case 0:
        priority = self->mode != 4 ? priority : 0;
        break;
    }
    self->mode = mode;
    self->elapsed = 0.0f;
    self->priority = self->priority >= priority ? self->priority : priority;
}
