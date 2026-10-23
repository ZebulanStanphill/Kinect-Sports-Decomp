typedef struct {
    char pad0[8];
    int enabled;
    int count;
    char pad10[8];
    char cs[0x1c];
} Lock;

typedef struct {
    int pad0;
    unsigned short active;
    short refs;
} Obj;

extern void *KeTlsGetValue(unsigned int index);
extern int KeTlsSetValue(unsigned int index, void *value);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

extern Lock *lbl_8323A960;
extern unsigned int lbl_8323A964;

#define OWNER_TAG ((void *)0x23df4554)

static void Lock_Enter(Lock *l)
{
    if (KeTlsGetValue(lbl_8323A964) == OWNER_TAG) {
        l->count++;
    } else {
        RtlEnterCriticalSection(l->cs);
        l->count = 1;
        KeTlsSetValue(lbl_8323A964, OWNER_TAG);
    }
}

static void Lock_Leave(Lock *l)
{
    if (--l->count <= 0) {
        KeTlsSetValue(lbl_8323A964, 0);
        RtlLeaveCriticalSection(l->cs);
    }
}

void fn_82CE4040(Obj *o)
{
    Lock *l;

    if (o->active != 0) {
        l = lbl_8323A960;
        if (l->enabled == 1 && KeTlsGetValue(lbl_8323A964) != OWNER_TAG) {
            Lock_Enter(l);
            o->refs++;
            Lock_Leave(l);
        } else {
            o->refs++;
        }
    }
}
