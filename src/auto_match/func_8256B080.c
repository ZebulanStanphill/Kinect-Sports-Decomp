long _InterlockedIncrement(long volatile *value);

typedef struct Element_8256B080 {
    char pad0[0x2c];
    unsigned int pad2c_hi : 26; /* 0x2c */
    unsigned int state : 4;
    unsigned int pad2c_lo : 2;
} Element_8256B080;

typedef struct Data_8256B080 {
    char pad0[0x10];
    void *handle; /* 0x10 */
    void *list;   /* 0x14 */
} Data_8256B080;

typedef struct Resource_8256B080 {
    char pad0[0x8];
    Data_8256B080 *data; /* 0x8 */
    char padc[0x8];
    void *handle;      /* 0x14 */
    unsigned int name; /* 0x18 */
} Resource_8256B080;

typedef struct Request_8256B080 {
    int m0;                      /* 0x0 */
    Resource_8256B080 *resource; /* 0x4 */
    int m8;                      /* 0x8 */
} Request_8256B080;

typedef struct Manager_8256B080 {
    char pad0[0x78];
    long pending; /* 0x78 */
} Manager_8256B080;

extern Data_8256B080 *fn_8251F720(unsigned int *name, int flags);
extern unsigned char fn_8284C860(void *list);
extern void fn_82837D98(void *list, int index, Element_8256B080 **out);
extern void *fn_82522D98(unsigned int size);
extern Manager_8256B080 *fn_82569B10(void);
extern void fn_8256ABF0(void);
extern unsigned int fn_8251F468(unsigned int *name, Data_8256B080 **out, int kind, void *async,
                                void (*callback)(void), Request_8256B080 *request, int a, int b);

void fn_8256B080(unsigned int *name, void *async, Resource_8256B080 *resource)
{
    Data_8256B080 *data;
    Element_8256B080 *element;
    Request_8256B080 *request;
    unsigned int i;

    resource->name = *name;
    if (async == 0) {
        data = fn_8251F720(&resource->name, 0);
        resource->data = data;
        for (i = 0; i < fn_8284C860(data->list); i++) {
            fn_82837D98(data->list, i, &element);
            element->state = 1;
        }
        resource->handle = resource->data->handle;
    } else {
        request = (Request_8256B080 *)fn_82522D98(0xc);
        request->resource = resource;
        request->m0 = 0;
        request->m8 = 0;
        _InterlockedIncrement(&fn_82569B10()->pending);
        fn_8251F468(&resource->name, &resource->data, 3, async, fn_8256ABF0, request, 1, 1);
    }
}
