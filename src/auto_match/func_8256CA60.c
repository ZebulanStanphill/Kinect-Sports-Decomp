typedef struct Path_8256CA60 {
    int a;     /* 0x00 */
    __int64 b; /* 0x08 */
    int c;     /* 0x10 */
    int d;     /* 0x14 */
} Path_8256CA60;

typedef struct Paths_8256CA60 {
    Path_8256CA60 first;  /* 0x00 */
    Path_8256CA60 second; /* 0x18 */
} Paths_8256CA60;

typedef struct Value_8256CA60 {
    unsigned int key;     /* 0x00 */
    Paths_8256CA60 paths; /* 0x08 */
} Value_8256CA60;

typedef struct Node_8256CA60 {
    struct Node_8256CA60 *next; /* 0x00 */
    struct Node_8256CA60 *prev; /* 0x04 */
    Value_8256CA60 value;       /* 0x08 */
} Node_8256CA60;

typedef struct Insert_8256CA60 {
    Node_8256CA60 *where;
    unsigned char inserted;
} Insert_8256CA60;

typedef struct HashMap_8256CA60 {
    int traits;          /* 0x00 */
    Node_8256CA60 *head; /* 0x04 */
    unsigned int size;   /* 0x08 */
} HashMap_8256CA60;

typedef struct BundleEntry_8256CA60 {
    unsigned int key;    /* 0x00 */
    unsigned int first;  /* 0x04 */
    unsigned int second; /* 0x08 */
} BundleEntry_8256CA60;

typedef struct Bundle_8256CA60 {
    float version; /* 0x00 */
    int count;     /* 0x04 */
    char pad08[0x10 - 0x8];
    BundleEntry_8256CA60 *entries; /* 0x10 */
} Bundle_8256CA60;

extern int fn_82816E40(int tag);
extern unsigned int fn_8259A070(int *tag, unsigned int *key, int *size, Node_8256CA60 **where,
                                Bundle_8256CA60 **bundle, int a, int b);
extern float fn_8265BC60(const char *name);
extern void fn_827D9658(Path_8256CA60 *path);
extern void fn_827D9630(Path_8256CA60 *path, const Path_8256CA60 *other);
extern Path_8256CA60 *fn_825200F0(Path_8256CA60 *out, unsigned int *name);
extern void fn_8259BB38(Node_8256CA60 **out, HashMap_8256CA60 *map, unsigned int *key);
extern Insert_8256CA60 *fn_8256DE90(Insert_8256CA60 *out, HashMap_8256CA60 *map, const Value_8256CA60 *value);
extern void fn_82814F70(unsigned int handle);

static __forceinline void CopyPath(Path_8256CA60 *dst, const Path_8256CA60 *src)
{
    *dst = *src;
}

void fn_8256CA60(HashMap_8256CA60 *self, int tag)
{
    Bundle_8256CA60 *bundle = 0;
    unsigned int key = 0;
    Node_8256CA60 *where;
    unsigned int handle;

    {
        int size = 0;

        where = 0;

        if (fn_82816E40(tag) != 0)
            handle = fn_8259A070(&tag, &key, &size, &where, &bundle, 1, 0);
        else
            handle = 0;
    }
    if (handle != 0) {
        Bundle_8256CA60 *data = bundle;
        float version = fn_8265BC60("BundleLookup");
        float found = data->version;
        float low;

        low = version - 0.001f;
        if ((found >= low && found <= version + 0.001f) || (found >= 281.409f && found <= 281.411f)) {
            int i;

            for (i = 0; i < data->count; i++) {
                Paths_8256CA60 paths;
                Path_8256CA60 path1;
                Path_8256CA60 path2;
                unsigned int entryKey;

                fn_827D9658(&paths.first);
                fn_827D9658(&paths.second);
                CopyPath(&paths.first, fn_825200F0(&path1, &data->entries[i].first));
                CopyPath(&paths.second, fn_825200F0(&path2, &data->entries[i].second));
                entryKey = data->entries[i].key;
                key = entryKey;
                fn_8259BB38(&where, self, &key);
                if (where == self->head) {
                    Paths_8256CA60 empty;
                    Value_8256CA60 value;
                    Insert_8256CA60 result;

                    fn_827D9658(&empty.first);
                    fn_827D9658(&empty.second);
                    value.key = entryKey;
                    fn_827D9630(&value.paths.first, &empty.first);
                    fn_827D9630(&value.paths.second, &empty.second);
                    where = fn_8256DE90(&result, self, &value)->where;
                }
                where->value.paths = paths;
            }
        }
        fn_82814F70(handle);
    }
}
