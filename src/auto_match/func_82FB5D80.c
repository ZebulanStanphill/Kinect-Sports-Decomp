typedef struct IObj IObj;
typedef struct IObjVtbl {
    void (*fn0)(IObj *);
    void (*Release)(IObj *);
} IObjVtbl;
struct IObj {
    IObjVtbl *vtbl;
};

typedef struct Inner {
    unsigned char pad[0xd0];
    unsigned char flag;
} Inner;

typedef struct Self {
    unsigned char pad[0x44];
    Inner *inner;
    unsigned char pad2[8];
    int unk50;
} Self;

extern int fn_82FB2590(Inner *inner, int a, int *out);
extern unsigned char fn_82FB4BA8(Self *self, int key);
extern IObj *fn_82FB5408(Self *self, int key, int *out);
extern int fn_82FB5820(Self *self, int key, int *out, IObj **obj);

int fn_82FB5D80(Self *self, int a)
{
    int key;
    IObj *obj;
    int result[2];

    self->unk50 = 0;
    fn_82FB2590(self->inner, a, &key);
    if (self->inner->flag == 0 || fn_82FB4BA8(self, key) != 0) {
        obj = fn_82FB5408(self, key, result);
        if (obj != 0) {
            fn_82FB5820(self, key, result, &obj);
            if (obj != 0) {
                obj->vtbl->Release(obj);
                return result[0];
            }
        }
    }
    return 0;
}
