typedef struct Lock_82F93840 {
    char *vt;
    char cs[0x1c];
    int f20;
} Lock_82F93840;

extern char lbl_8216C038[];
extern void RtlInitializeCriticalSection(void *cs);

Lock_82F93840 *fn_82F93840(Lock_82F93840 *self)
{
    self->vt = lbl_8216C038;
    self->f20 = 0;
    RtlInitializeCriticalSection(self ? self->cs : 0);
    return self;
}
