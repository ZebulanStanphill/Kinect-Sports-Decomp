typedef struct Listener_82689370 {
    void *vt;
} Listener_82689370;

typedef struct Source_82689370 Source_82689370;

typedef struct SourceVtbl_82689370 {
    void *slots[11];
    void (*AddListener)(Source_82689370 *self, Listener_82689370 *listener);
} SourceVtbl_82689370;

struct Source_82689370 {
    SourceVtbl_82689370 *vt;
    long refs;
};

typedef struct Obj_82689370 {
    void *vt;
    int refs;
    Listener_82689370 listener;
    Source_82689370 *source;
    int active;
} Obj_82689370;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern char lbl_82005BB4[];
extern char lbl_82005BF8[];
extern char lbl_82005BEC[];

Obj_82689370 *fn_82689370(Obj_82689370 *self, Source_82689370 *source)
{
    Listener_82689370 *l;
    self->refs = 1;
    l = &self->listener;
    l->vt = lbl_82005BB4;
    self->vt = lbl_82005BF8;
    self->listener.vt = lbl_82005BEC;
    if (source != 0)
        _InterlockedExchangeAdd(&source->refs, 1);
    self->source = source;
    if (source != 0)
        source->vt->AddListener(source, &self->listener);
    self->active = 1;
    return self;
}
