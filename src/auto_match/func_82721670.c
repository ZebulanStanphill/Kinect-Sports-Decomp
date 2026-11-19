extern void fn_826959C8(void *value);
extern void *fn_826A7398(int movie);
extern void *fn_826957D0(void *self, int index);
extern double fn_826972E0(void *value, int movie);
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82744378(void *memory, int movie);
extern void fn_82743888(void *object, int movie, void *point);
extern void fn_82696BC8(void *value, void *object);
extern void fn_826824B0(void *object);
extern double fn_82F68918(double x);

typedef struct Point_82721670 {
    double x;
    double y;
} Point_82721670;

typedef struct Entry_82721670 {
    int pad0[5];
    float x; /* 0x14 */
    float y; /* 0x18 */
    int pad1c[2];
} Entry_82721670;

typedef struct VT_82721670 {
    int pad[0xd0 / 4];
    unsigned int (*count)(void *self); /* 0xd0 */
} VT_82721670;

typedef struct Manager_82721670 {
    VT_82721670 *vt;
    int pad[0x944 / 4 - 1];
    Entry_82721670 entries[4]; /* 0x944 */
} Manager_82721670;

typedef struct Root_82721670 {
    char pad0[0x288];
    void *heap; /* 0x288 */
} Root_82721670;

typedef struct Movie_82721670 {
    char pad0[0x78];
    Root_82721670 *root; /* 0x78 */
} Movie_82721670;

typedef struct Args_82721670 {
    int pad0;
    unsigned char *result; /* 0x04 */
    int pad8[4];
    int movie; /* 0x18 */
    int count; /* 0x1c */
} Args_82721670;

static __forceinline void SetPoint(Point_82721670 *point, double x, double y)
{
    point->x = x * 0.05;
    point->y = y * 0.05;
}

void fn_82721670(Args_82721670 *args)
{
    unsigned char *result = args->result;
    Manager_82721670 *manager;
    unsigned int index;
    Entry_82721670 *entry;
    void *memory;
    void *object;
    double x;
    double y;
    Point_82721670 point;

    fn_826959C8(result);
    *result = 0;
    manager = (Manager_82721670 *)fn_826A7398(args->movie);
    index = 0;
    if (args->count > 0) {
        int movie = args->movie;
        index = (int)fn_826972E0(fn_826957D0(args, 0), movie);
    }
    if (index < manager->vt->count(manager)) {
        if (index >= 4) {
            entry = 0;
        } else {
            entry = &manager->entries[index];
        }
        x = entry->x;
        y = entry->y;
        memory = fn_8267B890(((Movie_82721670 *)args->movie)->root->heap, 0x30, 0);
        if (memory != 0) {
            object = fn_82744378(memory, args->movie);
        } else {
            object = 0;
        }
        SetPoint(&point, fn_82F68918(x + 0.5), fn_82F68918(y + 0.5));
        fn_82743888(object, args->movie, &point);
        fn_82696BC8(args->result, object);
        if (object != 0) {
            fn_826824B0(object);
        }
    }
}
