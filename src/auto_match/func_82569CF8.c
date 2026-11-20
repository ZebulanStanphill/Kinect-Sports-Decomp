typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

typedef struct Element_82569CF8 {
    char pad0[0x2c];
    unsigned int pad2c_hi : 26; /* 0x2c */
    unsigned int state : 4;
    unsigned int pad2c_lo : 2;
} Element_82569CF8;

typedef struct List_82569CF8 {
    char pad00[0x30];
    unsigned char byte30; /* 0x30 */
} List_82569CF8;

typedef struct Data_82569CF8 {
    char pad0[0x14];
    List_82569CF8 *list; /* 0x14 */
} Data_82569CF8;

typedef struct Source_82569CF8 {
    char pad0[0x8];
    Data_82569CF8 *data; /* 0x08 */
    char padc[0x4];
    void *buffer; /* 0x10 */
    char pad14[0x14];
    unsigned char flags; /* 0x28 */
} Source_82569CF8;

typedef struct Entry_82569CF8 {
    __vector4 value;         /* 0x00 */
    int unknown10;           /* 0x10 */
    Source_82569CF8 *source; /* 0x14 */
} Entry_82569CF8;

typedef struct Lock_82569CF8 {
    unsigned int handle;
    unsigned int count;
} Lock_82569CF8;

extern unsigned int fn_82569B10(void);
extern void fn_82549610(Lock_82569CF8 *lock, unsigned int manager);
extern void fn_82A1BB18(void);
extern void fn_8259C738(unsigned int handle);
extern unsigned int fn_828385E0(List_82569CF8 *list);
extern void *fn_82522D98(unsigned int size);
extern void *XMemCpy(void *dest, const void *src, unsigned long size);
extern unsigned char fn_8284C860(List_82569CF8 *list);
extern void fn_82837D98(List_82569CF8 *list, int index, Element_82569CF8 **out);
extern unsigned char fn_8256B190(void *item, float scale, __vector4 *value, float *w);

unsigned char fn_82569CF8(void *item, Entry_82569CF8 *entry)
{
    Lock_82569CF8 lock;
    unsigned char ok;

    fn_82549610(&lock, fn_82569B10());
    ok = 1;
    if (entry != 0) {
        Source_82569CF8 *source = entry->source;
        if (source != 0) {
            if (source->buffer == 0) {
                unsigned int size = fn_828385E0(source->data->list);
                Data_82569CF8 *data;
                unsigned int i;
                if (source->buffer == 0) {
                    source->buffer = fn_82522D98(size);
                }
                XMemCpy(source->buffer, source->data->list, size);
                data = source->data;
                for (i = 0; i < fn_8284C860(data->list); i++) {
                    Element_82569CF8 *element;
                    fn_82837D98(data->list, i, &element);
                    element->state = 1;
                }
            }
            source->flags &= 0xf7;
            {
                __vector4 value;
                float w;
                ok = fn_8256B190(item, (float)source->data->list->byte30, &value, &w);
                value.v[3] = w;
                entry->value = value;
            }
        }
    }
    fn_82A1BB18();
    fn_8259C738(lock.handle);
    return ok;
}
