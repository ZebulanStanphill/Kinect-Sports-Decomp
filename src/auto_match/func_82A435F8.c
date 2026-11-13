#include <string.h>

typedef struct Lock_82A435F8 Lock_82A435F8;
typedef struct LockVtbl_82A435F8 {
    void *f0;
    void *f4;
    void (*lock)(Lock_82A435F8 *self);
    void *fc;
    void *f10;
    void (*unlock)(Lock_82A435F8 *self);
} LockVtbl_82A435F8;
struct Lock_82A435F8 {
    LockVtbl_82A435F8 *vt;
};

typedef struct Owner_82A435F8 {
    char pad0[0x2c];
    Lock_82A435F8 lock;   /* 0x2c */
} Owner_82A435F8;

typedef struct Param_82A435F8 Param_82A435F8;
typedef struct ParamVtbl_82A435F8 {
    char pad0[0x60];
    int (*set)(Param_82A435F8 *self, unsigned int count, const void *values, int flags); /* 0x60 */
} ParamVtbl_82A435F8;
struct Param_82A435F8 {
    ParamVtbl_82A435F8 *vt;     /* 0x00 (object 0x04) */
    char pad4[0x2c];
    Owner_82A435F8 *owner;      /* 0x30 (object 0x34) */
    unsigned int *countPtr;     /* 0x34 (object 0x38) */
    char pad38[0x4];
    unsigned int count;         /* 0x3c (object 0x40) */
    char pad40[0xc];
    unsigned char *cache;       /* 0x4c (object 0x50) */
};

typedef struct Obj_82A435F8 {
    void *vt;
    Param_82A435F8 param;       /* 0x04 */
} Obj_82A435F8;

int fn_82A435F8(Obj_82A435F8 *self, unsigned int count, const void *values, int flags)
{
    Param_82A435F8 *param;
    unsigned int size;
    unsigned int n;
    int hr;

    self->param.owner->lock.vt->lock(&self->param.owner->lock);
    size = count * 4;
    hr = 0;
    if (memcmp(values, self->param.cache, size) != 0) {
        param = &self->param;
        n = self->param.countPtr != 0 ? *self->param.countPtr : param->count;
        hr = param->vt->set(param, n, values, flags);
        if (hr >= 0)
            memcpy(self->param.cache, values, size);
    }
    self->param.owner->lock.vt->unlock(&self->param.owner->lock);
    return hr;
}
