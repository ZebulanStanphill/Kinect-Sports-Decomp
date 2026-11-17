extern void fn_82D93670(void *self, unsigned int key, unsigned __int64 value);
extern void *fn_827F04B0(unsigned int size);
extern void *fn_82554260(void *self, void *owner, int count);
extern void fn_827F2DD0(void *self, void *instance, float time, int mode, int flags);
extern void fn_827EFC90(void *self, unsigned short id, void *data, void *context);
extern char lbl_831D4550[];
typedef struct Owner_825B46F0 Owner_825B46F0;

typedef struct Vtable_825B46F0 {
    void *pad[19];                         /* 0x00 */
    void *(*create)(Owner_825B46F0 *self); /* 0x4c */
} Vtable_825B46F0;

struct Owner_825B46F0 {
    Vtable_825B46F0 *vtable; /* 0x00 */
};

typedef struct Resource_825B46F0 {
    Owner_825B46F0 *owner; /* 0x00 */
    char pad[0x13c];       /* 0x04 */
    void *instance;        /* 0x140 */
    void *controller;      /* 0x144 */
} Resource_825B46F0;

typedef struct Entry_825B46F0 {
    char pad[0xd4];              /* 0x00 */
    void *properties;            /* 0xd4 */
    char padD8[0xc];             /* 0xd8 */
    Resource_825B46F0 *resource; /* 0xe4 */
    int reserved;                /* 0xe8 */
    int disabled;                /* 0xec */
    int reservedF0;              /* 0xf0 */
    unsigned int id;             /* 0xf4 */
    char tail[0x3f0 - 0xf8];     /* 0xf8 */
} Entry_825B46F0;

void fn_825B46F0(unsigned int *range)
{
    unsigned int address = range[0];
    unsigned int end = range[1];
    if (address < end) {
        unsigned __int64 key = address;
        do {
            Entry_825B46F0 *entry = (Entry_825B46F0 *)address;
            if (entry->properties != 0) {
                fn_82D93670(entry->properties, 0x201f, key);
            }
            if (entry->disabled == 0) {
                Resource_825B46F0 *resource = entry->resource;
                if (resource->instance == 0) {
                    void *controller;
                    resource->instance = resource->owner->vtable->create(resource->owner);
                    controller = fn_827F04B0(0x1a0);
                    if (controller != 0) {
                        controller = fn_82554260(controller, resource->instance, 1);
                    } else {
                        controller = 0;
                    }
                    resource->controller = controller;
                    fn_827F2DD0(resource->instance, controller, 0.0f, 0x12, 0);
                }
                fn_827EFC90(resource->instance, entry->id, lbl_831D4550, entry);
            }
            address += 0x3f0;
            key += 0x3f0;
        } while (address < end);
    }
}
