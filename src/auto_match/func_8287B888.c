typedef struct Vector_8287B888 {
    float x, y, z;
} Vector_8287B888;

typedef struct ListenerPosition_8287B888 {
    Vector_8287B888 front;
    Vector_8287B888 top;
    Vector_8287B888 position;
    Vector_8287B888 extra;
} ListenerPosition_8287B888;

typedef struct Obj_8287B888 {
    char pad0[0x2c];
    unsigned int listenerIndex;
    ListenerPosition_8287B888 listener;
} Obj_8287B888;

extern int fn_82FE6898(ListenerPosition_8287B888 *position, unsigned int index);
extern void fn_82230110(void *s, const char *p);
extern void *fn_8223B688(void *dst, void *src);
extern void fn_82230300(void *s, int built, int newsize);
extern void *fn_82868378(void);
extern void fn_8286DA10(void *log, void *msg, int result);

int fn_8287B888(Obj_8287B888 *self, const Vector_8287B888 *position, const Vector_8287B888 *front,
                const Vector_8287B888 *top, const Vector_8287B888 *extra)
{
    int result;
    char a[32];
    char e[40];

    self->listener.front.x = front->x;
    self->listener.front.y = front->y;
    self->listener.front.z = -front->z;
    self->listener.top.x = top->x;
    self->listener.top.y = top->y;
    self->listener.top.z = -top->z;
    self->listener.position.x = position->x;
    self->listener.position.y = position->y;
    self->listener.position.z = -position->z;
    self->listener.extra = *extra;
    result = fn_82FE6898(&self->listener, self->listenerIndex);
    if (result != 1) {
        fn_82230110(a, "AK::SoundEngine::SetListenerPosition( ... )");
        fn_8286DA10(fn_82868378(), fn_8223B688(e, a), result);
        fn_82230300(a, 1, 0);
        return 0xa0250000;
    }
    return 0x20250000;
}
