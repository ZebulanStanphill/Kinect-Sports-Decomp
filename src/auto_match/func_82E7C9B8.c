typedef struct Unk_82E7C9B8 Unk_82E7C9B8;
typedef struct UnkVtbl_82E7C9B8 {
    int (*query)(Unk_82E7C9B8 *self, const void *iid, Unk_82E7C9B8 **out);
    int (*addRef)(Unk_82E7C9B8 *self);
    int (*release)(Unk_82E7C9B8 *self);
    int (*f0c)(Unk_82E7C9B8 *self);
    int (*getChild)(Unk_82E7C9B8 *self, const void *id, int flags, Unk_82E7C9B8 **out);
    int (*getRange)(Unk_82E7C9B8 *self, __int64 *a, __int64 *b);
} UnkVtbl_82E7C9B8;
struct Unk_82E7C9B8 {
    UnkVtbl_82E7C9B8 *vt;
};

typedef struct Sink_82E7C9B8 Sink_82E7C9B8;
typedef struct SinkVtbl_82E7C9B8 {
    void *slots[22];
    int (*setValue)(Sink_82E7C9B8 *self, const void *key, __int64 value);
} SinkVtbl_82E7C9B8;
struct Sink_82E7C9B8 {
    SinkVtbl_82E7C9B8 *vt;
};

typedef struct Obj_82E7C9B8 {
    Unk_82E7C9B8 *source;
} Obj_82E7C9B8;

extern char lbl_82154C18[];
extern char lbl_820ED018[];
extern char lbl_821549B8[];
extern char lbl_8214C1B0[];
extern char lbl_8214C1C0[];

#define SAFE_RELEASE_82E7C9B8(p) if ((p) != 0) { (p)->vt->release(p); (p) = 0; }

int fn_82E7C9B8(Obj_82E7C9B8 *o, Sink_82E7C9B8 *sink)
{
    Unk_82E7C9B8 *root = 0;
    Unk_82E7C9B8 *a = 0;
    Unk_82E7C9B8 *b = 0;
    __int64 dur = 0;
    __int64 start = 0;
    __int64 end = 0;
    __int64 len;
    int hr;

    if (sink == 0) {
        hr = 0x80004003;
        goto out;
    }
    hr = o->source->vt->query(o->source, lbl_82154C18, &root);
    if (hr < 0) {
        goto done;
    }
    hr = root->vt->getChild(root, lbl_820ED018, 0, &a);
    if (hr < 0) {
        goto done;
    }
    hr = root->vt->getChild(root, lbl_821549B8, 0, &b);
    if (hr < 0) {
        goto done;
    }
    hr = a->vt->getRange(a, 0, &dur);
    if (hr < 0) {
        goto done;
    }
    hr = b->vt->getRange(b, &start, &end);
    if (hr < 0) {
        goto done;
    }
    len = end - start;
    hr = sink->vt->setValue(sink, lbl_8214C1B0, start + dur);
    if (hr < 0) {
        goto done;
    }
    hr = sink->vt->setValue(sink, lbl_8214C1C0, len);
done:
    SAFE_RELEASE_82E7C9B8(root);
    SAFE_RELEASE_82E7C9B8(a);
    SAFE_RELEASE_82E7C9B8(b);
out:
    return hr;
}
