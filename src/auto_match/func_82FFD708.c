typedef struct Event_82FFD708 {
    unsigned int type;          /* 0x00 */
    int id;                     /* 0x04 */
    int argument;               /* 0x08 */
    int reserved0c;             /* 0x0c */
    unsigned int count;         /* 0x10 */
    unsigned int value;         /* 0x14 */
    unsigned int reserved18[3]; /* 0x18 */
} Event_82FFD708;
typedef struct Object_82FFD708 Object_82FFD708;

typedef struct Vtable_82FFD708 {
    void *reserved00[2];                /* 0x00 */
    void (*release)(Object_82FFD708 *); /* 0x08 */
} Vtable_82FFD708;

struct Object_82FFD708 {
    Vtable_82FFD708 *vtable; /* 0x00 */
};

extern char *lbl_832642E0;
extern int lbl_831BC768;
extern int fn_82FFD2A8(void *, unsigned int);
extern Object_82FFD708 *fn_82FAB9C0(void *, unsigned int);
extern void fn_82FFCAC8(void *, Object_82FFD708 *, unsigned char);
extern void fn_82FA5190(int, void *);
extern void fn_8300EE60(void *, int, unsigned int, int, int, int);

static __forceinline int processObject(char *self, unsigned int id)
{
    int status = 1;
    Object_82FFD708 *object = fn_82FAB9C0(lbl_832642E0 + 0x674, id);
    if (object != 0) {
        fn_82FFCAC8(self, object, 0);
        object->vtable->release(object);
    } else {
        status = 15;
    }
    return status;
}

int fn_82FFD708(char *self, Event_82FFD708 event)
{
    int result = 1;
    unsigned int value;
    unsigned int count = event.count;
    int extra;
    unsigned int notification;
    if (count == 1) {
        value = event.value;
        result = fn_82FFD2A8(self, value);
    } else {
        unsigned int *values = (unsigned int *)event.value;
        unsigned int index;
        for (index = 0; index < count; ++index) {
            result = processObject(self, values[index]);
            if (result != 1) {
                break;
            }
        }
        fn_82FA5190(lbl_831BC768, values);
        value = 0;
    }
    extra = -1;
    notification = 0;
    switch (event.type) {
    case 0:
    case 1:
        extra = value;
        notification = count;
        break;
    case 4:
        break;
    case 6:
    case 7:
        notification = count;
        break;
    default:
        notification = count == 1 ? value : 0;
        break;
    }
    fn_8300EE60(self + 0x4a4, event.id, notification, result, extra, event.argument);
    return result;
}
