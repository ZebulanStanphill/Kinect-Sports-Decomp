typedef struct Object_830552F8 {
    void *vtable; /* 0x0 */
    unsigned char pad4[0x74];
    void *secondaryVtable; /* 0x78 */
    unsigned char pad7c[0x34];
    unsigned __int64 stamp;     /* 0xb0 */
    unsigned char pending : 1;  /* 0xb8, 0x80 */
    unsigned char detached : 1; /* 0xb8, 0x40 */
    unsigned char bits : 6;
    unsigned char padB9[7];
} Object_830552F8;

extern int fn_830510E0(Object_830552F8 *object, void *owner, void *arg1, void *request, void *arg3,
                       void *context);

int fn_830552F8(Object_830552F8 *object, void *owner, void *arg1, void *request, void *arg3, void *context)
{
    object->stamp = 0;
    object->pending = 0;
    return fn_830510E0(object, owner, arg1, request, arg3, context);
}
