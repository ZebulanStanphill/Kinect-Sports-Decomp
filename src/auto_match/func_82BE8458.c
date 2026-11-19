long _InterlockedIncrement(long volatile *target);

typedef struct Object_82BE8458 Object_82BE8458;

typedef struct ObjectVtbl_82BE8458 {
    void (*destroy)(Object_82BE8458 *self, int flags);
} ObjectVtbl_82BE8458;

struct Object_82BE8458 {
    ObjectVtbl_82BE8458 *vt; /* 0x0 */
    unsigned int started;    /* 0x4 */
};

typedef struct Queue_82BE8458 {
    char pad0[0x8];
    int count; /* 0x8 */
} Queue_82BE8458;

typedef struct Config_82BE8458 {
    char pad0[0x14];
    unsigned short flags; /* 0x14 */
} Config_82BE8458;

extern Object_82BE8458 *lbl_8322B1DC;
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;
extern int lbl_8322B1E4;
extern long lbl_8322B1E8;

extern void *fn_82BE56B0(unsigned int size);
extern Object_82BE8458 *fn_82BE74D0(void *memory, unsigned int size);
extern Queue_82BE8458 *fn_82BE7E28(void);
extern unsigned int fn_82BE8020(Object_82BE8458 *self, Queue_82BE8458 *queue);
extern void fn_82BE5340(Queue_82BE8458 *queue);
extern Object_82BE8458 *fn_82BE5378(Queue_82BE8458 *queue);
extern void fn_82BE5350(Queue_82BE8458 *queue);
extern void fn_82BE5478(Queue_82BE8458 *queue);
extern void fn_82BE54C0(Queue_82BE8458 *queue);
extern void fn_82BE56C0(Queue_82BE8458 *queue);

Object_82BE8458 *fn_82BE8458(Config_82BE8458 *config)
{
    void *memory;
    Queue_82BE8458 *queue;
    Object_82BE8458 *item;
    Object_82BE8458 *instance;

    if (lbl_8322B1DC != 0) {
        return lbl_8322B1DC;
    }
    if (config->flags & 0x20) {
        lbl_83175244 = 0x4000;
        lbl_83175240 = 0x4000;
    } else if (config->flags & 0x40) {
        lbl_83175244 = 0x1000;
        lbl_83175240 = 0x1000;
    } else {
        lbl_83175244 = 0x2000;
        lbl_83175240 = 0x2000;
    }
    memory = fn_82BE56B0(200);
    if (memory != 0) {
        lbl_8322B1DC = fn_82BE74D0(memory, lbl_83175240);
    } else {
        lbl_8322B1DC = 0;
    }
    if (lbl_8322B1DC == 0) {
        return 0;
    }
    instance = lbl_8322B1DC;
    if (instance->started == 0) {
        _InterlockedIncrement(&lbl_8322B1E8);
        lbl_8322B1E4 = 0;
        queue = fn_82BE7E28();
        if (queue == 0) {
            instance = lbl_8322B1DC;
        } else {
            if (fn_82BE8020(lbl_8322B1DC, queue) != 0) {
                fn_82BE5340(queue);
                while (queue->count != 0) {
                    item = fn_82BE5378(queue);
                    if (item != 0) {
                        item->vt->destroy(item, 1);
                    }
                    fn_82BE5350(queue);
                }
                fn_82BE5478(queue);
                fn_82BE54C0(queue);
                fn_82BE56C0(queue);
                instance = lbl_8322B1DC;
            } else {
                goto done;
            }
        }
        if (instance == 0) {
            goto clear;
        }
    }
    instance->vt->destroy(instance, 1);
clear:
    lbl_8322B1DC = 0;
    return 0;

done:
    return lbl_8322B1DC;
}
