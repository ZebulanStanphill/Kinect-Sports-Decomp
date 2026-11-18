typedef struct Object_82BED468 Object_82BED468;

typedef struct Vtable_82BED468 {
    void (*destroy)(Object_82BED468 *self, int flags); /* 0x0 */
    int (*key)(Object_82BED468 *self);                 /* 0x4 */
} Vtable_82BED468;

struct Object_82BED468 {
    Vtable_82BED468 *vt; /* 0x0 */
    char pad4[8];
    int owner; /* 0xc */
};

typedef struct Input_82BED468 {
    char pad0[8];
    int data;          /* 0x8 */
    unsigned int size; /* 0xc */
} Input_82BED468;

typedef struct State_82BED468 {
    char pad0[0xc];
    char table[0x44]; /* 0xc */
    int state;        /* 0x50 */
} State_82BED468;

extern Object_82BED468 *fn_82BECFD8(State_82BED468 *self, unsigned int version, void *data,
                                    unsigned int size);
extern int fn_82BF7890(void *table, int *key, Object_82BED468 *object);

int fn_82BED468(State_82BED468 *self, Input_82BED468 *input)
{
    unsigned int *p;
    unsigned int *end;
    Object_82BED468 *object;
    int owner;
    unsigned int version;
    unsigned int bytes;
    int key;

    if (self->state == 2 || !input || !input->data || !input->size || input->size < 4) {
        return 0;
    }
    p = (unsigned int *)input->data;
    version = *p;
    end = (unsigned int *)((char *)p + input->size);
    if (version > 0) {
        return 0;
    }
    ++p;
    while (p < end) {
        bytes = *p++;
        object = fn_82BECFD8(self, version, p, bytes);
        if (!object) {
            return 0;
        }
        p = (unsigned int *)((char *)p + bytes);
        owner = object->owner;
        if (owner == 0) {
            object->vt->destroy(object, 1);
            return 0;
        }
        key = ((Object_82BED468 *)owner)->vt->key((Object_82BED468 *)owner);
        if (!fn_82BF7890(self->table, &key, object)) {
            object->vt->destroy(object, 1);
            return 0;
        }
    }
    self->state = 1;
    return 1;
}
