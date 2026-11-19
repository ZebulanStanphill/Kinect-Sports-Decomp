typedef struct Object_830553E0 {
    void *vtable; /* 0x0 */
    unsigned char pad4[0x74];
    void *secondaryVtable; /* 0x78 */
    unsigned char pad7c[0x24];
    unsigned char flag; /* 0xa0 */
    unsigned char padA1[7];
} Object_830553E0;

extern void *lbl_831BC978;
extern char lbl_8217E0F0[];
extern char lbl_8217E0C0[];

extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_8304F0A8(void *self, int amount);
extern void fn_83050B90(Object_830553E0 *object);
extern Object_830553E0 *fn_83055100(void *memory);
extern int fn_830500F0(Object_830553E0 *object, void *self, void *arg1, void *arg2);
extern void fn_8304FC90(Object_830553E0 *object);
extern void fn_830516C8(void *self, Object_830553E0 *object);

Object_830553E0 *fn_830553E0(void *self, void *arg1, void *arg2, void **out)
{
    Object_830553E0 *object;

    *out = 0;
    object = (Object_830553E0 *)fn_82FA5060(lbl_831BC978, 0xa8);
    if (object != 0) {
        fn_83050B90(object);
        object->vtable = lbl_8217E0F0;
        object->secondaryVtable = lbl_8217E0C0;
        object->flag = 0;
    } else {
        void *memory;
        fn_8304F0A8(self, 100);
        memory = fn_82FA5060(lbl_831BC978, 0xa8);
        if (memory == 0) {
            return 0;
        }
        object = fn_83055100(memory);
        if (object == 0) {
            return 0;
        }
    }
    if (fn_830500F0(object, self, arg1, arg2) == 1) {
        fn_830516C8(self, object);
        *out = object ? &object->secondaryVtable : 0;
        return object;
    }
    if (object != 0) {
        fn_8304FC90(object);
    }
    return 0;
}
