typedef struct Resource_82703770 {
    char pad00[0x20];
    int handle;
} Resource_82703770;

typedef struct Settings_82703770 {
    char pad00[8];
    unsigned int first;
    char pad0c[0x30];
    unsigned int second;
} Settings_82703770;

typedef struct Defaults_82703770 {
    char pad00[0x14];
    unsigned int value;
} Defaults_82703770;

typedef struct State_82703770 {
    char pad00[0x14];
    void *heap;
    char pad18[0xe8];
    Defaults_82703770 *defaults;
} State_82703770;

typedef struct Handle_82703770 Handle_82703770;

typedef struct HandleVt_82703770 {
    void *pad00[2];
    void (*release)(Handle_82703770 *self, unsigned int token);
} HandleVt_82703770;

struct Handle_82703770 {
    const HandleVt_82703770 *vt;
};

typedef struct Owner_82703770 {
    Handle_82703770 *object;
    unsigned int token;
} Owner_82703770;

extern const char lbl_82196582[1];
extern int fn_826D90B0(Owner_82703770 *out, const char *name, int a, int b, int c, int d);
extern Resource_82703770 *fn_826E4198(void *a, void *b, const void *c, void *heap, void *d, void *e);
extern void fn_826D9C00(int handle);
extern void fn_826F3458(Settings_82703770 *settings, Resource_82703770 *resource);
extern void *fn_8267B890(void *heap, unsigned int size, unsigned int flags);
extern void *fn_826DC518(void *memory, Resource_82703770 *resource, unsigned int first, unsigned int second,
                         int flags, unsigned int defaults, void *heap, int useCache, int reserved);
extern void *fn_826D4148(void *memory, Resource_82703770 *resource, void *adapter, State_82703770 *self,
                         int flags, unsigned int *options, unsigned char enabled);
extern void fn_826CDDC0(void *self, unsigned int level);
extern unsigned int fn_82703090(State_82703770 *self, unsigned int level, void *result);
extern void fn_82687270(void *self);

void *fn_82703770(State_82703770 *self, Settings_82703770 *settings, unsigned int level)
{
    Owner_82703770 owner;
    const char *name = lbl_82196582;
    Resource_82703770 *resource;

    fn_826D90B0(&owner, name, 0, 0, 0, 0);
    resource = fn_826E4198(&owner, 0, name, self->heap, 0, 0);
    if (resource == 0) {
    } else {
        void *adapter;
        void *memory;

        fn_826D9C00(resource->handle);
        fn_826F3458(settings, resource);
        memory = fn_8267B890(self->heap, 0x20, 0);
        if (memory != 0) {
            unsigned int first2;
            Defaults_82703770 *defaults = self->defaults;
            unsigned int second = settings->second;
            first2 = settings->first;
            adapter = fn_826DC518(memory, resource, first2, second, 0, defaults->value, self->heap, 1, 0);
        } else {
            adapter = 0;
        }
        if (adapter == 0) {
            fn_82687270(resource);
            goto failure;
        } else {
            void *result;
            memory = fn_8267B890(self->heap, 0x1d8, 0);
            if (memory != 0) {
                unsigned int options = 0x40000;
                result = fn_826D4148(memory, resource, adapter, self, 0, &options, 1);
            } else {
                result = 0;
            }
            fn_826CDDC0(result, level);
            fn_82703090(self, level, result);
            fn_82687270(adapter);
            fn_82687270(resource);
            if (owner.object)
                owner.object->vt->release(owner.object, owner.token);
            return result;
        }
    }
failure:
    if (owner.object)
        owner.object->vt->release(owner.object, owner.token);
    return 0;
}
