typedef struct Obj_82FEB060 Obj_82FEB060;

typedef struct Vtbl_82FEB060 {
    void (*Destroy)(Obj_82FEB060 *self, int flags);
} Vtbl_82FEB060;

struct Obj_82FEB060 {
    Vtbl_82FEB060 *vt;
    int pad[0x16];
    int refCount; /* 0x5c */
};

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82FA5190(int heap, void *p);
extern unsigned char fn_83017108(int mgr, int a, Obj_82FEB060 *obj, int b, unsigned char *out);
extern Obj_82FEB060 *fn_8301A7B8(int mgr, int key);
extern int lbl_831BC768;
extern int lbl_832642EC;
extern int lbl_832642FC;
extern char lbl_8326434C[];

int fn_82FEB060(int param_1, int param_2, int param_3, unsigned char *param_4)
{
    Obj_82FEB060 *obj;
    unsigned char result;
    unsigned char flag;
    int heap;

    RtlEnterCriticalSection(lbl_8326434C);
    obj = fn_8301A7B8(lbl_832642EC, param_2);
    result = fn_83017108(lbl_832642FC, param_1, obj, param_3, &flag);
    *param_4 = flag == 0;
    if (obj != 0) {
        if (--obj->refCount <= 0) {
            heap = lbl_831BC768;
            obj->vt->Destroy(obj, 0);
            fn_82FA5190(heap, obj);
        }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    return result == 1 ? 1 : 2;
}
