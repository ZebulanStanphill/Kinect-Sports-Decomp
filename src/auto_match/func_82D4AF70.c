typedef struct { unsigned char b[0x11]; unsigned char f11; unsigned char p12[6]; int f18; int p1c; void *f20; int f24; void *f28; int f2c; int f30; int f34; } Elem_82D4AF70;
typedef struct { Elem_82D4AF70 *data; int size; int cap; } Arr_82D4AF70;
typedef struct { int pad[0x34 / 4]; Arr_82D4AF70 arr; } Obj_82D4AF70;
typedef struct { int pad[4]; void *alloc; } Heap_82D4AF70;
extern Heap_82D4AF70 *fn_82CE5410(void);
extern void fn_82CE63B0(void *alloc, void *arr, int elemSize);
extern void *memcpy(void *, const void *, unsigned int);
extern char lbl_8323B1A0[];

void fn_82D4AF70(Obj_82D4AF70 *p, void *src)
{
    Arr_82D4AF70 *a = &p->arr;
    Elem_82D4AF70 *e;
    int n;
    Heap_82D4AF70 *h = fn_82CE5410();

    if (a->size == (a->cap & 0x3fffffff))
        fn_82CE63B0(h->alloc, a, 0x38);
    e = a->data + a->size;
    if (e != 0) {
        e->f11 = 1;
        e->f30 = 1;
        e->f24 = 0;
        e->f2c = 0;
        e->f28 = 0;
        e->f20 = 0;
        e->f34 = -1;
        e->f18 = 0;
    }
    n = a->size;
    a->size = n + 1;
    e = a->data + n;
    memcpy(e, src, 0x38);
    if (e->f20 == 0) {
        e->f30 = 1;
        e->f28 = lbl_8323B1A0;
        e->f20 = lbl_8323B1A0;
    }
}
