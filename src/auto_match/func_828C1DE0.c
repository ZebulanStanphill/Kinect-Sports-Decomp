typedef struct Handle_828C1DE0 {
    char pad[8];
    int state;
} Handle_828C1DE0;

typedef struct Array_828C1DE0 {
    char *begin;
    char *end;
    char *capacity;
    int reserved;
} Array_828C1DE0;

typedef struct Owner_828C1DE0 {
    char pad[0x8c];
    Handle_828C1DE0 *handle;
    char pad90[0x10];
    int state;
    char pada4[0x64];
    Array_828C1DE0 first[4];
    Array_828C1DE0 second[4];
} Owner_828C1DE0;

extern unsigned char fn_828AD0F8(Owner_828C1DE0 *);
extern unsigned char fn_828AD488(Owner_828C1DE0 *);
extern unsigned char fn_828C4240(Owner_828C1DE0 *);
extern unsigned char fn_828ACC40(Owner_828C1DE0 *);
extern void fn_828C3E70(Owner_828C1DE0 *);
extern void fn_828A1C38(Handle_828C1DE0 **);
extern char *fn_825178E0(char *, char *, char *, unsigned char);
extern void fn_82239010(char *, char *, void *, unsigned char);

static __forceinline void Clear_828C1DE0(Array_828C1DE0 *array)
{
    unsigned char moveTag;
    unsigned char destroyTag;
    char *last = array->end;
    if (array->begin != last) {
        char *end = fn_825178E0(last, last, array->begin, moveTag);
        fn_82239010(end, array->end, &array->reserved, destroyTag);
        array->end = end;
    }
}

unsigned char fn_828C1DE0(Owner_828C1DE0 *self)
{
    unsigned char ready;
    int index;
    ready = fn_828AD0F8(self) || fn_828AD488(self) || fn_828C4240(self);
    ready = ready && fn_828ACC40(self);
    ready = ready && self->handle != 0;
    ready = ready && self->handle->state == 0;
    if (ready) {
        fn_828C3E70(self);
        if (self->handle != 0) {
            fn_828A1C38(&self->handle);
            self->handle = 0;
        }
        self->state = 0;
        for (index = 0; index < 4; ++index) {
            Clear_828C1DE0(&self->first[index]);
            Clear_828C1DE0(&self->second[index]);
        }
    }
    return ready;
}
