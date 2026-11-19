typedef struct Object_830554D8 {
    void *vtable; /* 0x0 */
    unsigned char pad4[0x74];
    void *secondaryVtable; /* 0x78 */
    unsigned char pad7c[0x34];
    unsigned __int64 stamp;     /* 0xb0 */
    unsigned char pending : 1;  /* 0xb8, 0x80 */
    unsigned char detached : 1; /* 0xb8, 0x40 */
    unsigned char bits : 6;
    unsigned char padB9[7];
} Object_830554D8;

typedef struct Owner_830554D8 {
    unsigned char pad0[0x84];
    void *context; /* 0x84 */
} Owner_830554D8;

typedef struct Request_830554D8 {
    unsigned char pad0[0x10];
    unsigned char size; /* 0x10 */
} Request_830554D8;

extern void *lbl_831BC978;
extern char lbl_8217E150[];
extern char lbl_8217E11C[];

extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_8304F0A8(Owner_830554D8 *self, int amount);
extern void fn_83050FC0(Object_830554D8 *object);
extern Object_830554D8 *fn_83055280(void *memory);
extern int fn_830510E0(Object_830554D8 *object, Owner_830554D8 *self, void *arg1, Request_830554D8 *request,
                       void *arg3, void *context);
extern void fn_8304FC90(Object_830554D8 *object);
extern void fn_830516C8(Owner_830554D8 *self, Object_830554D8 *object);

Object_830554D8 *fn_830554D8(Owner_830554D8 *self, void *arg1, Request_830554D8 *request, void *arg3,
                             void **out)
{
    Object_830554D8 *object;
    void *context;

    *out = 0;
    object = (Object_830554D8 *)fn_82FA5060(lbl_831BC978, 0xc0);
    if (object != 0) {
        fn_83050FC0(object);
        object->vtable = lbl_8217E150;
        object->secondaryVtable = lbl_8217E11C;
        object->detached = 0;
    } else {
        void *memory;
        fn_8304F0A8(self, request->size);
        memory = fn_82FA5060(lbl_831BC978, 0xc0);
        if (memory == 0) {
            goto failed;
        }
        object = fn_83055280(memory);
        if (object == 0) {
            goto failed;
        }
    }
    context = self->context;
    object->stamp = 0;
    object->pending = 0;
    if (fn_830510E0(object, self, arg1, request, arg3, context) == 1) {
        fn_830516C8(self, object);
        *out = &object->secondaryVtable;
        return object;
    }
    fn_8304FC90(object);
failed:
    *out = 0;
    return 0;
}
