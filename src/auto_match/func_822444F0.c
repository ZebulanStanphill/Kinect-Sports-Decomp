typedef struct Node_822444F0 {
    struct Node_822444F0 *left;   /* 0x00 */
    struct Node_822444F0 *parent; /* 0x04 */
    struct Node_822444F0 *right;  /* 0x08 */
    int key;                      /* 0x0C */
    void *value;                  /* 0x10 */
} Node_822444F0;

typedef struct Registry_822444F0 {
    char pad0[0x220];
    Node_822444F0 *head; /* 0x220 */
    char pad224[0x6c];
    unsigned char ready; /* 0x290 */
} Registry_822444F0;

struct Lookup_822444F0;

typedef struct LookupVt_822444F0 {
    void *pad[14];
    unsigned char (*contains)(struct Lookup_822444F0 *self, void *value); /* 0x38 */
} LookupVt_822444F0;

typedef struct Lookup_822444F0 {
    LookupVt_822444F0 *vt;
} Lookup_822444F0;

typedef struct Context_822444F0 {
    char pad0[0x150];
    Lookup_822444F0 lookup; /* 0x150 */
} Context_822444F0;

typedef struct Vec_822444F0 {
    char pad0[0x1c];
    void *items; /* 0x1C */
} Vec_822444F0;

struct Owner_822444F0;

typedef struct OwnerVt_822444F0 {
    void *pad0[2];
    Context_822444F0 *(*getContext)(struct Owner_822444F0 *self); /* 0x08 */
} OwnerVt_822444F0;

typedef struct Owner_822444F0 {
    OwnerVt_822444F0 *vt; /* 0x00 */
    char pad4[0xc];
    Registry_822444F0 *registry; /* 0x10 */
    char pad14[0x6c];
    Vec_822444F0 *vec; /* 0x80 */
    char pad84[0xc];
    int lastState; /* 0x90 */
    char pad94;
    unsigned char flag95; /* 0x95 */
    unsigned char flag96; /* 0x96 */
    unsigned char flag97; /* 0x97 */
    unsigned char flag98; /* 0x98 */
} Owner_822444F0;

extern unsigned char fn_822446D8(Owner_822444F0 *self);
extern unsigned char fn_8288B760(Owner_822444F0 *self);
extern unsigned char fn_8288D868(Owner_822444F0 *self);
extern unsigned int fn_82247000(Owner_822444F0 *self);
extern unsigned char fn_82244A90(Owner_822444F0 *self, int id);
extern void fn_822449A8(Owner_822444F0 *self, unsigned char limited);
extern unsigned char fn_82244B58(void);
extern int fn_822AE460(void *items);
extern void fn_82381BC0(Node_822444F0 **it);

void fn_822444F0(Owner_822444F0 *self)
{
    unsigned char ok;
    unsigned char ready;
    int result;
    Node_822444F0 *it;
    Node_822444F0 *node;
    Lookup_822444F0 *lookup;

    if (!fn_822446D8(self)) {
        return;
    }
    if (fn_8288B760(self) && !fn_8288D868(self)) {
        return;
    }
    switch (fn_82247000(self)) {
    case 0:
        if (self->flag95) {
            fn_822449A8(self, 0);
        }
        break;
    case 1:
        if (!self->flag96) {
            self->flag96 = fn_82244B58();
        }
        ok = 0;
        ready = self->registry->ready;
        if (self->vec != 0) {
            result = 1;
            if (self->vec->items != 0) {
                result = fn_822AE460(self->vec->items);
            }
            ok = result == 1;
        }
        if (self->flag96 && ready && ok) {
            fn_822449A8(self, 0);
        }
        break;
    case 2:
        if (!self->flag98) {
            break;
        }
        if (fn_8288B760(self)) {
            if (!fn_82244A90(self, 2)) {
                break;
            }
            ok = 1;
            it = self->registry->head->left;
            while (it != self->registry->head) {
                node = it;
                lookup = &self->vt->getContext(self)->lookup;
                if (!lookup->vt->contains(lookup, node->value)) {
                    ok = 0;
                    break;
                }
                fn_82381BC0(&it);
            }
            if (ok) {
                fn_822449A8(self, 1);
            }
        } else {
            fn_822449A8(self, 1);
        }
        break;
    case 3:
        if (fn_8288B760(self)) {
            if (!self->flag97) {
                break;
            }
            if (!fn_82244A90(self, 3)) {
                break;
            }
        }
        fn_822449A8(self, 1);
        break;
    case 4:
        fn_822449A8(self, 0);
        break;
    }
    self->lastState = fn_82247000(self);
}
