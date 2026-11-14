typedef struct Map_82E0F2A8 {
    void *elems;
    int size;
    int hashMod;
} Map_82E0F2A8;

typedef struct Memory_82E0F2A8 {
    int pad[4];
    void *alloc; /* 0x10 */
} Memory_82E0F2A8;

typedef struct Factory_82E0F2A8 Factory_82E0F2A8;
typedef struct FactoryVt_82E0F2A8 {
    void *slots[4];
    void *(*create)(Factory_82E0F2A8 *self, void *cls); /* 0x10 */
} FactoryVt_82E0F2A8;
struct Factory_82E0F2A8 { FactoryVt_82E0F2A8 *vt; };

typedef struct Listener_82E0F2A8 Listener_82E0F2A8;
typedef struct ListenerVt_82E0F2A8 {
    void *slots[6];
    void (*onObject)(Listener_82E0F2A8 *self, void *obj, void *copy, void *cls); /* 0x18 */
    void *slot1c;
    void (*onCreated)(Listener_82E0F2A8 *self, void *copy); /* 0x20 */
} ListenerVt_82E0F2A8;
struct Listener_82E0F2A8 { ListenerVt_82E0F2A8 *vt; };

extern char lbl_8323AE68[];
extern Memory_82E0F2A8 *fn_82CE5410(void);
extern void fn_82CEA160(Map_82E0F2A8 *map, void *alloc, void *key, void *value);
extern int fn_82CEA220(Map_82E0F2A8 *map, void *key);
extern void *fn_82CEAC20(void *obj);

void fn_82E0F2A8(Listener_82E0F2A8 *self, void **objPtr, Factory_82E0F2A8 *factory, Map_82E0F2A8 *done)
{
    void *copy;
    if (*objPtr != 0 && fn_82CEA220(done, *objPtr) > done->hashMod) {
        copy = factory->vt->create(factory, fn_82CEAC20(*objPtr));
        if (copy != 0) {
            void *obj = *objPtr;
            Memory_82E0F2A8 *mem = fn_82CE5410();
            fn_82CEA160(done, mem->alloc, copy, obj);
            self->vt->onObject(self, *objPtr, copy, lbl_8323AE68);
            self->vt->onCreated(self, copy);
        } else {
            self->vt->onObject(self, *objPtr, 0, 0);
        }
    }
}
