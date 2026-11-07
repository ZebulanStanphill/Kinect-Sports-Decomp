typedef struct Array_82E0C5E0 {
    void **data;
    int size;
    int capacityAndFlags;
} Array_82E0C5E0;

typedef struct Source_82E0C5E0 Source_82E0C5E0;
typedef struct SourceVt_82E0C5E0 {
    void *s00[5];
    void (*getItems)(Source_82E0C5E0 *, Array_82E0C5E0 *);   /* 0x14 */
    void *s18;
    void (*remove)(Source_82E0C5E0 *, void *, int);          /* 0x1c */
} SourceVt_82E0C5E0;
struct Source_82E0C5E0 {
    SourceVt_82E0C5E0 *vt;
};

typedef struct Map_82E0C5E0 Map_82E0C5E0;
typedef struct MapVt_82E0C5E0 {
    void *s00[6];
    void (*replace)(Map_82E0C5E0 *, void *, void *, char *); /* 0x18 */
    void *s1c;
    void (*add)(Map_82E0C5E0 *, void *);                      /* 0x20 */
} MapVt_82E0C5E0;
struct Map_82E0C5E0 {
    MapVt_82E0C5E0 *vt;
};

typedef struct Mapper_82E0C5E0 Mapper_82E0C5E0;
typedef struct MapperVt_82E0C5E0 {
    void *s00[4];
    void *(*map)(Mapper_82E0C5E0 *, void *);                  /* 0x10 */
} MapperVt_82E0C5E0;
struct Mapper_82E0C5E0 {
    MapperVt_82E0C5E0 *vt;
};

typedef struct Owner_82E0C5E0 Owner_82E0C5E0;
typedef struct OwnerVt_82E0C5E0 {
    void *s00[9];
    Map_82E0C5E0 *(*getMap)(Owner_82E0C5E0 *);               /* 0x24 */
} OwnerVt_82E0C5E0;
struct Owner_82E0C5E0 {
    OwnerVt_82E0C5E0 *vt;
    int pad04[0x1d];
    void *f78;
    Source_82E0C5E0 *f7c;
};

typedef struct Alloc_82E0C5E0 Alloc_82E0C5E0;
typedef struct AllocVt_82E0C5E0 {
    void *s00[4];
    void (*bufFree)(Alloc_82E0C5E0 *, void *, int, int);      /* 0x10 */
} AllocVt_82E0C5E0;
struct Alloc_82E0C5E0 {
    AllocVt_82E0C5E0 *vt;
};

typedef struct Router_82E0C5E0 {
    int pad00[4];
    Alloc_82E0C5E0 *heap;   /* 0x10 */
} Router_82E0C5E0;

extern void fn_82CE4040(void *p);
extern void fn_82CE4118(void *p);
extern Router_82E0C5E0 *fn_82CE5410(void);
extern void *fn_82CEAC20(void *p);
extern Source_82E0C5E0 *fn_82E0BA38(Owner_82E0C5E0 *p);
extern char lbl_8323AE68[];

void fn_82E0C5E0(Owner_82E0C5E0 *self, Mapper_82E0C5E0 *mapper)
{
    unsigned char wasNull;
    Map_82E0C5E0 *map;
    Source_82E0C5E0 *src;
    Array_82E0C5E0 arr;
    Alloc_82E0C5E0 *heap;
    int i;

    wasNull = self->f78 == 0;
    map = self->vt->getMap(self);
    src = fn_82E0BA38(self);
    if (src != 0) {
        fn_82CE4040(src);
    }
    arr.data = 0;
    arr.size = 0;
    arr.capacityAndFlags = (int)0x80000000;
    src->vt->getItems(src, &arr);
    for (i = 0; i < arr.size; i++) {
        void *item = arr.data[i];
        void *mapped = mapper->vt->map(mapper, fn_82CEAC20(item));
        if (mapped != 0 && mapped != item) {
            src->vt->remove(src, mapped, 0);
            map->vt->replace(map, item, mapped, lbl_8323AE68);
            map->vt->add(map, mapped);
        }
    }
    if (wasNull) {
        fn_82CE4118(self->f78);
        self->f78 = 0;
    }
    fn_82CE4040(src);
    if (self->f7c != 0) {
        fn_82CE4118(self->f7c);
    }
    self->f7c = src;
    heap = fn_82CE5410()->heap;
    arr.size = 0;
    if ((arr.capacityAndFlags & (int)0x80000000) == 0) {
        heap->vt->bufFree(heap, arr.data, arr.capacityAndFlags & 0x3fffffff, 4);
    }
    arr.data = 0;
    arr.capacityAndFlags = (int)0x80000000;
    fn_82CE4118(src);
}
